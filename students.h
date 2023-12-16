//
// Created by alice on 12/16/2023.
//

#ifndef DYNAMICMEMORY_STUDENTS_H
#define DYNAMICMEMORY_STUDENTS_H

#define MAX_STUDENTS 30

#define ERROR_NO_EXISTS_STUDENT "Student doesnt exists in list."
#define ERROR_EMPTY_LIST "The student list is empty."
#define ERROR_FULL_LIST "The student list is full."
#define ERROR_EXISTS_STUDENT "The student number already exists."

#define MIN_STUDENT_NUM 0
#define MAX_STUDENT_NUM 1000
#define MSG_GET_STUDENT_NUM "Enter student number [0-1000]: "

#define MAX_STUDENT_NAME 31
#define MSG_GET_NAME "Enter student name: "

#define MIN_DAY 1
#define MAX_DAY 31
#define GET_BIRTH_DAY "Enter the birth day: "

#define MIN_MONTH 1
#define MAX_MONTH 12
#define GET_BIRTH_MONTH "Enter the birth month: "

#define MIN_YEAR 1990
#define MAX_YEAR 2023
#define GET_BIRTH_YEAR "Enter the birth year: "



typedef struct
{
    int year, month, day;
} Date;


typedef struct
{
    int number;
    char name[MAX_STUDENT_NAME];
    Date birth;

} Student;


typedef struct
{
    int count;
    Student *students;

} Students;



void insertStudents(Students *students);
void findStudents(Students students);
void updateStudents(Students *students);
void removeStudents(Students *students);
void printStudents(Students students);

void initializeStudents(Students *students, int initialCapacity);
void cleanupStudents(Students *students);
void resizeStudents(Students *students, int newCapacity);


#endif //DYNAMICMEMORY_STUDENTS_H
