#include <iostream>
using namespace std ;


int Sum(double a, double b)
{
    return a + b;
}

int Subtract(double a, double b)
{
    return a-b;
}

int Multiple(double a, double b)
{
    return a *b; 
}

int Divide(double a, double b)
{
    if(b==0)
    {
        cout << "b is equal to zero division not possible" <<endl;
    }
    else
    {
        return a/b;
    }
    
    return a/b;
}

int main () 
{
    double a;
    double b ;
    char opp;
    cout << "Please enter the first number"<< endl;
    cin >> a ;

    cout << "PLease enter the second number" << endl;
    cin>> b ; 

    cout<< "Please enter if you want to add, subtract, multiple or divide this numbers (+, -, *, /)" << endl; 
    cin >> opp; 

    if(opp == '+')
    {
        cout << "Youre number is: "<< Sum(a,b) << endl;;
    }
    else if(opp == '-')
    {
        cout << "Your number is: "<< Subtract(a,b) <<endl;
    }
    else if(opp == '*')
    {
        cout << "Your number is: " <<Multiple(a,b)<< endl;
    }
    else if (opp == '/')
    {
        cout << "Your number is: " << Divide(a,b) << endl;
    }
    else
    {
        cout << "Invalid operation \n Please try again" << endl;
    }

    system("pause");
    return 0;

}