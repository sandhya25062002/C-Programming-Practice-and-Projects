/*Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them.*/
#include<stdio.h>
#include<string.h>
struct student 
{
	char name[100];
	int roll_number;
	float marks;
};
int main()
{
	struct student students[3];
	for(int i=0;i<3;i++)
	{
		printf("enter details for students %d\n", i);
		
		
		printf("name : ");
		
        fgets(students[i].name , 100 , stdin);
        
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        
        printf("roll number : ");
        scanf("%d", &students[i].roll_number);
        
        printf("marks : ");
        scanf("%f", &students[i].marks);
   //     getchar(); 
		}
        
        printf("\n");
        
        printf("---- Student Details ----\n");
        
        for (int i = 0; i < 3; i++){
        	
        printf("Student %d:\n", i );
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n", students[i].marks);
        
        printf("\n");
        
        
		}
        
        
        
        return 0;
	
}
