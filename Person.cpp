#include "Person.h"

Person::Person(std::string sName, Birthday DoB)
    :m_sName(sName),
    m_DoB(DoB)
{
    //ctor
}

Person::~Person()
{
    //dtor
}
