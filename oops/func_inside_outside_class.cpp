//Function definition inside and outside of the class

#include <iostream>
using namespace std;

class IN_Out_method
{
   public:

   int ID_No;
   string User_name;

   void print_name();
   void print_ID()
   {
        cout << ID_No;
   }
};
//scope resolution operator ::
void IN_Out_method::print_name()
{
    cout << User_name;
}
int main()
{
    IN_Out_method obj;
    obj.ID_No = 2143;
    obj.User_name = "Cpp programmer";

    obj.print_ID();
    cout << endl;

    obj.print_name();
    cout << endl;
    
    return 0;
}

/*
Output:

2143
Cpp programmer
*/