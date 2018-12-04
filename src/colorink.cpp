#include "colorink.hpp"


// You need to output ANSI colour codes. Note that not all terminals support this; if colour sequences are not supported, garbage will show up.

// Example:

//  cout << "\033[1;31mbold red text\033[0m\n";

// Here, \033 is the ESC character, ASCII 27. It is followed by [, then zero or more numbers separated by ;, and finally the letter m. The numbers describe the colour and format to switch to from that point onwards.

// The codes for foreground and background colours are:

//          foreground background
// black        30         40
// red          31         41
// green        32         42
// yellow       33         43
// blue         34         44
// magenta      35         45
// cyan         36         46
// white        37         47

// Additionally, you can use these:

// reset             0  (everything back to normal)
// bold/bright       1  (often a brighter shade of the same colour)
// underline         4
// inverse           7  (swap foreground and background colours)
// bold/bright off  21
// underline off    24
// inverse off      27


namespace INK {
    ColorMode::ColorMode(COLOR foreground, COLOR background) : fg (static_cast <int> (foreground)), bg (static_cast <int> (background) + 10)
    {
    }

    reset_t reset;
    underline_t underline;
    underlineOff_t underlineOff;
    inverse_t inverse;
    inverseOff_t inverseOff;
    bold_t bold;
    boldOff_t boldOff;

    std::ostream& operator<< (std::ostream& os, const ColorMode& cm) {
        std::cout << "\e[" << cm.fg << ";" << cm.bg << "m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const reset_t& effect) {
        std::cout << "\e[0m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const underline_t& effect) {
        std::cout << "\e[4m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const underlineOff_t& effect) {
        std::cout << "\e[24m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const inverse_t& effect) {
        std::cout << "\e[7m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const inverseOff_t& effect) {
        std::cout << "\e[27m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const bold_t& effect) {
        std::cout << "\e[1m";
        return os;
    }
    std::ostream& operator<< (std::ostream& os, const boldOff_t& effect) {
        std::cout << "\e[21m";
        return os;
    }

}