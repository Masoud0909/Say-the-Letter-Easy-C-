/*Using Boolean operators to combine multiple relational operators in the same
condition, write a program that reads a character, verifies what category the letter is, and
prints:
“digit” if the letter represents a digit ‘0’..’9’
“small letter” if it’s a letter between ‘a’ and ‘z’
“capital letter” if it’s a letter between ‘A’ and ‘Z’
“funny” if it’s none of the above
-------------------------------------------*/

#include <iostream>	

using namespace std;

int main() {
	char input;
	cout << "Please enter your desired (whatever) input: ";
	cin >> input;

	if (input >= 'a' && input <= 'z')
		cout << "Small Letter!" << endl;
	else if (input >= 0 && input <= 9)
		cout << "Digit!" << endl;
	else if (input >= 'A' && input <= 'Z')
		cout << "Capitalis.. ehem.. I mean Capital Letter ! :)" << endl;
	else
		cout << "Pardon me?!";
	return 0;


}