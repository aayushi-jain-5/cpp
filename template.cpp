#include<iostream>
#include<cmath>
using namespace std;
template <class T ,class U>
class example{
	T x;
	U y;
	public:
		U sum(T a,U b){
			T c = a+b;
			return c;
		}
		T sub(T a, U b){
			U d = abs(a-b);
			return d;
		}
		T mul(T a,U b){
			T i= a*b;
			return i;
		}
		U div(T a,U b){
			if(a>b){
				T n= a/b;
				return n;
			}
			
		}
		
};
int main(){
	example<int ,int >obj1;
	example<int ,int>obj2;
	example<int ,int>obj3;
	example<int ,int >obj4;
	cout<<obj1.sum(10,20)<<endl;
	cout<<obj2.sub(10,80)<<endl;
	cout<<obj3.mul(10,50)<<endl;
	cout<<obj4.div(90,10)<<endl;
	
//	cout<<x<<endl;
	return 0;
}
