// Display name , Roll no and class 

#include <stdio.h>

int main()
{
    char name[50]; // String array for full name
    int rollno;
    char div;

    printf("Enter your name : ");
    scanf("%s", name); // Read string 

    printf("Enter your roll no: ");
    scanf("%d", &rollno);

    printf("Enter your div : ");
    scanf(" %c", &div);  // Space before %c skips leftover newline

    printf("Name: %s\nRoll No: %d\nDivision: %c\n", name, rollno, div);

    return 0;
}