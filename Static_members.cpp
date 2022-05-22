//Static members
// in this we do not have to create the object of class to access the data members only scope resolution is required
#include<iostream>
using namespace std;

class Account{
	private:
		int balance;
		static float roi;
	public:
		void setBalance(int b){
			balance= b;
		}	
		static void setRoi(float r)
		{
			roi=r;
			cout<<roi;
		}
};
float Account::roi=3.5f;
int main(){
	Account a1,a2;
	Account::setRoi(4.5f);
	//scope resolution
	return 0;
}
