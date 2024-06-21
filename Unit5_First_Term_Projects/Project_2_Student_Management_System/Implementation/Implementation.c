#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Implementation.h"


// For make my code more readable with putting fflush in the whole code.
#define printf(...); printf(__VA_ARGS__);myflush();

// Variable help me to get the roll number.
static char roll;

// For Fixing printf and scanf problems.
static void myflush()
{
	fflush(stdin);
	fflush(stdout);
}

// Check avaliability
static Pro_State Check_ava(char roll,Student* PStudents) 
{
	if(PStudents[roll].active == 0)
	{
		return OK;
	}
	else
	{
		return NOK;
	}
}

static Pro_State Print_Std_Info(char roll, Student* PStudents)
{
	printf("Details of student with roll number %d\n",roll);
	printf("First name : %s\n",PStudents[roll].fname);
	printf("Last name : %s\n",PStudents[roll].lname);
	printf("GPA : %f\n",PStudents[roll].GPA);
	return success;
}

// Print details
static Pro_State Print_Std_Details(char roll,Student* PStudents)
{
	Print_Std_Info(roll,PStudents);
	printf("Courses IDs : ");
	char i=0;
	while(i<10)
	{
		if(PStudents[roll].cid[i] == 0)
		{
			break;
		}
		printf("%d ",PStudents[roll].cid[i]);
		i++;
	}
	printf("\n");
	return success;
}

// Check roll number
static Pro_State Check_Roll(char roll)
{
	if(roll < 0 || roll > 49)
	{
		return NOK;
	}
	return OK;
}

// Check GPA Value
static Pro_State Check_GPA(float GPA)
{
	if(GPA >= 0.00 && GPA <= 4.00)
	{
		return OK;
	}
	else
	{
		return NOK;
	}
}

// Add Student Courses
static Pro_State Add_Std_Courses(char roll,Student* PStudents)
{
	char it=0;
	while(it<10)
	{
		if(PStudents[roll].cid[it] == 0)
		{
			break;
		}
		it++;
	}

	if(it == 10)
	{
		printf("The Capacity of courses allowed is full.\n");
		return fail;
	}
	else
	{
		int course_id = 0;
		char cour_it = 0;
		while(it < 10)
		{
			printf("Enter the ID of the course you to add here want here (If you want to stop process enter 0) : ");
			scanf("%d",&course_id);
			if(course_id == 0)
			{
				break;
			}

			cour_it = 0;
			while(cour_it < 10)
			{
				if(PStudents[roll].cid[cour_it] == course_id)
				{
					break;
				}
				if(PStudents[roll].cid[cour_it] == 0)
				{
					cour_it = 10;
					break;
				}
				cour_it++;
			}

			if(cour_it != 10)
			{
				printf("[Warning] This Course is already assigned.\n");
				continue;
			}

			PStudents[roll].cid[it] = course_id;
			it++;
			printf("[Done] This Course has been added successfully.\n");
			
		}
		if(it == 10)
		{
			printf("[Note] You have reached the full capacity of student courses.\n");
		}
	}
	return success;
}

// Delete Student Courses
static Pro_State Delete_Std_Courses(char roll,Student* PStudents)
{
	char i=0;

	while(i<10)
	{
		if(PStudents[roll].cid[i] == 0)
		{
			break;
		}
		i++;
	}

	if(i == 0)
	{
		printf("[Warning] This student doesn't has any courses yet.\n");
		return fail;
	}

	char j = 0;
	printf("The student with roll number (%d) courses is : ",roll);
	while(j < i)
	{
		printf("%d ",PStudents[roll].cid[j]);
		j++;
	}
	
	int course_id=0;

	while(1)
	{
		printf("Enter the Course id you want to delete here  ( type 0 to cancel this process ) : ");
		scanf("%d",&course_id);
		if(course_id == 0)
		{
			printf("[Done] The Process has been canceled successfully.\n");
			break;
		}

		j = 0;
		while(j < i)
		{
			if(PStudents[roll].cid[j] == course_id)
			{
				while(j < 9)
				{
					PStudents[roll].cid[j] = PStudents[roll].cid[j+1];

					if(j+1 == 9)
					{
						PStudents[roll].cid[j+1] = 0;
						break;
					}
					
					if(PStudents[roll].cid[j+1] == 0)
					{
						break;
					}
					j++;
				}
				printf("[Done] The Course has been deleted from the list.\n");
				break;
			}
			j++;
		}

		if(i == j)
		{
			printf("[Error] This Course is not listed, Please try again.\n");
		}
		
	}
	return success;
}

// Student Data Change.
static Pro_State Student_Data_Change(char roll,Student* PStudents)
{
	char choice;
	while(1)
	{
		printf("You can modify student data with these options : \n");
		printf("1-first name.\n2-last name.\n3-GPA.\n4-Add Courses.\n5-Delete Courses.\n6-Cancel.\n");
		printf("Enter your choice here : ");
		scanf("%d",&choice);
		if(choice > 0 && choice < 7)
		{
			break;
		}
		else
		{
			printf("Invalid Entry,Please try again.\n");
		}
	}
	switch (choice)
	{
	case 1: // Edit First name
		printf("Enter the modified of the first name here (Max 50 char) : ");
		gets(PStudents[roll].fname);
		break;
	case 2: // Edit Last name
		printf("Enter the modified of the last name here (Max 50 char) : ");
		gets(PStudents[roll].lname);
		break;
	case 3: // Edit GPA
		while(1)
		{
			printf("Enter the modified of the GPA here : ");
			scanf("%f",&PStudents[roll].GPA);
			if(Check_GPA(PStudents[roll].GPA) == OK)
			{
				break;
			}
			else
			{
				printf("You must type a value from 0.00 to 4.00 , Please try again.\n");
			}
		}
		break;
	case 4: // Edit Courses By Increasing it.
		Add_Std_Courses(roll,PStudents);
		break;
	case 5: // Edit Courses By Decreasing it.
		Delete_Std_Courses(roll,PStudents);
		break;
	
	default:
		printf("[Done] The Operation has been canceled.\n");
		return success;
		break;
	}
	printf("[Done] The Operation has been done successfully.\n");
	return success;
}

// Get Student Roll Number
static Pro_State Get_Std_Roll()
{
	printf("Enter the roll number of student here : ");
	scanf("%d",&roll);
	return success;
}


// ----------------------- Storage_Init_Std.
Pro_State Storage_Init_Std(Student* PStudents)
{
	char roll = 0;
	while(roll < 50)
	{
		PStudents[roll].active = 0;
		roll++;
	}
}

// ----------------------- Add the student details manually.
Pro_State Add_Student_Manually(Student* PStudents)
{
	Get_Std_Roll();
	if(Check_Roll(roll) == NOK)
	{
		printf("[Error] You must type a number from 0 to 49 only.\n");
		return fail;
	}
	if(Check_ava(roll,PStudents) == NOK)
	{
		printf("[Error] Roll Number %d is already taken.\n",roll);
		return fail;
	}

	printf("Enter first name here : ");
	gets(PStudents[roll].fname);
	fflush(stdin);
	printf("Enter last name here : ");
	gets(PStudents[roll].lname);
	while(1)
	{
		printf("Enter GPA here : ");
		scanf("%f",&PStudents[roll].GPA);
		if(Check_GPA(PStudents[roll].GPA) == OK)
		{
			break;
		}
		else
		{
			printf("You must type a value from 0.00 to 4.00 , Please try again.\n");
		}
	}
	
	printf("Enter Course IDs here (Type 0 to stop) (Max 10) : ");
	char i=0;
	for(i=0;i<10;i++)
	{
		PStudents[roll].cid[i]=0;
	}

	i=0;
	while(i<10)
	{
		scanf("%d",&PStudents[roll].cid[i]);
		if(PStudents[roll].cid[i] == 0)
		{
			break;
		}
		i++;
	}

	PStudents[roll].active = 1;
	printf("[Done] Operation Done.\n");
	return success;
}
		
// ----------------------- Add the students details from Text File.
Pro_State Add_Student_Auto(Student* PStudents)
{
	FILE* My_Stored_Data;
	My_Stored_Data = fopen("Students_Database.txt","r");
	if(My_Stored_Data == NULL)
	{
		printf("[Error] The file is not opened yet.\n");
		printf("[Note] You must name your text file with this name (Students_Database) with (.txt) extenstion.\n");
		return fail;
	}
	else
	{
		printf("[Done] The file has been detected and opened successfully.\n");
	}

	printf("\n----------------------\n");
	Student Temp_Student;
	int Temp_roll;
	char Temp_str[300];

	char i = 0;
	while(fgets(Temp_str,299,My_Stored_Data))
	{

		//printf("%s\n",Temp_str);
		char * instance = strtok(Temp_str," ");
		
		Temp_roll = atoi(instance);
		//printf("Roll = %d\n",Temp_roll);

		i = 1;
		while(instance != NULL)
		{
			if((strcmp(instance,"\n")==0))
			{
				instance = strtok(NULL," ");
				continue;
			}

			//printf("(%s)--",instance);
			instance = strtok(NULL," ");
			switch (i)
			{
			case 1: // first name
				strcpy(Temp_Student.fname,instance);
				//printf("First name : %s\n",Temp_Student.fname);
				break;

			case 2: // last name
				strcpy(Temp_Student.lname,instance);
				//printf("Last name : %s\n",Temp_Student.lname);
				break;

			case 3: // GPA
				Temp_Student.GPA=atof(instance);
				//printf("GPA = %f\n",Temp_Student.GPA);
				break;
				
			default:
				Temp_Student.cid[i-4] = atoi(instance);
				//printf("Course (%d) : %d\n",i-4,Temp_Student.cid[i-4]);
				break;
			}
			
			i++;
		}
		if(Check_Roll(Temp_roll) == NOK)
		{
			printf("[Error] roll number must be from (0) to (49) not (%d) as shown ,So if you want to add this student you must change it's roll number.\n",Temp_roll);
			printf("\n----------------------\n");
			continue;
		}
		if(Check_ava(Temp_roll,PStudents) == OK)
		{
			char j = 0;
			PStudents[Temp_roll].active = 1;
			strcpy(PStudents[Temp_roll].fname,Temp_Student.fname);
			strcpy(PStudents[Temp_roll].lname,Temp_Student.lname);
			PStudents[Temp_roll].GPA = Temp_Student.GPA;
			while(j<10)
			{
				PStudents[Temp_roll].cid[j] = Temp_Student.cid[j];
				if(Temp_Student.cid[j] == 0)
				{
					break;
				}
				j++;
			}
			printf("[Done] The Student with roll number %d has been added succssfully.\n",Temp_roll);
		}
		else
		{
			printf("[Error] The Roll number %d was assigned before, If you want to add this student you must change it's roll number.\n",Temp_roll);
		}
		printf("\n----------------------\n");
	}

	fclose(My_Stored_Data);
	return success;
}

// ----------------------- Find the student details by a given roll number.
Pro_State Find_Std_Roll(Student* PStudents)
{
	Get_Std_Roll();
	if(Check_Roll(roll) == NOK)
	{
		printf("[Error] You must type a number from 0 to 49 only.\n");
		return fail;
	}
	if(Check_ava(roll,PStudents) == NOK)
	{
		Print_Std_Details(roll,PStudents);
		printf("[Done] Operation Done.\n");
		return success;
	}
	else
	{
		printf("[Error]This roll number doesn't assign.\n");
		return fail;
	}
}
		
// ----------------------- Find the student details by a given first name.
Pro_State Find_Std_Name(Student* PStudents)
{
	char temp_name[50];
	printf("Enter first name here : ");
	gets(temp_name);

	char roll=0;
	while(roll<50)
	{
		if(PStudents[roll].active == 0)
		{
			roll++;
			continue;
		}

		if(strcmp(PStudents[roll].fname,temp_name) == 0)
		{
			break;
		}
		roll++;
	}

	if(roll == 50)
	{
		printf("[Error] This student doesn't here.\n");
		return fail;
	}
	else
	{
		Print_Std_Details(roll,PStudents);
		printf("[Done] Operation Done.\n");
		return success;
	}

}
		
// ----------------------- Find students registered in a course.
Pro_State Find_Std_Courses(Student* PStudents)
{
	printf("Enter the course id here : ");
	int course_id;
	scanf("%d",&course_id);
	char roll = 0, count = 0,cour_it=0 /*Course_iterator*/; 
	while(roll < 50)
	{
		if(Check_ava(roll,PStudents) == NOK)
		{
			cour_it = 0;
			while(cour_it<10)
			{
				if(PStudents[roll].cid[cour_it]==course_id)
				{
					count++;
					Print_Std_Info(roll,PStudents);
					break;
				}
				cour_it++;
			}
		}

		roll++;
	}
	if(count > 0)
	{
		printf("Total Number of students = %d\n",count);
		printf("[Done] Operation Done.\n");
		return success;
	}
	else
	{
		printf("[Error] This Course ID is invalid.\n");
		return fail;
	}
}
				
// ----------------------- Total numbers of students.
Pro_State Find_Total_Std(Student* PStudents)
{
	char count = 0,roll = 0;

	while(roll<50)
	{
		if(Check_ava(roll,PStudents)== NOK)
		{
			count++;
		}
		roll++;
	}

	printf("Total Number of students = %d\n",count);
	printf("[Done] Operation Done.\n");
	return success;
}
			
// ----------------------- Delete a student by a given roll number.
Pro_State Delete_Std_roll(Student* PStudents)
{
	Get_Std_Roll();
	if(Check_Roll(roll) == NOK)
	{
		printf("[Error] You must type a number from 0 to 49 only.\n");
		return fail;
	}

	if(Check_ava(roll,PStudents) == NOK)
	{
		PStudents[roll].active = 0; // You can overwrite in this place in the future. (It's not visible).
		printf("[Done] Student was deleted successfully.\n");
		return success;
	}
	else
	{
		printf("[Error] This roll number doesn't assign.\n");
		return fail;
	}
}
		
// ----------------------- Update Student by a given roll number.
Pro_State Update_Std_Roll(Student* PStudents)
{
	Get_Std_Roll();
	if(Check_Roll(roll) == NOK)
	{
		printf("[Error] You must type a number from 0 to 49 only.\n");
		return fail;
	}

	if(Check_ava(roll,PStudents) == NOK)
	{
		Student_Data_Change(roll,PStudents);
		printf("[Done] Operation Done.\n");
		return success;
	}
	else
	{
		printf("[Error] This roll number doesn't assign.\n");
		return fail;
	}
	
}
		
// ----------------------- Show all information.
Pro_State Show_All(Student* PStudents)
{
	char roll = 0,count=0;
	while(roll < 50)
	{
		if(Check_ava(roll,PStudents) == NOK )
		{
			Print_Std_Details(roll,PStudents);
			printf("\n-----------------------------------------------------------\n");
			count++;
		}

		roll++;
	}
	printf("[NOTE] Total number of students = %d\n",count);
	printf("[Done] Operation Done.\n");
	return success;
}