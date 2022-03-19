#include <iostream>

using namespace std;

void reverse(int arr[],int l,int r){
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}
void leftRotate(int arr[], int n, int d) {
    d=d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main() {
    int n,d;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Enter the number of times you wish to rotate the array: ";
    cin>>d;
    leftRotate(arr,n,d);
    cout<<"The rotated array is: ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}