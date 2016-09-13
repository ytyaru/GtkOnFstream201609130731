#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <gtkmm.h>
class MyWindow : public Gtk::Window
{
public:
	explicit MyWindow(char* runPath);
	virtual ~MyWindow(void);
private:
	bool on_delete_event(GdkEventAny* any_event);
	void on_activate();
	Gtk::Entry m_entry;
	char m_runPath[1024];
	//std::fstream m_stream;
};
