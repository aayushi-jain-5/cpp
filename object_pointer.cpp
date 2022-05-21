#include<iostream>
using namespace std;
class box{
	private:
		int l,b,h;
	public:
		void setDimension(int x,int y,int z){
			l=x;b=y;h=z;
		}
		void showData(){
			cout<<"l="<<l<<"b="<<b<<"h="<<h<<" ";
		}	
};
int main(){
	box *p,smallbox;
	p=&smallbox;
	p->setDimension(12,10,5);
	p->showData();
	return 0;
}
