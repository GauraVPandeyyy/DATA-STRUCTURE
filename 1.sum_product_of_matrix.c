//This is  Code of addition & Product of TWo Matrices
#include<stdio.h>
#include<stdlib.h>
void sum(int r1,int c1 ,int r2, int c2,int matrix1[r1][c1], int matrix2[r2][c2]);
void product(int r1,int c1 ,int r2, int c2, int matrix1[r1][c1], int matrix2[r2][c2]);
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
    //calling fuctions 
    int choose;
    do {
    printf("\nChoose No. 1 for SUM\nChoose no. 2 for PRODUCT\nChoose no. 3 for both SUM & PRODUCT\nChoose no. 4 for EXIT : --> ");
    scanf("%d",&choose);
     if (choose == 1 ) {
        if ( r1==r2 && c1==c2) {
            sum(r1,c1,r2,c2,matrix1,matrix2);
        }
        else printf("\nBoth matrices CAN'T Added Bcoz their Order is NOT SAME\n");
    }
    else if ( choose == 2 ){
      if (c1==r2) {
        product(r1,c1,r2,c2,matrix1,matrix2);
      }
      else printf("\nCAN'T find Product Bcoz NO.  of column of 1st Matrix & no. of Row of 2nd Matrix is NOT SAME \n");
    }
    else if ( choose == 3 ) {
      if ( r1==r2 && c1==c2) {
            sum(r1,c1,r2,c2,matrix1,matrix2);
        }
        else printf("\nBoth matrices CAN'T Added Bcoz their Order is NOT SAME\n");
      if (c1==r2) {
        product(r1,c1,r2,c2,matrix1,matrix2);
      }
      else printf("\nCAN'T find Product Bcoz NO.  of column of 1st Matrix & no. of Row of 2nd Matrix is NOT SAME \n");  
    }
    else if ( choose == 4) {
      exit(0);
    }
    else printf("Enter Valid Number from (1 to 4 )\n");
    }
   while (choose != 4);

    return 0;
    }
    //function of Sum 
    void sum(int r1,int c1 ,int r2, int c2, int matrix1[r1][c1], int matrix2[r2][c2]){
     int add[r1][c1]; 
     for (int i = 0; i < r1; i++)
    {
     for (int j = 0; j < c1 ; j++)
     {
        add[i][j] = matrix1[i][j] + matrix2[i][j];
     } 
    }   
    printf("\nSum of both MATRICES : \n");
    for (int i = 0; i < r2; i++)
    {   
     printf("[ ");   
     for (int j = 0; j < c2 ; j++)
     {
        printf(" %d ",add[i][j]);
     } 
     printf(" ]\n");
    }
    }
    //function of PRODUCT 
    void product(int r1,int c1 ,int r2, int c2, int matrix1[r1][c1], int matrix2[r2][c2]){
     int multy[r1][c2 ]; 
     for (int i = 0; i < r1; i++)
    {
     for (int j = 0; j < c2 ; j++)
     {
      multy[i][j] = 0;
      for ( int k = 0; k < c1; k++ ) {
        multy[i][j] += matrix1[i][k] * matrix2[k][j];
     }
     } 
    }   
    printf("\nPRODUCT of both MATRICES : \n");
    for (int i = 0; i < r1; i++)
    {   
     printf("[ ");   
     for (int j = 0; j < c2 ; j++)
     {
        printf(" %d ",multy[i][j]); 
     } 
     printf(" ]\n");
    }
    }