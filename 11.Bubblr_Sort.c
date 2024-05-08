#include <stdio.h>
int size, first = 0, second = 1, temp, pos;
char choice;
int Ascn(int arr[], int size) // ascending order
{
    pos = size - 1; // taaki last index jab max value store ho to agl baar us index se ek kam baaar tak loop chale
    while (pos != 0)
    {
        for (int i = 0; i < pos; i++)
        {
            if (arr[first] > arr[second])
            {
                temp = arr[first];
                arr[first] = arr[second];
                arr[second] = temp;
            }
            first++;
            second++;
        }
        first = 0;
        second = 1;
        pos--; // taaki last index jab max value store ho to agl baar us index se ek kam baaar tak loop chale
    }

    return arr[size];
}

int Descn(int arr[], int size) // descending order
{
    pos = size - 1; // taaki last index jab max value store ho to agl baar us index se ek kam baaar tak loop chale
    while (pos != 0)
    {
        for (int i = 0; i < pos; i++)
        {
            if (arr[first] < arr[second])
            {
                temp = arr[first];
                arr[first] = arr[second];
                arr[second] = temp;
            }
            first++;
            second++;
        }
        first = 0;
        second = 1;
        pos--; // taaki last index jab max value store ho to agl baar us index se ek kam baaar tak loop chale
    }
    return arr[size];
}
int main()
{
    printf("\n''''''''''''''''''' BUBBLE SORT '''''''''''''''''''''\n\n");
    printf("Enter Size of the Array :  ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter element in Array \n");
    for (int i = 0; i < size; i++)
    {
        printf("Index No.(%d)  ::  ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements of Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nWhich Order Do you Want ? \nEnter 'A' for ASCENDING ORDER\nEnter 'D' for DESCENDING ORDER  :  ");
    scanf(" %c", &choice);
    if (choice == 'A' || choice == 'a')
    {
        Ascn(arr, size); // ascending order
        printf("\n : Sorted array in Ascending Order  : \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    else if (choice == 'D' || choice == 'd')
    {
        Descn(arr, size); // descending order
        printf("\n : Sorted array in Descending Order  : \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    else
        printf("\nWrong choice!!!");
}