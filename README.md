
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
