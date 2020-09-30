#include <iostream>
#include <iomanip>
using namespace std;
int num=0;
int Quiz[10],Mid[10],Finals[10];
int main()
{
	char menu;
	
	do
	{
		cout << "===================="<< endl;
		cout << "        MENU       " << endl;
		cout << "===================="<< endl;
		cout << "1.Input student records"<< endl;
		cout << "2.View all student records"<< endl;
		cout << "3.Exit"<< endl;
		cout << "Select Menu :";
		cin >> menu;
		if (menu == '1')
		{
			cout << "Input Number of Students :";
			cin >> num;
			for (int i=0;i<num;i++)
			{
				cout << "Number " << i+1<< endl;
				cout << "Input Quiz :";
				cin >> Quiz[i];
				cout << "Input Midterm :";
				cin >> Mid[i];
				cout << "Input Final :";
				cin >> Finals[i];
				cout << endl;
			}
		} 
		else if (menu == '2') 
		{
			cout << "-------------------------------"<< endl;
			cout << "StdID   Quiz   Midterm   Finals"<< endl;
			cout << "-------------------------------"<< endl;
			for (int i = 0;i<num;i++)
			{
				cout << i+1 << setw(9)<< Quiz[i] << setw(9) << Mid[i] << setw(9) << Finals[i] << endl;
			}
			cout << "--------------------------------------"<< endl;
		}
	}while(menu != '3');
		cout << "Exit";



	return 0;
}
	