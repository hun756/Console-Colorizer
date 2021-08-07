# Console-Colorizer

## ~150 lines Ascii Escape Sequnce Console Colorizing.

Supporting Colors:
-  Red     
-  Green   
-  Yellow  
-  Blue    
-  Magenta 
-  Cyan    
-  White

## Usage

| Snippet                                                   | Output                                                                                                     |
| --------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------- |
| `Colorizer::blue("Hello World..!")`                       | ![Colorize Blue](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_blue_140x25.png)       |
| `Colorizer::yellow("Hello World..!")`                     | ![Colorize Yellow](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_yellow_140x25.png)   |
| `Colorizer::green("Hello World..!")`                      | ![Colorize Green](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_green_140x25.png)     |
| `Colorizer::magenta("Hello World..!")`                    | ![Colorize Magenta](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_magenta_140x25.png) |
| `Colorizer::cyan("Hello World..!")`                       | ![Colorize Cyan](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_cyan_140x25.png)       |
| `Colorizer::red("Hello World..!")`                        | ![Colorize Red](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_red_140x25.png)         |
| `Colorizer::white("Hello World..!")`                      | ![Colorize White](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_white_140x25.png)     |
|                                                           |                                                                                                            |
| `Colorizer::colorize<Color::Blue>("Hello World..!")`      | ![Colorize Blue](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_blue_140x25.png)       |
| `Colorizer::colorize<Color::Yellow>("Hello World..!")`    | ![Colorize Yellow](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_yellow_140x25.png)   |
| `Colorizer::colorize<Color::Green>("Hello World..!")`     | ![Colorize Green](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_green_140x25.png)     |
| `Colorizer::colorize<Color::Magenta>("Hello World..!")`   | ![Colorize Magenta](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_magenta_140x25.png) |
| `Colorizer::colorize<Color::Cyan>("Hello World..!")`      | ![Colorize Cyan](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_cyan_140x25.png)       |
| `Colorizer::colorize<Color::Red>("Hello World..!")`       | ![Colorize Red](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_red_140x25.png)         |
| `Colorizer::colorize<Color::White>("Hello World..!")`     | ![Colorize White](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_white_140x25.png)     |
|                                                           |                                                                                                            |
| `Colorizer::mark<Color::Blue>("higlighted words...!")`    | ![Mark Blue](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_blue_180x19.png)         |
| `Colorizer::mark<Color::Yellow>("higlighted words...!")`  | ![Mark Yellow](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_yellow_182x19.png)     |
| `Colorizer::mark<Color::Green>("higlighted words...!")`   | ![Mark Green](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_green_180x19.png)       |
| `Colorizer::mark<Color::Magenta>("higlighted words...!")` | ![Mark Magenta](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_magenta_180x19.png)   |
| `Colorizer::mark<Color::Cyan>("higlighted words...!")`    | ![Mark Cyan](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_cyan_180x19.png)         |
| `Colorizer::mark<Color::Red>("higlighted words...!")`     | ![Mark Red](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_red_180x19.png)           |

It can also be used as follows.

```cpp
std::cout << Colorizer::Blue    << "Hello" << Colorizer::Reset << " World..!" << '\n';
std::cout << Colorizer::Yellow  << "Hello" << Colorizer::Reset << " World..!" << '\n';
std::cout << Colorizer::Green   << "Hello" << Colorizer::Reset << " World..!" << '\n';
std::cout << Colorizer::Magenta << "Hello" << Colorizer::Reset << " World..!" << '\n';
std::cout << Colorizer::Cyan    << "Hello" << Colorizer::Reset << " World..!" << '\n';
std::cout << Colorizer::Red     << "Hello" << Colorizer::Reset << " World..!" << '\n';

std::cout << Colorizer::White   << "Hello World.. !" << Colorizer::Reset << '\n';
```

Output : 
![cb_view](https://github.com/hun756/Console-Colorizer/blob/main/resources/cb_other.png)


```cpp
std::cout << Colorizer::MarkBlue    << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
std::cout << Colorizer::MarkYellow  << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
std::cout << Colorizer::MarkGreen   << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
std::cout << Colorizer::MarkMagenta << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
std::cout << Colorizer::MarkCyan    << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
std::cout << Colorizer::MarkRed     << "higlighted words...!" << Colorizer::Reset << " Try Something " << '\n';
```
Output:
![mark_view](https://github.com/hun756/Console-Colorizer/blob/main/resources/mark_other.png)

## LICENSE
- MIT