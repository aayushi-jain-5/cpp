// this is a local object pointer in very instance member function containing address of the caller object
#include<iostream>
using namespace std;
	
class box{
	private:
		int l,b,h;
	public:
		void setDimension(int l,int b,int h){
			this->l=l;this->l=l;this->h=h;
		}
		void showDimension(){
			cout<<"l= "<<l<<"b= "<<b<<"h= "<<h;
		}	
};
int main(){
	box smallbox;
	smallbox.setDimension(12,10,5);
	smallbox.showDimension();
	return 0;
}
