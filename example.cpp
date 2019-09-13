
/// C++17 Enumerator printable, sample example
/// GitHub: https://github.com/ClnViewer/printable-enumerator-template
/// Build:  g++ -Wall -std=c++17 -D_BUILD_ENUM_PRINTABLE=1 example.cpp -o example.exe

#include <string>
#include <iostream>

#if !defined(_BUILD_ENUM_PRINTABLE)
#  define _BUILD_ENUM_PRINTABLE 1
#endif

#include "extEnumPrintable.h"

class eTest
{
    public:

        ENUM_PRINTABLE(EnumeratorName, int32_t,
                ENUM_TAG_OKAY,  // == 0
                ENUM_TAG_FAIL,
                ENUM_TAG_DONE,
                ENUM_TAG_SEND,
                ENUM_TAG_RECV,
                ENUM_TAG_DATA
        );
};

int main()
{
    int32_t n = enumtoint(eTest::EnumeratorName::ENUM_TAG_DONE);
    std::cout << "Test int     : " << n << std::endl;
    std::cout << "Test string  : " << enumtostring(eTest::EnumeratorName::ENUM_TAG_DONE) << std::endl;
    std::cout << "Test ostream : " << eTest::EnumeratorName::ENUM_TAG_DONE << std::endl;
    std::cout << "Test from int: " << eTest::getEnumeratorName(2) << std::endl;

    for (std::size_t i = 0U; i < eTest::sizeEnumeratorName(); i++)
        std::cout << "\t- " << i << " : " << eTest::getEnumeratorName(i) << std::endl;

    return 0;
}
