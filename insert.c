// Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (the array)
// - Third line: integer pos (1-based position)
// - Fourth line: integer x (e lement to insert)

// Output:
// - Print the updated array (n+1 integers) in a single line, space-separated

// Example:
// Input:
// 5
// 1 2 4 5 6
// 3
// 3

// Output:
// 1 2 3 4 5 6

// Explanation: Insert 3 at position 3, elements [4,5,6] shift right

#include <stdio.h>
int main(){
 int n, pos, x;
 //input the size of array
 scanf("%d", &n);
 int arr[n+1];
 //input the elements of array
for(int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    //input the position and element to be inserted
    scanf("%d %d", &pos, &x);
    //sift element to the right
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    } 
    //insert the new element
    arr[pos - 1]= x;
    //print the new array
    for(int i = 0; i<=n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}