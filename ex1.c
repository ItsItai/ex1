/******************
Name: Itai Avis
ID: 212170849
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  int chosenNumber1 = 0, chosenNumber2 = 0, chosenPosition = 0;
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  scanf("%d", &chosenNumber1);
  printf("Please enter a position:\n");
  scanf("%d", &chosenPosition);
  /*Move the bit in the chosen position to the LSB position.
  &1's output depends on the new LSB's value.*/
  printf("The bit in position %d of number %d is: %d\n", chosenPosition, chosenNumber1, (chosenNumber1 >> chosenPosition) & 1);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &chosenNumber1);
  printf("Please enter a position:\n");
  scanf("%d", &chosenPosition);
  //Set the bit in the chosen position to 1.
  chosenNumber1 |= (1 << chosenPosition);
  printf("Number with bit %d set to 1: %d\n", chosenPosition, chosenNumber1);
  //Set the bit in the chosen position to 0.
  chosenNumber1 &= ~(1 << chosenPosition);
  printf("Number with bit %d set to 0: %d\n", chosenPosition, chosenNumber1);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &chosenNumber1);
  printf("Please enter a position:\n");
  scanf("%d", &chosenPosition);
  printf("Number with bit %d toggled: %d\n", chosenPosition, chosenNumber1 ^ (1 << chosenPosition));
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &chosenNumber1);
  //If the LSB is 0, print 1 and if it is 1 print 0.
  printf("%d\n", !(chosenNumber1 & 1));
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  scanf("%o", &chosenNumber1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &chosenNumber2);
  chosenNumber1 += chosenNumber2;
  printf("The sum in hexadecimal: %X\n", chosenNumber1);
  //Prints the bits at positions 3, 5, 7, and 11
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (chosenNumber1 >> 3)& 1, (chosenNumber1 >> 5)& 1, (chosenNumber1 >> 7)& 1, (chosenNumber1 >> 11)& 1);

  printf("Bye!\n");
  
  return 0;
}
