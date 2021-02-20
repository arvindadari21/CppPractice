/* This is a program for random number generator */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
  int dice = 0;

  //seed the number number generator
  srand(time(0));

  dice = (rand() % 6) + 1;
  cout << "You rolled a: " << dice << endl;
}