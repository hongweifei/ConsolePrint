





#include "console.hpp"
#include "include/ncursesw/ncurses.h"


using namespace FlyConsole;


int main()
{
    /*
    Console *console = new Console();

    console->set_text_attribute(FORE_RED);
    console->print("Hello,world!\n");
    console->print("你好，世界！\n");
    getch();

    delete console;
    */

    initscr();
	printw("Hello World !!!\n");
    addstr("你好，世界 ！！！\n");
	refresh();
	getch();
	endwin();

    return 0;
}



















