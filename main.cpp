#include "foo.h"

int main()
{
    Foo<const char*> foo("Hello");
    std::cout << foo << std::endl;
}