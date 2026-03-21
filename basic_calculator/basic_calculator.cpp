#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int choice = -100;

	while (choice !=0)
	{
		
		//Menu
		cout << "1 - Addition numbers\n";
		cout << "2 - Subtract numbers\n";
		cout << "3 - Multiply numbers\n";
		cout << "4 - Divide numbers\n";
		cout << "0 - Exit\n";
		cout << "Choose: \n";
		cin >> choice;
		if (choice == 0)
		{
			cout << "Exiting program...." << endl;
			break;
		}
		else if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{
			cout << "Enter first number: ";
			cin >> a;

			cout << "Enter second number: ";
			cin >> b;

			if (choice == 1)
				cout << "Total is: " << a + b << endl;
			else if (choice == 2)
				cout << "Total is: " << a - b << endl;
			else if (choice == 3)
				cout << "Total is: " << a * b << endl;
			else if (choice == 4)
			{
				if (b == 0)
					cout << "Cannot divide by zero" << endl;
				else
					cout << "Total is: " << a / b << endl;
			}
		}
		else
		{
			cout << "Invalid choice\n";
		}

		cout << "_____________________" << endl;
	}







	return 0;


}
