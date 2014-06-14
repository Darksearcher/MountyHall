#include "Random.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>

int RandomBetweenOneAndThree (){

int x;

x = rand()% 3 +1;
return x;

}
