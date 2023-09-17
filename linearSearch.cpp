#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n,key;
	cin>>n>>key;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<"element fount at index:"<<i<<endl;
			break;
		}
	if(i==n){
		cout<<"element not found"<<endl;
	}

	
	}
	
	return 0;
} 