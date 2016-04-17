#include "MyClass.h"
#include <iostream>

MyClass::MyClass(std::string sName, int nValue)
    :m_sName(sName),
    m_iValueConst(nValue) // const member variable can be only changed in Member Initializer list.
{
    //ctor
    std::cout << "Constructor Called!" << std::endl;
    // m_sName = "Initialized value in Constructor";
}

MyClass::~MyClass(){

    std::cout << "Destructor Called!" << std::endl;
}

void MyClass::SetName(std::string sName){

    m_sName = sName;
}

std::string MyClass::GetName(){

    return m_sName;
}

std::string MyClass::GetNameConsMethod() const{

    // Constant variable value cannot be changed. it can be only changed in construction initialization.
    // m_iValueConst = 10;

    // cost method cannot change any non-constant variable
    // m_sName = "Value assigned in const method";

    return m_sName;
}
