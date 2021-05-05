// Joshua Curry
// Professor: Dr. T
// COSC-1437
// Recursive program. Assignment 7.
// part 1) Write the solution to the Tower of Hanoi
// part 2) Write recursive program to generate factorials

#include <iostream>
#include "Input_Validation.h"

using namespace std;

// Function prototype
void Hanoi(int, int, int, int);
int factorialR(int);

int main() {

  int disc = 3, peg1 = 1, peg2 = 3, tempPeg = 2, num;

  cout << endl;
  Hanoi(disc, peg1, peg2, tempPeg);
  cout << "\nTower of Hanoi is complete\n";

  num = validateInt(num); // Take user input for Factorial calculation

  cout << "\nThe total for " << num << "! is "
       << factorialR(num) << endl;

} // closes main()

void Hanoi(int num, int peg1, int peg2, int tempPeg)
{
  if (num > 0)
  {
    Hanoi(num - 1, peg1, tempPeg, peg2);
    cout << "Moved top disc from peg " << peg1
         << " to peg " << peg2 << endl;
    Hanoi(num-1, tempPeg, peg2, peg1);
  }
} // closes Hanoi

int factorialR(int num)
{
  if(num > 0 && num < 32)
  {
    return num*factorialR(num - 1);
  }
  else if (num >= 32)
  {
    cout << "too big. INT_MAX is 214,748,3647 - ";
    return 0;
  }
  else
  {
    return 1;
  }
} // closes factorialR

/***** What is Recursive Programming? *****

Recursive programming is when you write the program
to repeatedly calculate a smaller part of itself in
order to obtain a final result.

This helps when writing functions, because Recursion
helps reduce a complex problem to a more simple
problem to solve.
*/