#include <iostream>

using namespace std;


int main(){

    int b[10] = {};

    for(int i=0 ; i<10; i++)
    {
        cout<< "Please enter 10 different numbers"<< endl;
        cout << "Entry: " <<i+1 << endl;
        cin>> b[i] ;
    }

    cout << "Here is what you entered" << endl;
    for(int i =0; i<10 ;i++)
    {
        cout<<"Entry: " << i << " = " << b[i] << endl;
    }
}

