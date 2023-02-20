#include<iostream>
using namespace std;

double add(double a, double b)
{
    double result = a + b;
    return result;
}

double subtract(double a, double b)
{
    double result = a - b;
    return result;
}

double multiply(double a, double b)
{
    double result = a * b;
    return result;
}

double divide(double a, double b)
{
    double result = a/b;
    return result;
}

double test(double a, char op, double b)
{
    double result;
    switch (op)
    {
        case '+':

        result = add(a,b);
        break;
        case '-':
        result = subtract(a,b);
        break;
        case '*':
        result = multiply(a,b);
        break;
        case '/' :
        result = divide(a,b);
        break;
        default:
        result = -1;

    }
    return result;
    
}
int main()
{
    double a ,b;
    char op ;
    double result;
    cout<<"Enter two decimal numbers and and operation";
    cin>>a>>op>>b;
    
    result =test(a,op,b);
    cout<<result;
}