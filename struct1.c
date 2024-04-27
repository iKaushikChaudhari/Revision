#include<stdio.h>
struct Student{
	int roll;
	char name[100];
	float marks;
}s1;//Global Acess

int main(){
	printf("\nEnter Roll No: ");
	scanf("%d",&s1.roll);
	printf("\nEnter Name: ");
	scanf("%s",&s1.name);
	printf("\nEnter Marks: ");
	scanf("%f",&s1.marks);
	
	printf("\nRoll No: %d",s1.roll);
	printf("\nName: %s",s1.name);
	printf("\nMarks: %f",s1.marks);
}

