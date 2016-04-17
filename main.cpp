#include <iostream>
#include "MyClass.h"

using namespace std;

const int iX = 42;  // All constant variables must be initialized at the time of their creation

int main()
{
    cout << "\n\n****************** Hello World *********************" << endl;
    cout << "Hello world!" << endl;

    cout << "\n\n****************** Class Object ********************" << endl;
    MyClass obj("Name: last Initialized by Constructor", 5);
    obj.SetName("Name: Last initialized by SetName API");
    cout << obj.GetName() << endl;

    cout << "\n\n****************** Pointer for object **************" << endl;
    MyClass *ptr = &obj;
    cout << ptr->GetName() << endl;

    cout << "\n\n****************** Costant object ******************" << endl;
    const MyClass objConst("Name: last Initialized by Constructor", 15); // = new MyClass();
    //cout << objConst.GetName() << endl; // A const object cannot call it's const method
    cout << objConst.GetNameConsMethod() << endl;



    cout << "\n\n****************** End of Main Method Scope ********" << endl;

    return 0;
}
