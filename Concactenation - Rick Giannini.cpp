// *******************************/
//*  Concactenation              */
//*  Rick Giannini               */
//*  March 9, 2021               */
//*  Ver 2.0                     */
//*  Revised Date 03/10/2021     */
//********************************/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
char a[100], b[100];

string s1, result1;
string s2, result2;

cout << " You will enter one half of a sentence here, and the rest in a moment";   //user enters text
getline (cin, s1);

cout << "OK, let's finish the sentence here:";
getline (cin, s2);

result1 = s1 + s2;
result2 = s2 + s1;

cout << result1 << endl;
cout << result2 << endl;

if(result1 == result2)
cout << "The strings are equal." << endl;
else
cout << "The strings are not equal. " << endl;

return 0;

}