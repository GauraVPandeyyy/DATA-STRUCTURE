#include <stdio.h>
//#include<conio.h>
#define maxsize 10
int stack[maxsize], top = -1;
void push();
void pop();
void display();

int main()
{
    int choice;
    do
    {
        printf("\n```````````STACK MENU```````\n");
        printf("\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit \n");
        printf("\n```````````````````````````````\n");
        printf("Enter your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter Valid Choice \n");
            break;
        }
    } while (choice != 4);
    return 0;
}
// for insert input using push function
void push()
{
    int n;
    if (top == maxsize - 1)
    {
        printf("\nStack is OVER FLOW");
    }
    else
    {
        top++;
        printf("Enter Element to push : ");
        scanf("%d", &n);
        stack[top] = n;
        printf("Pushed Element : %d\n ", n);
    }
}

// for deleting elements using pop function

void pop()
{
    int n;
    if (top == -1)
    {
        printf("\nStack is EMPTY");
    }
    else
    {
        n = stack[top];
        top--;
        printf("\n Poped Element %d", n);
    }
}

// to display elements creating display function

void display()
{
    if (top == -1)
    {
        printf("Stack is EMPTY");
    }
    else
    {
        printf("Elements Available in STACK \n ");
        for (int i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
}