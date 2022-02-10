#include <iostream>

#include <string>
using namespace std;

void menu() {

	cout << "*******MENU********" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Add balance" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;

}

int main() {
	int options;
	double balance;
	balance = 300;
	do {
		

		menu();

		cin >> options;

		switch (options) {
		case 1:
			cout << "Your balance is " << balance << " $";
			break;
		case 2:
			double addBalance;
			cout << "How much to add? ";
			cin >> addBalance;
			balance += addBalance;
			break;
		case 3:
			double withdrawBalance;
			cout << "How much to withdraw? ";
			cin >> withdrawBalance;
			balance -= withdrawBalance;
			break;

		}
	} while (options != 4);
	return 0;

}
