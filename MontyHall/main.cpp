#include <iostream>
#include <Door.h>
#include <Gameshow.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;


/**
Monty Hall Simulation
Written by Victor Viglianti 2014
**/


int main()
{
    srand (time(NULL));
    int input;
    cout << "This program knows two ways of running a Monty Hall Simulation\nA single run through, or a number of runs.\n\nPress 1 for a single run, press 2 for more then a single run, then hit enter :D.";

    cin >> input;

    if(input == 1){

        string input3;

         while(true){

            cout << string( 100, '\n' );
            cout << "Hi I'm your host C++ \n \n";
            GameShow Welcome;
            Welcome.SetCar();
            Welcome.PlayerChoose();
            cout << "You chose door number " << Welcome.ReturnPlayerChoice() << "\n";
            Welcome.HostChoose();
            Welcome.SwitchPlayerChoice();

            cout << "There is a goat behind door number " << Welcome.ReturnHostChoice() << "\n";
            cout << "Your new choice, is door number " << Welcome.ReturnPlayerChoice() << "\n";

            if (Welcome.RevealIfWinner() == 1){

            cout << "YOU WON!!!! ITS A CAR";

            }else{
            cout << "Sorry you lost :(";

            }

            cout << "\n\nPress enter to redo\n";
            cin.get();

        }

    }else if(input == 2){

        int input2 = 1;
        cout << string( 100, '\n' );
        cout << "How many times would you like the program to run the simulation? Input number then press enter!\n\n";

        cin >> input2;

        if (input2>= 1){

            GameShow Welcome;
            int WinCount =0;
            int LossCount =0;

            for (int i=1; i<=input2; i++){
                Welcome.ResetGame();
                Welcome.SetCar();
                Welcome.PlayerChoose();
                Welcome.HostChoose();
                Welcome.SwitchPlayerChoice();

            if (Welcome.RevealIfWinner() == 1){
                WinCount++;

            }else{

                LossCount++;

            }



            }

            cout <<"The amount of wins is: " << WinCount << "\nThe amount of Losses is: " << LossCount;
            cout <<"\n\nPress enter to exit";
            cin.get();
            exit(0);


        }else{

        cout << "Incorrect input, press enter to exit";
        cin.get();

        exit(0);



        }




    }else{

    cout <<"\nIncorrect input\n";


    }


    return 0;
}

