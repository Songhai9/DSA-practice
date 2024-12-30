#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * name;
    int birthYear;
    int id;
} Student;

Student * student_create(void) {

    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (newStudent == NULL)
        return NULL;
    
    newStudent->name = (char *)malloc(1000 * sizeof(char));
    if (newStudent->name == NULL) {
        free(newStudent);
        return NULL;;
    }

    if (fgets(newStudent->name, 1000, stdin) == NULL) {
        free(newStudent->name);
        free(newStudent);
        return NULL;
    }

    if (scanf("%i", &newStudent->birthYear) != 1) {
        free(newStudent->name);
        free(newStudent);
        return NULL;
    }

    if (scanf("%i", &newStudent->id) != 1) {
        free(newStudent->name);
        free(newStudent);
        return NULL;
    }

    return newStudent;
}

void student_print(Student * s) {
    printf("id:        %i\nname:      %s\nbirthYear: %i", s->id, s->name, s->birthYear);
    return;
}

void student_free(Student * s) {
    
    if (s == NULL)
        return;

    free(s->name);
    free(s);

    return;
}