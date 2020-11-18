#ifndef FOO_H_
#define FOO_H_
#include <iostream>
#include <string>

template<class T>
class Foo
{
private: 
    T data;

public:
    Foo();
    Foo(T);
    ~Foo();
template<class S>
friend std::ostream& operator<<(std::ostream&,const Foo<S>&);
};

#include "foo.cpp"
#endif    // FOO_H_