#ifndef CONSOLE_COLORİZER_HPP
#define CONSOLE_COLORİZER_HPP

#include <string>
#include <stdexcept>

enum class Color
{
    Red,
    Green,
    Yellow,
    Blue,
    Magenta,
    Cyan,
    White,
};

namespace Colorizer
{

    static std::string red(std::string val)
    {
        return "\x1B[31m" + val + "\033[0m";
    }

    static std::string green(std::string val)
    {
        return "\x1B[32m" + val + "\033[0m";
    }

    static std::string yellow(std::string val)
    {
        return "\x1B[33m" + val + "\033[0m";
    }

    static std::string blue(std::string val)
    {
        return "\x1B[34m"+ val + "\033[0m";
    }

    static std::string magenta(std::string val)
    {
       return "\x1B[35m"+ val + "\033[0m";
    }

    static std::string cyan(std::string val)
    {
        return "\x1B[36m"+ val + "\033[0m";
    }

    static std::string white(std::string val)
    {
        return "\x1B[37m"+ val + "\033[0m";
    }

    template<Color c>
    static std::string colorize(std::string val)
    {
        switch (c)
        {
            case Color::Red: {
                
                return red(val);
                break;
            }

            case Color::Green: {
                
                return green(val);
                break;
            }

            case Color::Yellow: {
                
                return yellow(val);
                break;
            }

            case Color::Blue: {
                
                return blue(val);
                break;
            }

            case Color::Magenta: {
                
                return magenta(val);
                break;
            }

            case Color::Cyan: {
                
                return cyan(val);
                break;
            }

            case Color::White: {
                
                return white(val);
                break;
            }
            
            default:
                throw std::domain_error("No Color Matched :/");
                break;
        }
    }

} // namespace Colorizer

#endif /* end of incldue guard : CONSOLE_COLORİZER_HPP*/