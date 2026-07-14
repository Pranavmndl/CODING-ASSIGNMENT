// Problem: Given an array of integers, rotate the array to the right by k positions.

// Input:
// - First line: integer n
// - Second line: n integers
// - Third line: integer k

// Output:
// - Print the rotated array

// Example:
// Input:
// 5
// 1 2 3 4 5
// 2

// Output:
// 4 5 1 2 3

#include<stdio.h>
// Function to reverse a portion of the array
void reverse(int arr[], int left, int right){
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    //input array
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    k = k % n; // In case k is greater than n
   
    reverse(arr, 0, n - 1); // Reverse the entire array
    reverse(arr, 0, k - 1); // Reverse the first k elements
    reverse(arr, k, n - 1); // Reverse the remaining elements
    // Print the rotated array
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}