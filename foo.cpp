#ifndef FOO_CPP_
#define FOO_CPP_
#include "foo.h"

template<class T>
Foo<T>::Foo() {}

template<class T>
Foo<T>::Foo(T item) : data(item) {}

template<class T>
Foo<T>::~Foo() {}

template<class T>
std::ostream& operator<<(std::ostream& out, const Foo<T>& foo)
{
    return out << foo.data << std::endl;
}

#endif    // FOO_CPP_