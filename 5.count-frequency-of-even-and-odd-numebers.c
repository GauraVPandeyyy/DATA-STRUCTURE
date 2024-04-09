//this is code for counting the frequency of EVEN & ODD elements available in that matrix
#include<stdio.h>
int main () {
    int r1,c1; // r1 --> Row , c1 --> Column
    printf("\n''''''''Enter the Matrix's Details''''''''\n\n");
    printf("Input Order of the Matrix --> \n");
    printf("NO. of Rows : ");
    scanf("%d",&r1);
    printf("NO. of Columns : ");
    scanf("%d",&c1);
    printf("The Order of the Matrix :  [%d*%d]\n",r1,c1);
    int matrix[r1][c1];
    printf("Enter Elements of The Matrix : \n");
    for (int i = 0; i < r1; i++)
    {
     for (int j = 0; j < c1 ; j++)
     {
        printf("Order [%d , %d] : ",i,j);
        scanf("%d",&matrix[i][j]);
     } 
    }
    printf("\nMATRIX \n");
    for (int i = 0; i < r1; i++)
    {   
     printf("[ ");   
     for (int j = 0; j < c1 ; j++)
     {
        printf(" %d ",matrix[i][j]);
     } 
     printf(" ]\n");
    }

    int countEven =0;
    int countOdd =0;
      for (int i = 0; i < r1; i++)
    {
     for (int j = 0; j < c1 ; j++)
     {
        if (matrix[i][j] % 2 ==0 ) countEven++;
        else countOdd++;
      }
    }
    printf("\nFrequency of Even No. is --> %d \nFrequency of Odd No. is --> %d",countEven,countOdd);
    return 0;
}