# このソフトウェアについて #

GtkOnFstream201609130731は私個人が学習目的で作成したソフトウェアである。

これは失敗コードである。
実行するとアプリがクラッシュする。

`Gtk::Entry`でEnterキー押下したときファイル書込したかった。
しかし、アプリは`Gtk::Entry`でEnterキー押下したあと強制終了してしまう。
Gtkでfstreamをcloseする時にアクセス違反になってしまうためである。

# 開発環境 #

* Windows XP Pro SP3 32bit
* VC++ 2010 Express
    * C++/Win32

## ライブラリ ##

* [Gtkmm 2.22](http://ftp.gnome.org/pub/GNOME/binaries/win32/gtkmm/2.22/gtkmm-win32-devel-2.22.0-2.exe)
    * GTKmm 2.4
        * GTK+ 2.22.0
    * glibmm 2.4
        * glib 2.0

# イメージ #

![Window](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160912/20160912231342.png)

デバッガでの実行時エラー。

![Debugger](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160913/20160913081608.png)

exeでの実行時エラー。

![Exe](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160913/20160913081610.png)

# ライセンス #

このソフトウェアはCC0ライセンスである。

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed.ja)
