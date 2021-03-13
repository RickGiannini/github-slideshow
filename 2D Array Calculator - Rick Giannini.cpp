// *******************************/
//*  2 D Array Calculator        */
//*  Rick Giannini               */
//*  March 6, 2021               */
//*  Ver 1.0                     */
//*  Revised Date 03/07/2021     */
//********************************/

#include <iostream>
using namespace std;

int main () {
int number1, number2;
char op;                                                     //The operator will define mathematical work, add, subrtract, etc.

cout << "Please enter a number and press 'Enter' : ";       //prompts user to enter a number I added the "press Enter" directions, as I was showing this to a person at work and he tried to enter NUm1 the operator and Num2

cin >> number1;                                              // user input
cout << "Select your choice of mathematical operations, add '+', subtract '/', multiply '*' or divide '/' : ";
cin >> op;                                                  // user selects the operator
cout << "OK, please enter your second number and press 'Enter' : ";
cin >> number2;
int output;

if(op == '+') {                                             // The if & the else if statements here will account for the user input of different operators.
output = number1 + number2;
} else if(op == '-') {
output = number1 - number2;
} else if(op == '*') {
output = number1 * number2;
} else if(op == '/') {
output = number1 / number2;
} else
cout << "Incorrect selection. ";                         // Informs the user that an incorrect mathematical operator was entered
cout << "The answer is : " << output;                   // Answer is displayed on the screen for the user to see.

return 0;
}