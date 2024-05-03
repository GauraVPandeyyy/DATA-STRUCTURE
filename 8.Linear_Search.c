#include<stdio.h>
int main () {
    int size,target;
    printf("\n''''''''''''''''''' LINEAR SEARCH '''''''''''''''''''''\n\n");
    printf("Enter Size of the Array :  ");
    scanf("%d",&size);
    int searching[size];
    printf("Enter element in Array \n");
    for (int i = 0; i < size; i++)
    {
        printf("Index No.(%d)  ::  ",i);
        scanf("%d",&searching[i]);
    }
    printf("Elements of Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",searching[i]);
    }
    int pos,count=0;
    char choice;
    do{
    printf("\nEnter Data for Searching : ");
    scanf("%d",&target);
    for (int i = 0; i < size; i++)
    {
        if (target==searching[i]) {
            pos=i+1;
            printf("\n%d Data is Founded at %d Position\n",target,pos);
            count++;
            break;
        }
    }
    if ( count == 0 ) printf("\n%d Data is 'NOT' Founded at Any Position\n",target);
    printf("Do you want to Continue Searching (Y/N)  :  ");
    scanf(" %c",&choice);
    count=0;
    } while (choice=='Y' || choice=='y');
}