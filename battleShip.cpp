#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int x=5;
int y=5;
int playerA[10][10] ;
int playerB[5][5] ;
int turn =0 ;

string display[10][10];

void welcomeToGame()
{
    cout << "Hello welcome to the simple game of batter ship!" << endl;
    cout << "You are currently playing on a "<<x << " by " <<y << " grid" <<endl;

}

void intro()
{
    welcomeToGame();
    cout << "How many rows would you like to play with? \n  Please pick number between 3 and 10"<< endl;
    cin >> x ;
    if(x<3 || x >10)
    {
        cout << "Please pick a number between 1 and 10 " << endl;
    }

    cout << "How many columns would you like to play with \n Please pick a number between 3 and 10?" <<endl;
    cin >> y; 
    if(x<3 || x >10)
    {
        cout << "Please pick a number between 1 and 10 "<< endl;
    }
}

void setUp()
{
    int x;
    int y;

    cout<< "Please enter the value of x co ordinates of the first ship"<< endl;
    cin >> x ;

    cout<< "Please enter the value of y co ordinates of the first ship"<< endl;
    cin >> y;

}


void random()
{
    int s =0; 
    while(s<x)
    {
        int numRand1 = (rand() / (RAND_MAX/(4-0)));
        int numRand2 = (rand() / (RAND_MAX/(4-0)));
        
        if(playerB[numRand1][numRand2] !=1)
        {
            s++;
            playerB[numRand1][numRand2] =1;
            cout <<"number here :"<< numRand1<< " and :"<< numRand2<< endl;
        }


    }
}


void show()
{
        for(int i=0 ; i<y; i++)
        {
            for(int j =0; j< x ; j++)
            {
                cout << playerB[i][j] << " | " ; 
            }
            cout << "\n";
        }
}

void showInGame()
{
        for(int i=0 ; i<y; i++)
        {
            for(int j =0; j< x ; j++)
            {
                cout << (int)display[i][j] << "\t| \t" ; 
            }
            cout << "\n";
        }
}

void clear()
{
        for(int i=0 ; i<y; i++)
        {
            for(int j =0; j< x ; j++)
            {
                playerB[i][j] =0;
            }
            
        }
}

void gameWon()
{
    cout << "Congrats you found all battleships!"<< endl;
    show();
}

void playerTurn()
{
    int row;
    int column;
    int s =0;
    while(s<x)
    {
        cout << "Please enter the row"<<endl;;
        cin >> row;
        cout << "Please enter the column"<< endl;
        cin >> column; 
        if( playerB[row][column]==1)
        {
            s++ ;
            cout << "Congradulation you hit a battleship!"<< endl;
            cout <<x-s << " Targets left"<< endl;
            display[row][column]=1;
        }
        else
        {
            cout << "Miss, Try again"<< endl; 
            display[row][column]=x;
        }
        showInGame();

    }
    gameWon();
}



int main()
{
    srand(time(NULL));
    welcomeToGame();
    clear();
    //intro();
    // setUp();
    random();
    playerTurn();
    system("pause");
    return 0;
}

