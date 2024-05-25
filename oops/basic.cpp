// basic class ,object, member data member functions....

#include <iostream>
using namespace std;

class Bike
{
    public :
    
    string bike_num;
    double bike_rate;
    string bike_colour;

    void printingfun()
    {
        cout << bike_num <<"\n" << bike_rate << "\n" << bike_colour << "\n" ;
    }
}obj;
int main()
{
   obj.bike_num = "TN 76 V 7230";
   obj.bike_rate = 85000;
   obj.bike_colour = "Red and black";
   obj.printingfun();
   cout << obj.bike_num <<"\n" << obj.bike_rate << "\n" << obj.bike_colour << "\n" ;
}
/*
Sample Output:

TN 76 V 7230
85000
Red and black
TN 76 V 7230
85000
Red and black

*/