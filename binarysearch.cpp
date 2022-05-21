#include<iostream>
using namespace std;

int binarySearch(int arr[], int left ,int right ,int x){
	while(left<=right){
		int mid=left +(right - left)/2;
		if(arr[mid]=x){
			return mid;
		}
		else if(arr[mid]<x){
			left = mid+1;
		}
		else{
			right=mid-1;
		}
	}
	return -1;
}

int main(){
	int n;
	int arr[10];
	int output;
	
	cout<<"Enter 10 integers in Ascending order"<<endl;
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"Enter the number to search"<<endl;
	cin>>n;
	output= binarySearch(arr,0,9,n);
	if(output==-1){
		cout<<"no match found"<<endl;
	}
	else{
		cout<<"match found at:"<<output+1<<endl;
	}
	return 0;
}
