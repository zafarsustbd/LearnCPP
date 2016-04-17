#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Birthday.h"

class Person
{
    public:
        Person(std::string sName, Birthday DoB);
        ~Person();
    protected:
    private:
        std::string m_sName;
        Birthday m_DoB;
};

#endif // PERSON_H
