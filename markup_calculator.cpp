//Joseph Coleman
//COP2000.0M1
//Item price markup calculator

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	//variables
	string item_num;
	string desc;
	float current_price;
	float pct_mkup;
	float new_price;

	//header
	cout << "The Markup Calculator\n\n";

	//get user input
	cout << "Enter the item number: ";
	cin >> item_num;

	cout << "\nEnter item " << item_num << " description: ";
	cin >> desc;
	
	cout << "\nEnter the current price of item " << item_num << ": $";
	cin >> current_price;

	cout << "\nEnter the percent markup % for item " << item_num << ": ";
	cin >> pct_mkup;

	//calculate markup

	new_price = current_price * ((pct_mkup / 100) + 1);

	//output

	cout << "\n\nOutput:\n";

	cout << "\nItem Number:   " << item_num;
	cout << "\nDescription:   " << desc;
	cout << "\nCurrent Price: " << "$" << current_price;
	cout << "\n% Markup: " << setw(7) << pct_mkup << "%";

	//new price output

	cout << fixed << setprecision(2);

	cout << "\n\nNew Price:" << setw(6) << "$" << new_price;
	
	//closing statement

	cout << "\n\nThanks for using the Markup Calculator\n\n";

	
	system("pause");
	return 0;
}