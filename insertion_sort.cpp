#include<iostream>
using namespace std;
void insertionSort(int arr[]){
	int key;
	int j=0;
	for(int i=1;i<5;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main(){
	int myarr[5];
	cout<<"Enter random integers"<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<"Unsorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<endl;
	}
	
	insertionSort(myarr);
	cout<<"Sorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<endl;
	}
	return 0;
}
