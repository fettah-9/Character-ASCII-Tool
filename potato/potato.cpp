#include <iostream>
using namespace std;
int num, choise;
char letter;
char YN;
int Y = 1, y = 1, N = 0, n = 0;



int ACSII() {
	cout << "=================================\n";
	cout << "please enter your character: \n";
	cin >> letter;
	cout << "the ACSII code for your character is: " << int(letter) << endl;
	//fuck();
	return 0;
}

int Number() {
	cout << "=================================\n";
	cout << "please enter your ACSII number: \n";
	cin >> num;
	cout << "the character of your ACSII code is : " << char(num) << "\n";
	//fuck();
	return 0;

}

int home() {
	cout << "what process do you want?" << endl;
	cout << "[1] find the ACSII of character." << endl;
	cout << "[2] find the character of ACSII.\n";
	cout << "=================================\n";
	cin >> choise;

	if (choise == 1)
	{
		ACSII();
	}
	
	else {
		Number();
	}
		cout << "Do you want to continue? [Y/N]\n";
		cin >> YN;

		if (YN == 1) {
			home();
		}
		else
		{
			cout << "thank you for using ZAIN!";
		}
		return 0;
}

int main() {
	home();
	return 0;
}