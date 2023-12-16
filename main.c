//
// Created by alice on 12/16/2023.
//

#include <stdio.h>
#include "main.h"
#include "students.h"

int main()
{
    int option;
    Students students;
    initializeStudents(&students, MAX_STUDENTS);

    do
    {
        printf("\nStudents------------------------------------------------------------");
        printf("\n1 - Insert");
        printf("\n2 - Search");
        printf("\n3 - Update");
        printf("\n4 - Remove");
        printf("\n5 - Show");
        printf("\n0 - Close");
        printf("\n---------------------------------------------------------------------");

        printf("\nStudents: %d", students.count);

        printf("\nOption: ");
        scanf("%d", &option);


        switch (option)
        {
            case 0:
                break;

            case 1:
                if(students.count == MAX_STUDENTS)
                {
                    puts(ERROR_FULL_LIST);
                }
                else
                {
                    insertStudents(&students);
                }

                break;

            case 2:
                findStudents(students);
                break;

            case 3:
                updateStudents(&students);
                break;

            case 4:
                removeStudents(&students);
                break;

            case 5:
                printStudents(students);
                break;

            default:
                printf("\nInvalid option");
        }

    } while (option != 0);

    cleanupStudents(&students);

    return 0;
}