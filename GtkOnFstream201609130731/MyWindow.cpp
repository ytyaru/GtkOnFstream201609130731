#include <glibmm.h>
#include "MyWindow.h"
#include <stdio.h>
#include <stdlib.h>
MyWindow::MyWindow(char* runPath)
{
	memset(m_runPath, '\0', 1024);
	strcpy_s(m_runPath, 1024, runPath);
	strcat_s(m_runPath, 1024, "\\entry.log");
	
	m_entry.set_text(Glib::locale_to_utf8("Gtk::Entry テキストボックス"));
	m_entry.signal_activate().connect( sigc::mem_fun( *this, &MyWindow::on_activate ) );
	add( m_entry );
	show_all_children();
}
MyWindow::~MyWindow(void)
{
	//m_stream.close();
}
bool MyWindow::on_delete_event(GdkEventAny* any_event)
{
	//m_stream.close();
	return false;
}
void MyWindow::on_activate()
{
	Gtk::MessageDialog( m_entry.get_text() ).run();
	{
		std::fstream stream(m_runPath, std::ios::app);
		stream << m_entry.get_text() << std::endl;
		stream << std::flush;
		stream.close();
	}
	//m_stream.open(m_runPath, std::ios::app);
	//m_stream << m_entry.get_text() << std::endl;
	//m_stream.close();
}