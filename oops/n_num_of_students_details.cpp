#include <iostream>
using namespace std;

class Std_details
{
  private:

  int roll_no;
  long int register_num;
  string name;
  string department,str;

  public:
  void display();
  void get()
  {
    cout << "Name: " ;
    getline( cin, name);

    cout << "Department: ";
    getline(cin, department);

    cout << "Roll Number: " ;
    cin >> roll_no;

    cout << "Register Number: ";
    cin >> register_num;
    getline(cin, str);
  }
};
void Std_details::display()
{
  cout<< roll_no << "   \t"<< register_num ;
  cout<< ":\t\t" << name << "\t:\t" << department << endl;
}
int main()
{
  int n,i;
  string university, district,str;
  cout << "University : ";
  getline(cin, university);

  cout << "District: ";
  getline(cin,district);

  cout<< "Input a Number of Students: ";
  cin >> n;
  getline(cin, str);
  cout << "\n";

  Std_details obj[n];
  for(i=0; i<n; i++)
  {
    cout << "Input-" << i+1 <<":Student details:-\n";
     obj[i].get();
     cout << endl;
  }
  cout <<"University: "<< university << "\nDistrict: "<< district << endl << endl;
  cout << "Roll No    " << " Reg.No" << "\t\tName" << "\t\tDepartment"<< endl << endl;
  cout << "---------------------------------------------------------------\n";
  for(i=0; i<n; i++)
  {
    obj[i].display();
  }
  
  return 0;
}

/*
Output:

University : Madras University
District: Chennai
Input a Number of Students: 4

Input-1:Student details:-
Name: Bharathi
Department: Mathematics
Roll Number: 1
Register Number: 2023

Input-2:Student details:-
Name: Akshaya
Department: Chemistry
Roll Number: 2
Register Number: 2021

Input-3:Student details:-
Name: Venkat
Department: CSC        
Roll Number: 3
Register Number: 2018

Input-4:Student details:-
Name: John Deo
Department: EEE
Roll Number: 4
Register Number: 2014

University: Madras University
District: Chennai

Roll No     Reg.No              Name            Department

---------------------------------------------------------------
1       2023:           Bharathi:              Mathematics
2       2021:           Akshaya :              Chemistry
3       2018:           Venkat  :              CSC
4       2014:           John Deo:              EEE
*/