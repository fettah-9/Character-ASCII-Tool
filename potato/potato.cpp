#include <iostream>
using namespace std;




int showASCII() {
	char letter;
	cout << "=================================\n";
	cout << "Please enter your character: ";
	cin >> letter;
	cout << "The ASCII code for '" << letter << "' is: " << int(letter) << endl;
	return 0;
}

int showCharacter() {
	int num;
	cout << "=================================\n";
	cout << "Please enter an ASCII number: ";
	cin >> num;
	cout << "The character for ASCII code " << num << " is: '" << char(num) << "'\n";
	return 0;

}

int home() {
	int choice;
	char yn;

	do {
		cout << "\nWhat process do you want?" << endl;
		cout << "[1] Find the ASCII of a character." << endl;
		cout << "[2] Find the character of ASCII." << endl;
		cout << "=================================\n";
		cin >> choice;

		if (choice == 1) {
			showASCII();
		}
		else if (choice == 2) {
			showCharacter();
		}
		else {
			cout << "Invalid choice.\n";
		}

		cout << "Do you want to continue? [Y/N]: ";
		cin >> yn;

	} while (yn == 'Y' || yn == 'y');

	cout << "Thank you for using ZAIN!" << endl;
		return 0;
}

int main() {
	home();
	return 0;
}
