#include<stdio.h>
struct Student{
	int roll;
	char name[100];
	float marks;
}s1[100];//Global Acess

void accept(struct Student s1[100],int n){
	int i;
	for (i=0;i<n;i++){
		printf("\nEnter Roll No: ");
		scanf("%d",&s1[i].roll);
		printf("\nEnter Name: ");
		scanf("%s",&s1[i].name);
		printf("\nEnter Marks: ");
		scanf("%f",&s1[i].marks);
	}
}
void display (struct Student s1[100],int n){
	int i;
	for (i=0;i<n;i++){
		printf("\nRoll No: %d",s1[i].roll);
		printf("\nName: %s",s1[i].name);
		printf("\nMarks: %f",s1[i].marks);
	}
}
int main(){
	int n;
	printf("\nEnter N: ");
	scanf("%d",&n);
	accept(s1,n);
	display(s1,n);
	return 0;
	
}

