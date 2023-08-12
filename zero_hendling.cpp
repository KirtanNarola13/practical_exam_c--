/*
3. Give an example which shows Exception handling of division by zero exception.
*/

#include<iostream>
using namespace std;

class Main{
	protected:
		double A,B,C;
	
	public:
		setVal(){
			cout << "Enter first number : "	;
			cin >> A;
			cout << "Enter second number : ";
			cin >> B;
		}
		getVal(){
			try{
				if(B==0){
					throw B;
				}
				else{
					C = A / B;
					cout << endl << "Division is " << C << endl;
				}
			}
			catch(int val){
				if(val==0){
					cout << "Can't divide by Zero....";
				}
			}
		}
};

int main (){
	Main m;
	m.setVal();
	m.getVal();
	return 0;
}
