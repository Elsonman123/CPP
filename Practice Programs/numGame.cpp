#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// to run code 
// g++ numGame.cpp 
// ./a.out

int main()
{
  cout << "Test Test Test"<< endl;
  srand(static_cast<unsigned int>(time(0)));
  
  int secretNumber = rand() % 100 * 1;
  int guess = 0; 
  
  cout << "I have chosen a number between 1 and 100" << endl ;
  cout << "Can you guess what it is?" << endl;
  
  while(guess !=secretNumber)
  {
    cout << "Enter Guess" <<endl; 
    cin >> guess ;
    
    if(guess == secretNumber)
    {
      cout << "Congrats you got the number right" << endl;
      break; 
    }
    else if( guess < secretNumber)
    {
      cout <<"Guess is smaller than the secret number \n try again" << endl;
    }
    
    else if (guess > secretNumber)
    {
      cout << " Guess is greater than the secret number \n try again" << endl;
    }
  }
}
