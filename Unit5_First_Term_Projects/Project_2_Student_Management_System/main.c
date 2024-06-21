#include <stdio.h>
#include <stdlib.h>
#include "Implementation/Implementation.h"

#define println() printf("------------------------------------------------------------\n")

Student My_Students[50]; // roll_number_between (0 -> 49).

int main()
{
	// Storage_Init
	Storage_Init_Std(&My_Students);
	
	println();
	printf("Welcome to the Student Management System\n");
	while(1)
	{
		println();
		printf("Choose the Task that you want to perform :\n");
		printf("1- Add the student details manually.\n");
		printf("2- Add the students details from Text File.\n");
		printf("3- Find the student details by a given roll number.\n");
		printf("4- Find the student details by a given first name.\n");
		printf("5- Find students registered in a course.\n");
		printf("6- Total numbers of students.\n");
		printf("7- Delete a student by a given roll number.\n");
		printf("8- Update Student by a given roll number.\n");
		printf("9- Show all information.\n");
		printf("10- To Exit.\n");
		println();
		printf("Enter your choice to perfom the task : ");
		char choice;
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1: // Add the student details manually.
			Add_Student_Manually(&My_Students);
		break;
		
		case 2: // Add the students details from Text File.
			Add_Student_Auto(&My_Students);
		break;
		
		case 3: // Find the student details by a given roll number.
			Find_Std_Roll(&My_Students);
		break;
		
		case 4: // Find the student details by a given first name.
			Find_Std_Name(&My_Students);
		break;
		
		case 5: // Find students registered in a course.
			Find_Std_Courses(&My_Students);
		break;
		
		case 6: // Total numbers of students.
			Find_Total_Std(&My_Students);
		break;
		
		case 7: // Delete a student by a given roll number.
			Delete_Std_roll(&My_Students);
		break;
		
		case 8: // Update Student by a given roll number.
			Update_Std_Roll(&My_Students);
		break;
		
		case 9: // Show all information.
			Show_All(&My_Students);
		break;
		
		case 10: // To Exit.
			return 0;
		break;
		
		default:
			printf("It's Invalid Entry.\n");
		}
		println();
		printf("\n\n");
	}
	
	
	
	return 0;
}