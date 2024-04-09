//this is code od transposing of any matrix
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
    printf("\n \n The MATRIX \n");
    for (int i = 0; i < r1; i++)
    {   
     printf("[ ");   
     for (int j = 0; j < c1 ; j++)
     {
        printf(" %d ",matrix1[i][j]);
     } 
     printf(" ]\n");
    }
    printf("AFTER Transpose the Matrix is : \n");
    for (int i = 0; i < c1; i++)
    {
        printf("[ "); 
     for (int j = 0; j < r1 ; j++)
     {
        printf(" %d ",matrix1[j][i]);
     }
     printf(" ]\n"); 
    }
    return 0;
}