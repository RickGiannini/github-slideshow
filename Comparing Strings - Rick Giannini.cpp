// *******************************/
//*  Comparing Strings           */
//*  Rick Giannini               */
//*  March 9, 2021               */
//*  Ver 1.0                     */
//*  Revised Date --/--/----     */
//********************************/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
string guess = "orange";
string answer;
cout << "What color is an orange ?" << endl;
getline(cin, answer);
if(guess.compare (answer) == 0)
cout << "Thats correct.";
else
cout << "How did you get that wrong ?";
return 0;

}