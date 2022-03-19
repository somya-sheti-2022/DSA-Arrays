#include <iostream>

using namespace std;

void pushZerosToEnd(int arr[], int n) {
	int count=0;
    for(int i=0;i<n;i++){
	    if(arr[i]!=0){
	        if(i!=count){
                arr[count]=arr[i];
	            arr[i]=0;
	        }
	        count++;
	    }
	}return;
}

int main() {
    int n,d;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    pushZerosToEnd(arr,n);
    cout<<"Array after pushing all the zeros to end: ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}