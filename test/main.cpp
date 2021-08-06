#include <iostream>
#include <vector>
#include <string>
#include "../include/colorizer.hpp"

namespace App
{
    static void Run(std::vector<std::string> args)
    {
        // std::cout << Colorizer::blue("Hello World.. !") << '\n';
        // std::cout << Colorizer::yellow("Hello World.. !") << '\n';
        // std::cout << Colorizer::green("Hello World.. !") << '\n';
        // std::cout << Colorizer::magenta("Hello World.. !") << '\n';
        // std::cout << Colorizer::cyan("Hello World.. !") << '\n';
        // std::cout << Colorizer::red("Hello World.. !") << '\n';
        // std::cout << Colorizer::white("Hello World.. !") << '\n';


        std::cout << Colorizer::colorize<Color::Blue>("Hello World.. !") <<'\n';
        std::cout << Colorizer::colorize<Color::Yellow>("Hello World.. !") <<'\n';
        std::cout << Colorizer::colorize<Color::Green>("Hello World.. !") <<'\n';
        std::cout << Colorizer::colorize<Color::Magenta>("Hello World.. !") <<'\n';
        std::cout << Colorizer::colorize<Color::Cyan>("Hello World.. !") <<'\n';
        std::cout << Colorizer::colorize<Color::Red>("Hello World.. !") <<'\n';
        std::cout << Colorizer::colorize<Color::White>("Hello World.. !") <<'\n';
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