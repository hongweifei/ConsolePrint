


#include "console.hpp"
#include <memory.h>
#include <string.h>


namespace FlyConsole
{
    

    Console::Console()
    {
        #if _WIN32

        system("chcp 65001");
        system("cls");

        this->buffer1 = ::GetStdHandle(STD_OUTPUT_HANDLE);
        this->buffer2 = ::CreateConsoleScreenBuffer(GENERIC_READ|GENERIC_WRITE,FILE_SHARE_READ|FILE_SHARE_WRITE,NULL,1,NULL);
        this->backstage_buffer = this->buffer1;

        #else

        #endif

        //this->updata();
    }


    Console::~Console()
    {
        #if _WIN32

        ::CloseHandle(this->buffer1);
        ::CloseHandle(this->buffer2);
        //delete(this->info);

        #else



        #endif

    }


    uint32_t Console::get_width()
    {
        this->updata();
        return this->width;
    }


    uint32_t Console::get_height()
    {
        this->updata();
        return this->height;
    }


    void Console::get_size(int16_t &w,int16_t &h)
    {
        this->updata();
        w = this->width;
        h = this->height;
    }


    void Console::get_cursor_position(int16_t &x,int16_t &y)
    {
        this->updata();

        #if _WIN32

        x = this->info->dwCursorPosition.X;
        y = this->info->dwCursorPosition.Y;

        #else


        #endif
    }



    void Console::set_size(int16_t w,int16_t h)
    {
        #if _WIN32

        ::COORD size = {w,h};
        ::SetConsoleScreenBufferSize(this->buffer1,size);
        ::SetConsoleScreenBufferSize(this->buffer2,size);

        #else

        #endif
    }

    void Console::set_cursor_position(int16_t x,int16_t y)
    {
        #if _WIN32

        ::COORD position = {x,y};
        ::SetConsoleCursorPosition(this->backstage_buffer,position);

        #else

        #endif
    }

    void Console::move_cursor(int16_t x,int16_t y)
    {
        #if _WIN32

        ::COORD position = {x,y};
        ::SetConsoleCursorPosition(this->backstage_buffer,position);

        #else

        #endif
    }

    void Console::clear()
    {
        #if _WIN32

        char text[this->width];
        char *clear_text = (char*)memset(text,' ',this->width * sizeof(char));

        this->move_cursor(0,0);
        for (size_t i = 0; i < this->height; i++)
        {
            ::WriteConsoleA(this->backstage_buffer, clear_text, this->width, NULL, NULL);
        }
        this->move_cursor(0,0);

        /** 释放内存 */
        delete clear_text;

        #else

        #endif

        this->updata();
    }

    void Console::refresh()
    {
        #if _WIN32

        // 后台是buffer1
        if (this->backstage_buffer == this->buffer1)
        {
            ::SetConsoleActiveScreenBuffer(this->buffer1);    // 将buffer1换到前台
            this->backstage_buffer = this->buffer2;         // 将后台改为buffer2
        }

        // 后台是buffer2
        else
        {
            ::SetConsoleActiveScreenBuffer(this->buffer2);    // 将buffer2换到前台
            this->backstage_buffer = this->buffer1;         // 将后台改为buffer1
        }
        

        #else

        #endif
        
        this->updata();
    }



    int Console::getch()
    {
        #if _WIN32

        return _getch();

        #else

        #endif
    }
    

    int Console::set_text_attribute(PrintColor color)
    {
        #if _WIN32

        return ::SetConsoleTextAttribute(this->backstage_buffer,color);

        #else



        #endif
    }


    void Console::print(const char *text)
    {
        #if _WIN32

        ::WriteConsoleA(this->backstage_buffer,text,strlen(text) * sizeof(char),NULL,NULL);

        #else



        #endif
    }


    void Console::print(int16_t x,int16_t y,const char *text)
    {
        #if _WIN32

        this->move_cursor(x,y);
        ::WriteConsoleA(this->backstage_buffer,text,strlen(text) * sizeof(char),NULL,NULL);

        #else



        #endif
    }


} // namespace FlyConsole










