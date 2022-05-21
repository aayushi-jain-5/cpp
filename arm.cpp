#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int orn=n;
	while(n>0){
		int last=n%10;
		sum+=pow(last,3);
		n=n/10;
	}
	if(sum==orn){
		cout<<"arm"<<endl;
	}
	else{
		cout<<"not"<<endl;
	}
	return 0;
}
