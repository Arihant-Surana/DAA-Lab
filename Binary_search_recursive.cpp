#include<iostream>
using namespace std;
// This is an iterative binary function
// l = left 
// r= right
 
int binSearch(int arr[], int l, int r,int x){
	if (r>=l){
		int mid = l+(r-1)/2;
		//element present in middle
		if (arr[mid]==x)
			return mid;
		//if smaller then can be present on left side
		if (arr[mid]>x)
			return binSearch(arr, l , mid-1,x);
		//Else present at right side of the array
		return binSearch(arr,mid+1,r,x);
		
}
	return -1;
}
int main(){
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binSearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
	
}
