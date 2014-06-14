#include "GameShow.h"

/**

This function resets all variables to their defaults so that we may
rerun a cleared gameshow

**/
void GameShow::ResetGame(){

    PlayerChoice =0;
    HostChoice = 0;

    for (int n=0; n<=2; n++)
    {
        DoorSet[n].SetPrize(GOAT);

    }


}

/**
This runs on the initialization of a gameshow type.
Used to initialize our variables

**/

GameShow::GameShow(){
PlayerChoice = 0;
HostChoice = 0;

}

/**

This is used to check the player's choice

**/
int GameShow::ReturnPlayerChoice(){

    return PlayerChoice;

}

/**

This is used to check the host's choice

**/

int GameShow::ReturnHostChoice(){

    return HostChoice;
}


/**

This sets which door has a car

**/

void GameShow::SetCar(){

DoorSet[RandomBetweenOneAndThree()-1].SetPrize(CAR);


}

/**

Switches the player's choice from its current, while checking the hosts that way they don't match.

**/

void GameShow::SwitchPlayerChoice(){

    for (int n=1; n<=3; n++)
    {
        if (n != PlayerChoice && n != HostChoice){

            PlayerChoice = n;
            break;
        }

    }



}


/**

This checks to see if the player has won or lost a car/goat

**/

bool GameShow::RevealIfWinner(){


    if (DoorSet[PlayerChoice-1].GetBehindDoor()== CAR){

        return 1;

    }else{

        return 0;

    }



}

/**

The host chooses a door, one that isn't the player's choice and that is a goat

**/

void GameShow::HostChoose(){

    for (int m=1; m<=3 ; m++)
    {

        //cout << "Host Choose loops says m = "<< m << "Also the Door at m is " <<DoorSet[m-1].GetBehindDoor() << "\n";
        if(m != PlayerChoice && DoorSet[m-1].GetBehindDoor() == GOAT)
        {
            HostChoice = m;
            break;



        }




    }
}


/**

The player selects a door

**/

void GameShow::PlayerChoose(){

PlayerChoice = RandomBetweenOneAndThree();

}
