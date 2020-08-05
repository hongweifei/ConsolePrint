




#define NCURSES
#include "console.hpp"

#if WIN32
#include "include/ncursesw/ncurses.h"
#else
#include <ncurses.h>
#endif


using namespace FlyConsole;


int main()
{
    
    Console *console = new Console();

    console->set_text_color(Console::FOREGROUND_BLACK|Console::BACKGROUND_WHITE);
    console->print("Hello,world!\n");
    console->print("你好，世界！\n");
    console->get_ch();

    delete console;
    

    /*
    initscr();
	printw("Hello World !!!\n");
    addstr("你好，世界 ！！！\n");
	refresh();
	getch();
	endwin();
    */

    return 0;
}



















