#ifndef DOOR_H
#define DOOR_H

/**

/This is the definition of a door and the prize behind it

**/
enum Prize {GOAT, CAR};
class Door{
public:
Prize GetBehindDoor ();
Door();
void SetPrize(Prize x);

private:
Prize ThePrize;
};

#endif // DOOR_H
