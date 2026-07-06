// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    //input string
    scanf("%s",str);

    int left = 0;
    int right = strlen(str)-1;

    //comparing characters
    while(left<right){
        if(str[left] != str[right]){
            printf("NO");
            return 0;
        }
        left++;
        right--;        
    }
    printf("YES");

    return 0;

}
