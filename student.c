#include <stdio.h>
#include <string.h>


// student structure
//struct Student...

struct Student {
 char firstName[50];
 char lastName[50];
 int age;
 int studentId; 
 };


void printStudent(struct Student* student)
{
 printf("------------- Student-------------\n");
 printf(" first name: %s\n", student->firstName);
 printf(" last name: %s\n", student->lastName);
 printf(" age: %d\n", student->age);
 printf(" student id: %d\n", student->studentId);
}


void printAllStudents(struct Student students[], int num)
{
  for ( int i=0; i < num; i++){
   printStudent( students + i);
  }

}

int main()
{

  // an array of students
  //xxx students;
  struct Student students[100];
  char input[256];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
     //add student  
     printf("Please enter student's first name\n");
     fgets(input, 256, stdin);
     sscanf(input, "%s", &students[numStudents].firstName);

     printf("Please enter student's last name\n");
     fgets(input, 256, stdin);
     sscanf(input, "%s", &students[numStudents].lastName);
     
     printf("Please enter student's age\n");
     while(1){
       fgets(input, 256, stdin);
       if (sscanf(input, "%d", &students[numStudents].age) == 1) break;
       printf("Not a valid age\n");
}
    printf("Please enter the student's id\n");
    while(1){
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", &students[numStudents].studentId) == 1) break;
      printf ("Not a correct id value\n");
}
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
