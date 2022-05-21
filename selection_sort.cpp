#include<iostream>
using namespace std;

void selectionSort(int arr[] ){
	for(int i=0;i<5;i++){
		int min=i;
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
}
int main(){
	int myarr[5];
	cout<<"Enter random intetgers"<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<"Unsorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<endl;
	}
	cout<<endl;
	selectionSort(myarr);
	cout<<"Sorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<endl;
		
	}
	return 0;
}
