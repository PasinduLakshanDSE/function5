#include<stdio.h>
int maths,science,it;
float avg;
char final_grade;

void get_input(){
	char student_name[20];
	printf("Enter the student name:");
	scanf("%s",student_name);
	printf("Enter the maths mark:");
	scanf("%d",&maths);
	printf("Enter the science mark:");
	scanf("%d",&science);
	printf("Enter the it mark:");
	scanf("%d",&it);
}
void find_avg(){
	avg=(maths+science+it)/3;
}
void find_grade(){
	if(avg>=60){
		final_grade='A';
		
	}else if(avg>=45){
		final_grade='B';
	}else{
		final_grade='F';
	}
	
}
void Display(){
	printf("Average:%f\n",avg);
	printf("Final Grade:%c\n",final_grade);
}
int main(){
	get_input();
	find_avg();
	find_grade();
	Display();
	return 0;
}