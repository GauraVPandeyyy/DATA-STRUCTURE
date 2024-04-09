//This is code of where you can check identical both  Matrices 
#include<stdio.h>
int main () {
    int r1,c1; // r1 --> Row , c1 --> Column
    printf("\n''''''''Enter first Matrix's Details''''''''\n\n");
    printf("Input Order of 1st Matrix --> \n");
    printf("NO. of Rows : ");
    scanf("%d",&r1);
    printf("NO. of Columns : ");
    scanf("%d",&c1);
    printf("The Order of 1st Matrix :  [%d*%d]\n",r1,c1);
    int matrix1[r1][c1];
    printf("Enter Elements of Matrix 1st : \n");
    for (int i = 0; i < r1; i++)
    {
     for (int j = 0; j < c1 ; j++)
     {
        printf("Order [%d , %d] : ",i,j);
        scanf("%d",&matrix1[i][j]);
     } 
    }
    printf("\n \n FIRST MATRIX \n");
    for (int i = 0; i < r1; i++)
    {   
     printf("[ ");   
     for (int j = 0; j < c1 ; j++)
     {
        printf(" %d ",matrix1[i][j]);
     } 
     printf(" ]\n");
    }  

    int r2,c2; // r2 --> Row , c2 --> Column
    printf("\n''''''''Enter Second Matrix's Details''''''''\n\n");
    printf("Input Order of 2nd Matrix --> \n");
    printf("NO. of Rows : ");
    scanf("%d",&r2);
    printf("NO. of Columns : ");
    scanf("%d",&c2);
    printf("The Order of 2nd Matrix :  [%d*%d]\n",r2,c2);
    int matrix2[r2][c2];
    printf("Enter Elements of Matrix 2nd : \n");
    for (int i = 0; i < r2; i++)
    {
     for (int j = 0; j < c2 ; j++)
     {
        printf("Order [%d , %d] : ",i,j);
        scanf("%d",&matrix2[i][j]);
     } 
    }

    printf("\n \n SECOND MATRIX \n");
    for (int i = 0; i < r2; i++)
    {   
     printf("[ ");   
     for (int j = 0; j < c2 ; j++)
     {
        printf(" %d ",matrix2[i][j]);
     } 
     printf(" ]\n");
    }
    // CHECK IDENTICAL OR NOT 
    int count =0;
    if (r1==r2 && c1==c2) {
        for (int i = 0; i < r2; i++)
    {
     for (int j = 0; j < c2 ; j++)
     {
        if (matrix1[i][j] != matrix2[i][j]) {
            count++;
        }
     } 
    }
    if (count == 0 ) {
        printf("\n \n-->Both Matrix is IDENTICAL to Each Other<--\n");
    }
    else {
        printf("\n \n-->Both Matrix is NOT IDENTICAL to Each Other<--\n");
    }
    }
    else { 
        printf("\n\n-->Both Matrix is NOT IDENTICAL to Each Other<--\n\n");
    }
    return 0;
}