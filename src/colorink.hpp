#ifndef COLORINK_INCLUDE
#define COLORINK_INCLUDE

#include <iostream>


namespace INK
{
    enum class COLOR : unsigned char {
        BLACK = 30,
        RED = 31,
        GREEN = 32,
        YELLOW = 33,
        BLUE = 34,
        MAGENTA = 35,
        CYAN = 36,
        WHITE = 37,
        NONE = 0xff
    };
    struct ColorMode {
        ColorMode(COLOR foreground, COLOR background);
        int fg;
        int bg;
    };

    class reset_t{};
    extern reset_t reset;
    class underline_t{};
    extern underline_t underline;
    class underlineOff_t{};
    extern underlineOff_t underlineOff;
    class inverse_t{};
    extern inverse_t inverse;
    class inverseOff_t{};
    extern inverseOff_t inverseOff;
    class bold_t{};
    extern bold_t bold;
    class boldOff_t{};
    extern boldOff_t boldOff;

    std::ostream& operator<< (std::ostream& os, const ColorMode& cm);
    std::ostream& operator<< (std::ostream& os, const reset_t& effect);
    std::ostream& operator<< (std::ostream& os, const underline_t& effect);
    std::ostream& operator<< (std::ostream& os, const underlineOff_t& effect);
    std::ostream& operator<< (std::ostream& os, const inverse_t& effect);
    std::ostream& operator<< (std::ostream& os, const inverseOff_t& effect);
    std::ostream& operator<< (std::ostream& os, const bold_t& effect);
    std::ostream& operator<< (std::ostream& os, const boldOff_t& effect);


}
#endif
