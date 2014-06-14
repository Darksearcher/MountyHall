#include "Door.h"
/**
This function sets the prize behind a door

**/
void Door::SetPrize(Prize x){


ThePrize = x;


}
/**

To make things easier, every door is initialized as a goat

**/
Door::Door(){

ThePrize = GOAT;

}


/**

This returns the value behind a door

**/
Prize Door::GetBehindDoor(){

return ThePrize;

};
