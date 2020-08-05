




#ifndef __CONSOLE_HEAD__
#define __CONSOLE_HEAD__

#include <stdint.h>

#ifdef _WIN32

#include <Windows.h>
#include <conio.h>

#endif // _WIN32


/******************************************************************************************************************
 *
 * 一些特殊符号
 *
 * ︻︼
 * ︽︾
 * 〒↑↓☉⊙●〇◎¤★☆■▓
 * 「」『』◆◇▲△▼▽
 * ◣◥◢◣◤ ◥№↑↓→←↘↙Ψ※㊣∑⌒∩
 * 【】
 * 〖〗＠ξζω□∮〓※》∏卐√ ╳々♀♂∞①ㄨ≡╬╭╮╰╯
 * ╱╲ 
 * ▂ ▂ ▃ ▄ ▅ ▆ ▇ █ 
 * ▂▃▅▆█ 
 * ▁▂▃▄▅▆▇█▇▆▅▄▃▂▁
 *
 *
 * ๑•ิ.•ั๑ ๑๑ ♬✿.｡.:* ☂☃ ☄ ★ ☆ ☇ ☈ ☉ ☒☢ ☺ ☻ ☼ ☽☾ ♠ 　 ♡ ♢ ♣ ♤ ♥ ♦ ♧ ♨ ♩ εїз℡❣·۰•●○● ゃōゃ♥ ♡๑۩ﺴ ☜ ☞ ☎ ☏♡ ⊙◎ ☺ ☻✖╄ஐﻬ 
 * ► ◄ ▧ ▨ ♨ ◐ ◑ ↔ ↕ ▪ ▫ ☼ ♦ ? ▄ █▌ ?? ? ▬♦ ◊ ◦ ☼ ♠♣ ▣ ▤ ▥ ▦ ▩ ◘ ◙ ◈ ♫ ♬ ♪ ♩ ♭ ♪ の 
 * ☆ → あぃ ￡ ＃ ＠ ＆ ＊ ￥✰ ☆ ★ ¤ ☼ ♡ ღ☻ ☺ ⊕ ☉ Θ o O ㊝ ⊙ ◎ ◑ ◐ ۰ • ● ▪ ▫ ｡ ﾟ ๑ ☜ ☞ ♨ 
 * ☎ ☏ ︻ ︼ ︽ ︾ 〈 〉 ︿ ﹀ ∩ ∪ ﹁ ﹂﹃﹄﹝ ﹞ ＜ ＞ ≦ ≧ ﹤ ﹥ 「 」 ︵ ︶︷ ︸︹︺
 * 〔 〕 【 】 《 》 （ ） ｛ ｝ ﹙ ﹚ 『』﹛﹜╳ ＋ － ﹢ × ÷ ＝ ≠ ≒ ∞ ˇ ± √ ⊥ ∠ ∟ ⊿ ㏒ ▶ ▷ ◀ ◁ 
 * ★ ☆ ☉ ☒☢ ☺ ☻ ☼ ♠ ♡ ♣ ♤ ♥ ♦ ♧ ♨ ♩ ? ? ㍿ ♝ ♞ ♯♩♪♫♬♭♮ ☎ ☏ ☪ ♈ ♨ ºº ₪ ¤ 큐 « » ™ ♂✿
 * ♥ の ↑ ↓ ← → ↖ ↗ ↙ ↘ ㊣ ◎ ○ ● ⊕ ⊙ ○　 △ ▲ ☆ ★ ◇ ◆ ■ □ ▽ ▼ § ￥ 〒 ￠￡ ※ ♀ ♂ © ® ⁂ ℡ 
 * ↂ? ▣ ▤ ▥ ▦ ▧ ♂ ♀ ♥ ♡ ☜ ☞ ☎ ☏ ⊙ ◎ ☺ ☻ ► ◄ ▧ ▨ ♨ ◐ ◑ ↔ ↕ ♥ ♡ ▪ ▫ ☼ ♦ ? ▄ █ ▌ ? ? ? ▬ ♦ ◊ 
 * ◘ ◙ ◦ ☼ ♠ ♣ ▣ ▤ ▥ ▦ ▩ ◘ ◙ ◈ ♫ ♬ ♪ ♩ ♭ ♪ ✄☪☣☢☠ ⅰⅱⅲⅳⅴⅵⅶ ⅷⅸⅹⅺⅻⅠⅡⅢⅣⅤⅥⅦ Ⅷ Ⅷ ⅨⅩⅪⅫ
 * ㊊㊋㊌㊍㊎㊏㊐㊑㊒㊓㊔㊕㊖㊗㊘㊜㊝㊞㊟㊠㊡㊢㊣㊤㊥㊦㊧㊨㊩㊪㊫㊬㊭㊮㊯㊰ ✗✘✚✪✣✤✥✦✧✩✫✬✭✮✯✰
 * 【】┱ ┲ ✓ ✔ ✕ ✖ *.:｡✿*ﾟ‘ﾟ･✿.｡.: ≧０≦ o(╥﹏╥)o //(ㄒoㄒ)// {{{(>_<)}}} ™ぷ▂▃▅▆█ 
 * ∏卐 ※◤ ◥ ﹏﹋﹌ ∩∈∏ ╰☆╮≠→№← ︵︶︹︺【】〖〗＠﹕﹗/ ' _ < > `,·。≈{}~ ～() _ -『』√ $ 
 * @ * & # ※卐 々∞Ψ ∪∩∈∏ の ℡ ぁ §∮〝〞ミ灬ξ№∑⌒ξζω＊ㄨ ≮≯ ＋－×÷﹢﹣±／＝∫∮∝ ∞ ∧∨ ∑ ∏ 
 * ∥∠ ≌ ∽ ≦ ≧ ≒﹤﹥じ☆ ■♀『』◆◣◥▲Ψ ※◤ ◥ →№←㊣∑⌒〖〗＠ξζω□∮〓※∴ぷ▂▃▅▆█ ∏卐
 * 【】△√ ∩¤々♀♂∞①ㄨ≡↘↙▂▂ ▃ ▄ ▅ ▆ ▇ █┗┛╰☆╮ ≠ ▂ ▃ ▄ ▅┢┦aΡｐy ♡^_^♡　^_^.......
 * ♧♧ ☜♥☞.︻︼─一　▄︻┻┳═一 ﹏◢ ◣ ◥ ◤ ▽ ▧ ▨ ▣ ▤ ▥ ▦ ▩ ◘ ◙ ▓ ? ? Café № ＠ ㊣ ™ ℡
 * 凸 の ๑۞๑ ๑۩ﺴ ﺴ۩๑ o(‧'''‧)o ❆ べò⊹⊱⋛⋋ ⋌⋚⊰⊹ ⓛⓞⓥⓔ べ ☀ ☼ ☜ ☞ ⊙® ◈ ♦ ◊ ◦ ◇ ◆ εїз 
 * ☆·.¸¸.·´¯`·.¸¸.¤ ~♡のⓛⓞⓥⓔ♡~☃⊹⊱⋛⋌⋚⊰⊹✗(*w*)\ ≡[。。]≡※◦º°×°º◦εїз´¯`·»｡｡♀♡╭☆╯
 * ºØØºøº¤ø,¸¸,ºº¤øøºﷲﷲ°º¤ø,¸¸, げこごさざしじすぜそぞただちぢっつづてでとどなにぬねのはば ♪♫╭
 * ♥ ๑•ิ.•ัﻬஐ ✎ぱひびぴふぶぷへべぺほぼぽまみむめも ❃❂❁❀✿✾✽✼✻✺✹✸✷☀ o O ＃♡ ┽┊﹎.εїз︷
 * ✿‧:﹎｡❤‧:❉:‧ .｡.:*･❀●•♪.。‧:❉:‧ °º¤ø,¸¸,ø¤º°`°º¤ø*.:｡✿*ﾟ‘ﾟ･✿.｡.:*.:｡✿*ﾟ’ﾟ･✿.｡✎*εїз ↔ 
 * ↕ ▪ → ︷╅╊✿ (¯`•._.• •._.•´¯)(¯`•¸•´¯) ❤`•.¸¸.•´´¯`•• .¸¸.•´¯`•.•●•۰• ••.•´¯`•.•• 
 * ••.•´¯`•.••—¤÷(`[¤* *¤]´)÷¤——(•·÷[ ]÷·•)— 〓 ☆ ★┣┓┏┫×╰ノ◢ ◣ ◥ ◤ Ω ж ф юЮ ━╃ 
 * ╄━ ┛┗ ┓┏ ◇ ◆ ※ .'. ☂.'.❤ ♥ 『』 〖〗▓ ► ◄ ? ? ▓ ╮╭ ╯╰ ァ ┱ ┲☃ ☎ ☏ ☺ ☻ ▧ ▨ ♨ ◘ 
 * ◙ ♠ ♧ ♣ ▣▤ ▥ ▦ ▩ ⊕ ×º°”˜`”°º× ×º°”˜`”°º×»-(¯`v´¯)-» ×÷·.·´¯`·)» «(·´¯`·.·÷×*∩_∩* ⓛⓞⓥⓔ 
 * ╬ ╠ ╣∷ ღ ☃ ❆ ￡ ∆ Š Õ Ő ő ∞ © ‡ † Ž ஜ ஒ ண இ ஆ ௰ ♪♪♫▫—(•·÷[ ]÷·•)— ·÷±‡±±‡±÷· 
 * Oº°‘¨ ¨‘°ºO •°o.O O.o°• ¨°o.O O.o°¨—¤÷(`[¤* *¤]´)÷¤—•·.·´¯`·.·• •·.·´¯`·.·•´`·.(`·.¸ ¸.·´).·´`·» »-(¯`v´¯)-»█┗┛↘↙╰☆╮ ≠ ☜♥☞ ︻︼─一　
 * ▄︻┻┳═一 -─═┳︻　∝╬══→　::======>>　☆═━┈┈━═☆　┣▇▇▇═─ ■◆◣◥▲◤ ◥〓∴ぷ▂▃▅▆█ 【】 
 * ๑۞๑ ๑۩ﺴﺴ۩๑๑۩۞۩...¤¸¸.·´¯`·.¸·..>>--» [[]] «--<<..·.¸¸·´¯`·.¸¸¤... .•:*´¨`*:•.☆۩ ۞ ۩ ۩ ۞ ۩☆•:*´¨`*:•. 
 * ❤`•.¸¸.•´´¯`••.¸¸.•´´¯`•´❤ ⊹⊱⋛⋋ ⋌⋚⊰⊹ 彡 ❝❞° ﹌﹎ ╱╲ ☁ ₪ ¡ Þ ௫ μ べ ☪ ☠ ╬ ╠ ╣∷ ღ :﹗/ ' _ < > `,·。≈ 
 * {}~ ～() - √ $ * & # ※＊≮≯ ＋－× ÷﹢±／＝∫∮∝ ∧∨∥∠ ≌ ∽ ≦ ≧ ≒﹤﹥じ ①②③④⑤⑥⑦⑧⑨⑩ ⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳ 
 * ⒶⒷⒸⒹⓐⓑⓒⓓⓔⓕ ⓖⓗⓘⓙⓚⓛ ⓜⓝⓞⓟⓠⓡ ⓢⓣⓤⓥⓦⓧ ⓨⓩ 凸(⊙▂⊙✖ )(づ￣ ³￣)づヾ（*⌒ヮ⌒*）ゞ ( c//'-}{-*\\x) (-'๏_๏'-) 
 * (◐ o ◑ ) (⊙...⊙ )｡◕‿◕｡ ๏[-ิ_•ิ]๏(•ิ_•ิ)? \(•ิ_•ิ\) (/•ิ_•ิ)/ (︶︹︺)(*-`ω´- )人(ц｀ω´ц*)(●ゝω)ノヽ(∀＜●)(ㄒoㄒ)(>_<)⊙▂⊙ 
 * ⊙０⊙ ⊙︿⊙　⊙ω⊙　⊙﹏⊙　⊙△⊙　⊙▽⊙ o(‧'''‧)o (◡‿◡✿) (◕‿◕✿) (◕〝◕) (∩_∩)ミ●﹏☉ミ (≧０≦) o(╥﹏╥)o 
 * ㋀ ㋁㋂㋃㋄ ㋅ ㋆ ㋇ ㋈ ㋉ ㋊ ㋋ ㏠ ㏡ ㏢ ㏣ ㏤ ㏥ ㏦㏧㏨㏩ ㏪ ㏫ ㏬ ㏭ ㏮ ㏯ ㏰ ㏱ ㏲ ㏳ ㏴ ㏵ ㏶ 
 * ㏷㏸㏹㏺ ㏻ ㏼ ㏽ ㏾ ㍘ ㍙ ㍚ ㍛ ㍜ ㍝ ㍞ ㍟ ㍠ ㍡㍢㍣㍤ ㍥ ㍦ ㍧ ㍨ ㍩ ㍪ ㍫ ㍬ ㍭ ㍮ ㍯㍰㊛㊚
 *
 *****************************************************************************************************************************/




namespace FlyConsole
{


    typedef enum __print_color__ : uint16_t
    {

        #if _WIN32

        FORE_BLACK = 0,
        FORE_RED = 0x0004,                                  // FOREGROUND_RED
        FORE_GREEN = 0x0002,                                // FOREGROUND_GREEN
        FORE_YELLOW = FORE_RED | FORE_GREEN,
        FORE_BLUE = 0x0001,                                 // FOREGROUND_BLUE
        FORE_MAGENTA = FORE_RED | FORE_BLUE,
        FORE_CYAN = FORE_GREEN | FORE_BLUE,
        FORE_WHITE = FORE_RED | FORE_GREEN | FORE_BLUE,

        BACK_BLACK = 0,
        BACK_RED = 0x0040,                                  // BACKGROUND_RED
        BACK_GREEN = 0x0020,                                // BACKGROUND_GREEN
        BACK_YELLOW = BACK_RED | BACK_GREEN,
        BACK_BLUE = 0x0010,                                 // BACKGROUND_BLUE
        BACK_MAGENTA = BACK_RED | BACK_BLUE,
        BACK_CYAN = BACK_GREEN | BACK_BLUE,
        BACK_WHITE = BACK_RED | BACK_GREEN | BACK_BLUE,

        #else

        FORE_BLACK = 0,
        FORE_RED = 1,
        FORE_GREEN = 2,
        FORE_YELLOW = 3,
        FORE_BLUE = 4,
        FORE_MAGENTA = 5,
        FORE_CYAN = 6,
        FORE_WHITE = 7,

        BACK_BLACK = 0,
        BACK_RED = 1,
        BACK_GREEN = 2,
        BACK_YELLOW = 3,
        BACK_BLUE = 4,
        BACK_MAGENTA = 5,
        BACK_CYAN = 6,
        BACK_WHITE = 7,

        #endif // _WIN32
        
    }PrintColor;



    

    class Console
    {
    private:

        uint32_t width;
        uint32_t height;

        #if _WIN32

        HANDLE backstage_buffer;            // 要修改的（后台）
        HANDLE buffer1;
        HANDLE buffer2;

        CONSOLE_SCREEN_BUFFER_INFO *info;

        #else

        #endif
        

    private:
        void updata()
        {
            #if _WIN32

            GetConsoleScreenBufferInfo(this->backstage_buffer,this->info);
            this->width = this->info->dwSize.X;
            this->height = this->info->dwSize.Y;

            #else

            #endif
        }


    public:
        Console();
        ~Console();
        

        /**
         * 获取控制台的宽
         * （Windows系统下，获取后台的）
         * 
         * @return 控制台的宽度
         * */
        uint32_t get_width();


        /**
         * 获取控制台的高
         * （Windows系统下，获取后台的）
         * 
         * @return 控制台的高度
         * */
        uint32_t get_height();


        /**
         * 获取控制台的大小
         * （Windows系统下，获取后台的）
         * 
         * @param w:存储宽的变量
         * @param h:存储高的变量
         * */
        void get_size(int16_t &w,int16_t &h);


        /**
         * 获取光标位置
         * （Windows系统下，获取后台的）
         * 
         * @param x:存储列数（横坐标）的变量
         * @param y:存储行数（纵坐标）的变量
         * */
        void get_cursor_position(int16_t &x,int16_t &y);




        /**
         * 设置控制台窗口的大小
         * （Windows系统下改两个控制台的大小）
         * 
         * @param w:要修改的宽
         * @param h:要修改的高
         * */
        void set_size(int16_t w,int16_t h);


        /**
         * 修改光标位置
         * （Windows系统下，改后台的控制台的光标位置）
         * */
        void set_cursor_position(int16_t x,int16_t y);


        /**
         * 移动光标
         * （Windows系统下，改后台的控制台的光标位置）
         * */
        void move_cursor(int16_t x,int16_t y);

        /**
         * 清屏
         * （Windows系统下使用双缓冲，清空的后台控制台的内容）
         * */
        void clear();


        /**
         * 刷新控制台
         * （Windows系统下，将后台换到前台）
         * */
        void refresh();



        /**
         * 获取按下的按键
         * 
         * @return 
         * */
        int getch();

        /**
         * 修改输出文本的属性
         * */
        int set_text_attribute(PrintColor color);       


        void print(const char *text);
        void print(int16_t x,int16_t y,const char *text);
    };

    


} // namespace FlyConsole









#endif // __CONSOLE_HEAD__



