
# DSA - Arrays 

We will go through some of the most common questions in array in this section. I will go through the most optimized solution only and will attach the links of the questions if you want to go through all the approaches  

## Let's get Started

### Question 1 : Left rotate array by d places 

**Input**\
  n = 7, arr[] = [1, 12, 33, 42, 51, 16, 27], d = 2\
**Output**\
 arr[] = [33, 42, 51, 16, 27, 1, 12] 

**Logic**\
1- We divide the array in 2 parts that are:\
Part A: arr[0] to arr[d-1] (i.e first d elements)\
Part B: arr[d] to arr[n-1] (i.e remaining elements)\
2- We reverse both the parts individually.\
3- Finally we reverse the entire array to get the result.

**Logic Code Snippet**

```cpp
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
```

[Click here for complete code](https://github.com/somya-sheti-2022/DSA-Arrays/blob/main/left%20rotate.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Arrays/blob/main/left%20rotate.png)



**link:** https://www.geeksforgeeks.org/array-rotation/

### Question 2 : Move all zeros to end and maitain the order of remaining array

**Input**\
arr[] = {1, 2, 0, 4, 3, 0, 5, 0}, n=8;\
**Output**\
arr[] = {1, 2, 4, 3, 5, 0, 0, 0};

**Logic**\
1- We have a **count** variable to count number of non zeros element.\
2- if **count** is not equal to index at any point of time we swap arr[i],arr[count] as there will be zeros.\
3- Finally we get the desired output


**Logic Code Snippet**

```cpp
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
```

[Click here for complete code](https://github.com/somya-sheti-2022/DSA-Arrays/blob/main/move%20all%20zeros.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Arrays/blob/main/move%20all%20zeros.png)

**Question link:** https://www.geeksforgeeks.org/move-zeroes-end-array/

### Question 3 : Maximum Difference (find the maximum of arr[j] - arr[i] where j>i)

**Input**\
arr[] = {2,3,10,6,4,8,1}, n=7;\
**Output**\
res = 8 (10-2)

**Logic**\
1- We intialize answer as arr[1]-arr[0] and min value as arr[0]\
2- Now we keep on traversing the array and keep calculating maximimum diffrence and update min value. 

**Logic Code Snippet**

```cpp
int maxDiff(int arr[], int n)
{
	int res = arr[1] - arr[0], minVal = arr[0];
	for(int i = 1; i < n; i++){
	    res = max(res, arr[i] - minVal);	
		minVal = min(minVal, arr[i]);
	}
	return res;
}
```

[Click here for complete code](https://github.com/somya-sheti-2022/DSA-Arrays/blob/main/max%20diff.cpp)

### Output of above code

![App Screenshot](https://github.com/somya-sheti-2022/DSA-Arrays/blob/main/max%20diff.png)

**Question Link**: Not available
