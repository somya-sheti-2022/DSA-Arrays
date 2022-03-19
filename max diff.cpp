#include <iostream>

using namespace std;

int maxDiff(int arr[], int n)
{
	int res = arr[1] - arr[0], minVal = arr[0];
	for(int i = 1; i < n; i++){
	    res = max(res, arr[i] - minVal);	
		minVal = min(minVal, arr[i]);
	}
	return res;
}
int main() {
    int n,d;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Maximum Diffrence: "<<maxDiff(arr,n);
    
}