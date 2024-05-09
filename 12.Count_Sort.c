#include <stdio.h>
int main()
{
    int size;
    printf("\n''''''''''''''''''' COUNT SORT '''''''''''''''''''''\n\n");
    printf("Enter Size of the Array :  ");
    scanf("%d", &size);
    int InputArr[size];
    printf("Enter element in Array \n");
    for (int i = 0; i < size; i++)
    {
        printf("Index No.(%d)  ::  ", i);
        scanf("%d", &InputArr[i]);
    }
    printf("Elements of Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", InputArr[i]);
    }
    int max = InputArr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < InputArr[i])    max = InputArr[i];
    }
    int count[max+1];
    for (int i = 0; i <= max; i++)  count[i]=0;
  
    for (int i = 0; i < size; i++)    count[InputArr[i]]++;

    //prefix sum
    for (int i = 1; i <= max; i++)   count[i] += count[i - 1];

    int OutputArr[size];
    for (int i = size-1; i >= 0; i--)    OutputArr[--count[InputArr[i]]] = InputArr[i];
    
    printf("\n Sorted Array \n");
    for (int i = 0; i < size; i++)    printf("%d\t", OutputArr[i]);
}
