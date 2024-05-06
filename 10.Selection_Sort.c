#include<stdio.h>
int min, temp, max, size, pos = 0;
char choice;

int Ascn(int arr[], int size) // ascending order
{
    do
    {
        min = arr[pos];
        for (int i = pos; i < size; i++)
        {
            if (min >= arr[i])
            {
                min = arr[i];
                temp = i;
            }
        }
        arr[temp] = arr[pos];
        arr[pos] = min;
        pos++;
    } while (pos != size);

    return arr[size];
}

int Descn(int arr[], int size) // descending order
{
    pos = 0;
    do
    {
        max = arr[pos];
        for (int i = pos; i < size; i++)
        {
            if (max <= arr[i])
            {
                max = arr[i];
                temp = i;
            }
        }
        arr[temp] = arr[pos];
        arr[pos] = max;
        pos++;
    } while (pos != size);
    return arr[size];
}

int main()
{
    printf("\n''''''''''''''''''' SELECTION SORT '''''''''''''''''''''\n\n");
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
    else printf("\nWrong choice!!!");
    return 0;
}