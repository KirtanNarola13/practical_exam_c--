/*
Array Of Object (Bank Management System) Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) Search Record By A/C Number.
*/
#include<iostream>
using namespace std;

class Main{
		private:
			int ac_number;
			string hold_name;
			string ac_type;
			string branch;
			int balance;
		public:
		setValue(){
			cout << endl ;
			cout << "Enter account number : ";
			cin >> this->ac_number;
			cout << "Enter account holder name : ";
			cin >> this->hold_name;
			cout << "Enter account type : ";
			cin >> this->ac_type;
			cout << "Enter branch name : ";
			cin >> this->branch;
			cout << "Enter balance of account : ";
			cin >> balance;
		}
		getValue(){
			cout << endl;
			cout << "Account number :- " << this->ac_number << endl;
			cout << "Account holder name >:- " << this->hold_name << endl;
			cout << "Account type :- " << this->ac_type << endl ;
			cout << "Account branch name  :- " << this->branch << endl;
			cout << "Account balance :- " << this->balance << endl;
		}
};

int main ()
{
	int n;
			cout << "How many account record you want to store : ";
			cin >> n;
	Main m[100];
	int i;
	
	for(i=0;i<n;i++){
		m[i].setValue();
	}
	for(i=0;i<n;i++){
		m[i].getValue();
	}
	
	return 0;
}
