#include <stdio.h>
#include <string.h>
struct Course {
    char ID[10];
    char namaDosen[255];

};
struct Student {
    char name[255];
    double GPA;
    Course c[2];
    };

int main(){
    Student s ={"Hans", 4.0, {"COMP6047","Pak Indra"}};

    printf("%s", s.name);
    printf("%s", s.c.namaDosen);
   
    
    return 0;
}