#include <stdio.h>
#include <string.h>

struct students
{
	char name[20];
	int age; 
	char country[20];
};
int main()
{
	// struc = collection of related member("Variables")
	// 	They can be of different data types
	// 	listed under one name in a block of memory
		// VERY SIMILAR to clases in other languages 
	
	struct students student1;
	struct students student2;
	
	strcpy(student1.name, "Precious");
	student1.age =50;
	strcpy(student1.country, "Nigeria");

	strcpy(student2.name, "Gift");
	student2.age = 23;
	strcpy(student2.country, "Germany");

	printf("Student 1 name %s and he / she is %d and he / shwe is from %s\n", student1.name, student1.age, student1.country);
	printf("Student 2 name %s and he / she is %d and he / shwe is from %s\n", student2.name, student2.age, student2.country);
}
