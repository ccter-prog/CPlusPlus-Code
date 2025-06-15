#ifndef __Person_H__
#define __Person_H__

class Person
{
    public:
        Person(const char *s);
        char *name;
        ~Person();
};

#endif