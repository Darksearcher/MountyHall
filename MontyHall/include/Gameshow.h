#ifndef GAMESHOW_H
#define GAMESHOW_H
#include <Door.h>
#include <Random.h>

/**

To run the gameshow, there are certain functions that must be created

**/
class GameShow{

public:
GameShow();
void SetCar();
void HostChoose();
void PlayerChoose();
void SwitchPlayerChoice();
bool RevealIfWinner();
int ReturnPlayerChoice();
int ReturnHostChoice();
void ResetGame();

private:
Door DoorSet[3];
int PlayerChoice;
int HostChoice;


};

#endif // GAMESHOW_H
