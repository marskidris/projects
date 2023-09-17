/*
The following code will print the name of a class when the user inputs
the first letter. The first letter can be upper or lowercase.

Refactor the switch statement into the multiple-alternative format 
of the if statement. 

You must also use the logical || operator to combine
the two simple conditions that must be checked in each if.
*/
// Kolade Idris


#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	
	char rpgClass;
	
	cout << "Type the first letter of class: ";
	cin >> rpgClass;

    // If statement must == both values seperately.
    if (rpgClass == 'a' || rpgClass == 'A')
    {
        cout << "archer" << endl;
    }
    else if (rpgClass == 'c' || rpgClass == 'C')
    {
        cout << "cleric" << endl;
    }
    else if (rpgClass == 'm' || rpgClass == 'M')
    {
        cout << "merchant" << endl;
    }
    else if (rpgClass == 'p' || rpgClass == 'P')
    {
        cout << "paladin" << endl;
    }
    else
    {
        cout << "invalid class" << endl;
    }
}
