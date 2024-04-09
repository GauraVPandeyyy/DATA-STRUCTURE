//this code will be where user can find the sum of each row's elements and as well as columns
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

    int SumOfRow=0;
    int SumOfColumn =0;
    //Sum of Each Rows
      for (int i = 0; i < r1; i++)
    {
     SumOfRow=0;
     for (int j = 0; j < c1 ; j++)
     {
        SumOfRow += matrix[i][j];
      }
      printf("Sum of Each Row :--> %d\n",SumOfRow);
    }
    //Sum of Each Columns
    printf("\n");
     for (int i = 0; i < c1; i++)
    {
     SumOfColumn =0;
     for (int j = 0; j < r1 ; j++)
     {
        SumOfColumn += matrix[j][i];
      }
      printf("Sum of Each Column : --> %d\n",SumOfColumn );
    }
     
    return 0;
}