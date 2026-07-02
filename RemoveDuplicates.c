#include<stdio.h>
int main(){
    int n;
    //Input size of array
    scanf("%d", &n);

    int arr[n];
    //Input array elements
    for (int i = 0; i<n;i++){
        scanf("%d", &arr[i]);

    }
    //Two pointer approach to remove duplicates from sorted array
    int j = 0;
    for (int i = 1;i<n; i++){
        if (arr[i]!= arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    //Print unique elements
    for ( int i = 0;i<=j;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}