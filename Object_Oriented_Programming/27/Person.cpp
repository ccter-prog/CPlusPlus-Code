#include <cstring>
#include "Person.h"

Person::Person(const char *s)
{
    name = new char[::strlen(s) + 1];
    ::strcpy(name, s);
}

Person::~Person()
{
    delete []name;
}