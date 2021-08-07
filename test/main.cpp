#include <iostream>
#include <vector>
#include <string>
#include "../include/colorizer.hpp"

namespace App
{   

    void test01() {
        std::cout << Colorizer::blue("Hello World..!") << '\n';
        std::cout << Colorizer::yellow("Hello World..!") << '\n';
        std::cout << Colorizer::green("Hello World..!") << '\n';
        std::cout << Colorizer::magenta("Hello World..!") << '\n';
        std::cout << Colorizer::cyan("Hello World..!") << '\n';
        std::cout << Colorizer::red("Hello World..!") << '\n';
        std::cout << Colorizer::white("Hello World..!") << '\n';
    }


    void test02() {
        std::cout << Colorizer::colorize<Color::Blue>("Hello World..!") <<'\n';
        std::cout << Colorizer::colorize<Color::Yellow>("Hello World..!") <<'\n';
        std::cout << Colorizer::colorize<Color::Green>("Hello World..!") <<'\n';
        std::cout << Colorizer::colorize<Color::Magenta>("Hello World..!") <<'\n';
        std::cout << Colorizer::colorize<Color::Cyan>("Hello World..!") <<'\n';
        std::cout << Colorizer::colorize<Color::Red>("Hello World..!") <<'\n';
        std::cout << Colorizer::colorize<Color::White>("Hello World..!") <<'\n';
    }


    void test03() {
        std::cout << Colorizer::Blue << "Hello" << Colorizer::Reset << " World..!" << '\n';
        std::cout << Colorizer::Yellow << "Hello" << Colorizer::Reset << " World..!" << '\n';
        std::cout << Colorizer::Green << "Hello" << Colorizer::Reset << " World..!" << '\n';
        std::cout << Colorizer::Magenta << "Hello" << Colorizer::Reset << " World..!" << '\n';
        std::cout << Colorizer::Cyan << "Hello" << Colorizer::Reset << " World..!" << '\n';
        std::cout << Colorizer::Red << "Hello" << Colorizer::Reset << " World..!" << '\n';
        std::cout << Colorizer::White << "Hello World.. !" << Colorizer::Reset << '\n';
    }

    void test04() {
        std::cout << Colorizer::MarkBlue << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
        std::cout << Colorizer::MarkYellow << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
        std::cout << Colorizer::MarkGreen << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
        std::cout << Colorizer::MarkMagenta << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
        std::cout << Colorizer::MarkCyan << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
        std::cout << Colorizer::MarkRed << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
    }

    void test05() {
        std::cout << Colorizer::mark<Color::Blue>("higlighted words...!")  << " Try Something " << '\n';
        std::cout << Colorizer::mark<Color::Yellow>("higlighted words...!") <<  " Try Something " << '\n';
        std::cout << Colorizer::mark<Color::Green>("higlighted words...!") <<  " Try Something " << '\n';
        std::cout << Colorizer::mark<Color::Magenta>("higlighted words...!") <<  " Try Something " << '\n';
        std::cout << Colorizer::mark<Color::Cyan>("higlighted words...!") <<  " Try Something " << '\n';
        std::cout << Colorizer::mark<Color::Red>("higlighted words...!") <<  " Try Something " << '\n';
    }

    void testCaption(size_t testNum, std::string state) {
        std::cout << "\n========== " << 
            Colorizer::Red << 
            "Test " + std::to_string(testNum) + ' ' + state <<
            Colorizer::Reset << 
            " ==========" << "\n\n";
    }

    static void Run(std::vector<std::string> args)
    {
        testCaption(1, "Begin");
        test01();
        testCaption(1, "End");


        testCaption(2, "Begin");
        test02();
        testCaption(2, "End");
        
        testCaption(3, "Begin");
        test03();
        testCaption(3, "End");

        testCaption(4, "Begin");
        test04();
        testCaption(4, "End");

        testCaption(5, "Begin");
        test05();
        testCaption(5, "End");
    }

} // namespace App

/**
 *  @brief
 *      Application starting point. 
**/
int main(int argc, const char *argv[])
{
    App::Run({argv + 1, argv + argc});

    return 0;
}