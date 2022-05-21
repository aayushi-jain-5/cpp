#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int l=1;l<=n;l++){
		for(int m=0;m<l-1;m++){
			cout<<" ";
		}
		for(int p=1;p<=(2*n)-(2*l-1);p++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
