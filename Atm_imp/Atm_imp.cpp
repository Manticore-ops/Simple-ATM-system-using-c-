#include <iostream>

using namespace std;

void showMenu(){
	cout << "***************MENU*********" << endl;
	cout << "1.Check Balance" << endl;
	cout << "2. Deposit " << endl;
	cout << "3. Withdraw " << endl;
	cout << "4: Exit" << endl;
	cout << "****************************" << endl;
}


int main()
{
	int option;
	int balance = 1000;
	do
	{
		showMenu();
		cout << "Choose Anyone option" << endl;
		cin >> option;

		system("cls");
		switch (option) {
		case 1:cout << "Your Current Balance is " << balance << endl; break;

		case 2:cout << "Deposit Amount: " << endl;
			double depositamount;
			cin >> depositamount;
			balance += depositamount;
			break;

		case 3:cout << "Withdraw Amount: " << endl;
			double Withdrawamount;
			cin >> Withdrawamount;
			if (balance >= Withdrawamount)
				balance -= Withdrawamount;
			else
				cout << "You don't have enough Money" << endl;
			break;

		default:
				cout << "Please choose a valid option" << endl;
		}
	}while (option != 4);

}
