# Colorink
C++ library for Colors in a terminal. Coloring and Ink, a portemanteau of doom! 

## Installation
In order to install the library, run 
```console
git clone https://github.com/Wittmaxi/Colorink
cd Colorink
make install
```
Then, include the library with 
```c++
#include <colorink.hpp>
```
and compile with the -lINK flag.

## Usage
### Overview
Colorink Classes that can be printed with std::cout or infact any other ostream. 
These classes then print out ASCII-Modifiers that change the text color or the text effects. 

### Namespace 
The entire library and the following components are all enclosed in the namespace INK:: 

### Colors
The following colors are supported:

```c++ 
enum class COLOR {
BLACK
RED
GREEN
YELLOW 
BLUE
MAGENTA 
CYAN
WHITE
NONE
}
```

They can be casted to an unsigned int type.

### Color Modes
A color Mode consists of a background and a foreground. In order to create a Color Mode, call the constructor of ColorMode
which takes two COLORs as arguments.
Example: 
```c++
std::cout << INK::ColorMode (INK::COLOR::WHITE, INK::COLOR::RED) << "red text\n" << INK::ColorMode (INK::COLOR::WHITE, INK::COLOR::BLACK);
```

### Effects
There are multiple effects that can be used as modifiers. 
#### reset
Resets the colors to the standard colors. 
#### underline
Turns on the underline for text.
#### underlineOff
Turns off the underline for text.
#### inverse
Inverses the background and foreground color. 
#### inverseOff
Turns off color inversion.
#### bold
Turns on bold text.
#### boldOff
Turns off bold text.

Example: 
```c++
std::cout << INK::bold << "my Bold Text \n" << INK::reset;
```