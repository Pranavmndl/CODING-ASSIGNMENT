#include<stdio.h>
int main(){
    int m,n;
    //input rows and columns
    scanf("%d %d",&m,&n);
    int M1[m][n],M2[m][n],M3[m][n];
    //input first matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&M1[i][j]);
        }
    }
    //input second matrix
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&M2[i][j]);
        }
   }
   //Addition of two matrices
   for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        M3[i][j]=M1[i][j]+M2[i][j];
        printf("%d ",M3[i][j]);
    }
    printf("\n");

}
return 0;
}

