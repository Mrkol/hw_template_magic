#include "ahalaimahalai"
#include <iostream>

int main()
{
	using Result = AhalaiMahalai<1, 2, 3>;
    constexpr int who = Result::who;
    constexpr int whence = Result::whence;
    constexpr int how = Result::how;
    std::cout << who << ' ' << whence << ' ' << how << std::endl;
}
