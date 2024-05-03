#include <stdio.h>
int main()
{
    int size, target;
    printf("\n''''''''''''''''''' BINARY SEARCH '''''''''''''''''''''\n\n");
    printf("Enter Size of the Array :  ");
    scanf("%d", &size);
    int searching[size];
    printf("Enter element in Array \n");
    for (int i = 0; i < size; i++)
    {
        printf("Index No.(%d)  ::  ", i);
        scanf("%d", &searching[i]);
    }
    printf("Elements of Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", searching[i]);
    }
    // below code for sorting elements in ascendng order
    int pos, first = 0, second = 1, temp;
    pos = size - 1; // taaki last index jab max value store ho to agl baar us index se ek kam baaar tak loop chale
    while (pos != 0)
    {
        for (int i = 0; i < pos; i++)
        {
            if (searching[first] > searching[second])
            {
                temp = searching[first];
                searching[first] = searching[second];
                searching[second] = temp;
            }
            first++;
            second++;
        }
        first = 0;
        second = 1;
        pos--; // taaki last index jab max value store ho to agl baar us index se ek kam baaar tak loop chale
    }
    printf("\n : Sorted array in Ascending Order  : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", searching[i]);
    }
    // code for actual binary search
    char choice;
    do
    {
        printf("\nEnter Data for Searching : ");
        scanf("%d", &target);
        int low = 0, high = size - 1, mid;
        pos = 0;
        while (mid != low || mid != high)
        {
            mid = (low + high + 1) / 2;
            if (target == searching[mid])
            {
                pos = mid + 1;
                printf("\n%d data is Founded at %d Position\n", target, pos);
                break;
            }

            else if (target < searching[mid])
                high = mid;

            else if (target > searching[mid])
                low = mid;

            else
                printf("%d data is NOT Founded at any position !!! \n");
        }
        printf("Do you want to Continue Searching (Y/N)  :  ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}