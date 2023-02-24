#include<iostream>
using namespace std;
 class Employee{
    string firstName;
    string lastName;
    int monthlySalary;
    public:
    Employee(string firstName,string lastName,int monthlySalary)
    {
      this->firstName = firstName;
      this->lastName = lastName;
      this->monthlySalary= monthlySalary;

    }
    string getfirstName()
    {
      return firstName;
    }
    void setfirstName()
    {
      this->firstName = firstName;
    }
    string getlastName(){
      return lastName;
    }
    void setLastName(){
      this->lastName;
    }
    int getMonthlySalary(){
      return monthlySalary;
    }
    void setMonthlySalary()
    {
      this->monthlySalary = monthlySalary;
    }
    void displayMonthlySalary()
    {
      int monthSal;
      cout<<"Enter your monthly slary:"<<endl;
      cin>>monthSal;
      if(monthSal < 0)
      {
         cout<<"Monthly salary is zero";
      }
    }
 };
 int main()
 {
   Employee john("John","Okoro",24000);
   Employee mary("Mary","Alade",12000);
   //john
   cout<<"First Name:"<<john.getfirstName()<<endl;
   cout<<"Last Name: "<<john.getlastName()<<endl;
   john.displayMonthlySalary();
   //mary
     cout<<"First Name:"<<mary.getfirstName()<<endl;
   cout<<"Last Name: "<<mary.getlastName()<<endl;
   mary.displayMonthlySalary();

   return 0;
 }