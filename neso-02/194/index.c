#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char average_grade;
    int attendance_rate;
} Student;

int does_student_graduate(void* student_info) {
    if (sizeof(*student_info) == sizeof(int)) {
        if (*(int *)student_info >= 60) {
            return 1;
        } 
    }
     
    if (sizeof(*student_info) == sizeof(char)) {
        if (*(char *)student_info <= 'B') {
            return 1;
        } 
    }
    
    return 0;
}

int main()
{
    Student alice = {
        .attendance_rate = 100,
        .average_grade = 'A'
    };
    
    if (does_student_graduate(&alice.attendance_rate)) {
        puts("Student graduated!");
    } else {
        puts("Student didn't get to graduate");
    }
    return EXIT_SUCCESS;
}
