#include <stdio.h>
#include <stdlib.h>
// FUNCTION declaration
void Create();
void Display();
void Insert_Beginning();
void Insert_Last();
void Insert_Middle();
void Delete_First();
void Delete_Last();
void Delete_Middle();

typedef struct node
{
    int data;
    struct node *address;
} node;
node *newNode, *temp, *previous, *next, *start = NULL;
int n, i, pos, count = 0; // pos means position;
char ch;

int main()
{
    printf("\n''''''''''''''''''' LINKED LIST MENU ''''''''''''''''''''\n");
    int choice;
    char choose_1st;
    printf("\n''''''''''''''''''Create Node ''''''''''''''''''\n");
    Create();
    do
    {
        printf("\n-------------------Enter your Choice -------------------\n");

        printf("Enter 'I' to Insert node \nEnter 'D' to Delete node \nEnter 'S' to Show Elements \nEnter 'E' to EXIT \n");
        printf("Enter your Choice : ");
        scanf(" %c", &choose_1st);
        printf("\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
        if (choose_1st == 'I' || choose_1st == 'i')
        {
            printf("\nEnter '1' to Insert a Node at Beginning\nEnter '2' to Insert a Node at Last\nEnter '3' to Insert a Node at Required Position \n");
            printf("Enter Choice  --:  ");
            scanf("%d", &choice);
            printf("\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
            switch (choice)
            {
            case 1:
                Insert_Beginning();
                break;
            case 2:
                Insert_Last();
                break;
            case 3:
                Insert_Middle();
                break;
            default:
                printf("Enter Valid Input!!!");
                break;
            }
        }
        else if (choose_1st == 'D' || choose_1st == 'd')
        {
            printf("\nEnter '1' to Delete First node\nEnter '2' to Delete Last node\nEnter '3' to Delete from an Specific Position \n");
            printf("Enter Choice  --:  ");
            scanf("%d", &choice);
            printf("\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
            switch (choice)
            {
            case 1:
                Delete_First();
                break;
            case 2:
                Delete_Last();
                break;
            case 3:
                Delete_Middle();
                break;
            default:
                printf("Enter Valid Input!!!");
                break;
            }
        }
        else if (choose_1st == 'S' || choose_1st == 's')
        {
            Display();
        }

    } while (choose_1st != 'E' && choose_1st != 'e');

    printf("\n\n'''''''''''''''''' REVIEW TIME ''''''''''''''''\n");
    int review;
    printf("Give Marks out of 10 : ");
    scanf("%d", &review);
    while (review < 11)
    {
        i++;
        if (i > 4)
        {
            printf("Need Hint ?????? ");
            printf("\nif yess then enter 'y' otherwise enter 'n'");
            scanf(" %c", &ch);
            if (ch == 'y' || ch == 'Y')
            {
                printf("\nGive Marks more than 10 out of 10 \n");
            }
        }
        printf("Give Marks out of 10 : ");
        scanf("%d", &review);
    }
    printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n\n");
    printf("Thank you immensely for awarding me MORE THAN '10' marks OUT of 10. It's incredibly MOTIVATING for ME. Your recognition means a lot. Thank you!!");
    printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''");
    return 0;
}

void Create()
{

    printf("Enter Element :  ");
    scanf("%d", &n);
    start = (node *)malloc(sizeof(node));
    start->data = n;
    start->address = NULL;
    temp = start;
    count++;
    // for creating more nodes
    printf("Do you want to Continue Creating Nodes (Y/N) : ");
    scanf(" %c", &ch);
    while (ch == 'y' || ch == 'Y')
    {

        printf("Enter Next Element :  ");
        scanf("%d", &n);
        newNode = (node *)malloc(sizeof(node));
        newNode->data = n;
        newNode->address = NULL;

        temp->address = newNode;
        temp = temp->address;
        printf("Do you want to Continue Creating Nodes (Y/N) : ");
        scanf(" %c", &ch);
        count++;
    }
}
// Displaying all Elements
void Display()
{
    if (start == NULL)
    {
        printf("The List is Empty\n");
    }
    else
    {
        printf("\n '''''''''''' ELEMENTS '''''''''''''\n");
        temp = start;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->address;
        }
    }
    printf("\n''''''''''''''''''''''''''''''''''''''''\n");
}
// Insert at beginning
void Insert_Beginning()
{
    temp = start;
        printf("Enter Data : ");
        scanf("%d", &n);

        newNode = (node *)malloc(sizeof(node));
        newNode->data = n;
        newNode->address = NULL;

        newNode->address = temp;
        start = newNode;
        printf("::  %d is Inserted at Beginning Position  ::\n", n);
        count++;
}
// Insert at Last
void Insert_Last()
{
        printf("Enter Data : ");
        scanf("%d", &n);
        newNode = (node *)malloc(sizeof(node));
        newNode->data = n;
        newNode->address = NULL;
        temp = start;
        while (temp->address != NULL)
        {
            temp = temp->address;
        }
        temp->address = newNode;
        printf("::  %d is inserted at Last Position  ::\n", n);
        count++;
}
// Insert at Middle
void Insert_Middle()
{
    printf("Enter Position : ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        Insert_Beginning();
    }
    else if (pos <= count)
    {

        i = 1; // to track the node
        newNode = (node *)malloc(sizeof(node));
        printf("Enter Data : ");
        scanf("%d", &n);
        newNode->data = n;
        newNode->address = NULL;

        next = start;
        while (i < pos)
        {
            previous = next;
            next = next->address;
            i++;
        }
        previous->address = newNode;
        newNode->address = next;
        printf("::  %d is inserted at %d position ::\n", n, pos);
        count++;
    }
    else if (pos == count + 1)
    {
        Insert_Last();
    }
    else
        printf("This position does not Exist!!");
}
// deletion
void Delete_First()
{
    if (start == NULL)
        printf("The List is Empty \n");
    else
    {
        temp = start;
        start = temp->address;
        printf("First Node (data '%d') is deleted \n", temp->data);
        free(temp);
        count--;
    }
}
void Delete_Last()
{
    if (start == NULL)
        printf("The List is Empty \n");
    

    else
    {
        temp = start;
        while (temp->address != NULL)
        {
            previous = temp;
            temp = temp->address;
        }
        previous->address = NULL;
        printf("Last Node (data '%d') is deleted \n", temp->data);
        free(temp);
        count--;
    }
}

void Delete_Middle()
{
    if (start == NULL)
        printf("The List is Empty \n");
    else
    {
        printf("Enter Position : ");
        scanf("%d", &pos);

        if (pos == 1)
        {
            Delete_First();
        }
        else if (pos == count)
        {
            Delete_Last();
        }
        else if (pos < count)
        {

            next = start;
            i = 1;
            while (i < pos) // yaha ek galati kyu ki i ki value 1 ha aur pos ki bhi
            {
                previous = next;
                next = next->address;
                i++;
            }
            temp = next->address;
            previous->address = temp;
            printf("'%d' position's Node (data '%d') is deleted \n", pos, next->data);
            free(next);
            count--;
        }
        else
            printf("This position does not Exist!!");
    }
}