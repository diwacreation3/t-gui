#include <stdio.h>
#include <stdlib.h>
#include "tgui.h"
int main()
{
    system("cls");
    system("color B");
    char name[50];
    int marks, i, n;
    Position(34,0);
    printf( "\xb3\xb2\xdb Student Marks \xdb\xdb\xdb\xb3" );
    Position(13,3);
    printf("\xb3\xdb\xdb\xdb Enter number of students: ");
    scanf("%d", &n);
    FILE *fptr;
    fptr = (fopen("student.txt", "w+"));
    if (fptr == NULL)
    {
        printf("\nError!");
        exit(1);
    }
    for (i = 0; i < n; ++i)
    {
        Position(16,5);
        printf("\n\xb3\xb2\xdb For student %d\n \xb3\xdb\xdb Enter name: ", i + 1);
        scanf("%s", name);
        printf("\xb3\xdb\xdb Enter marks: ");
        scanf("%d", &marks);
        system("cls");
        fprintf(fptr, "\n Name: %s \n Marks=%d \n", name, marks);
    }
    fclose(fptr);
    return 0;
}