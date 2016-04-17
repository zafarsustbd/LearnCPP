#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass
{
    public:
        MyClass(std::string sName, int nValue);
        ~MyClass();

        void SetName(std::string sName);
        std::string GetName();

        std::string GetNameConsMethod() const;

    protected:

    private:
        std::string m_sName;
        const int m_iValueConst;
};

#endif // MYCLASS_H
