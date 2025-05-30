#include <stdio.h>
#include <conio.h>
int s[20], item, i, n = 10;
int top = -1;
int main()
{
    while (1)
    {
        printf("\nArray Implementation of Stack\n\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("Insertion \n");
            printf("Enter the Element : ");
            scanf("%d", &item);
            insert_ele(item);
            break;
        case 2:
            printf("Deletion \n");
            dele_ele();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nExited from stack with return status 0\n\n");
            return;
        default:
            printf("invalid choice");
        }
    }
    return;
}
int insert_ele(int item)
{
    if (top >= n)
    {
        printf("The stack is full");
    }
    top = top + 1;
    s[top] = item;
    return;
}
int dele_ele()
{
    if (top < 0)
    {
        printf("Stack is Empty");
        return;
    }
        item = s[top];
        printf("Deleted item is %d", item);
        getch();
        top = top - 1;
        return;
    }
    int display()
    {
        {
        i = 0;
        printf("Content of the stack is :\n");
        while (i <= top)
        {
            printf("%d\t\t", s[i]);
            i++;
        }
        getch();
        return;
    }
}