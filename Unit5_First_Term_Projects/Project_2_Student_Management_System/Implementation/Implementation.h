#ifndef _IMPLEMENTATION_H_
#define _IMPLEMENTATION_H_



typedef struct
{
	char active;	//  This field is active or not.
	char fname[51]; //  First_name (Max 50 char).
	char lname[51]; //  Last_name (Max 50 char).
	float GPA;		//  GPA of a student.
	int cid[10];	//  Course_IDs (Max 10).
}Student;

typedef enum
{
	success,
	fail,
	NOK,
	OK,
	
}Pro_State; // Process_State

// ------------------------ Storage_Init_Function
extern Pro_State Storage_Init_Std(Student* PStudents);

// ----------------------- Add the student details manually.
extern Pro_State Add_Student_Manually(Student* PStudents);
		
// ----------------------- Add the students details from Text File.
extern Pro_State Add_Student_Auto(Student* PStudents);
			
// ----------------------- Find the student details by a given roll number.
extern Pro_State Find_Std_Roll(Student* PStudents);	
			
// ----------------------- Find the student details by a given first name.
extern Pro_State Find_Std_Name(Student* PStudents);	
			
// ----------------------- Find students registered in a course.
extern Pro_State Find_Std_Courses(Student* PStudents);	
		
// ----------------------- Total numbers of students.
extern Pro_State Find_Total_Std(Student* PStudents);	
			
// ----------------------- Delete a student by a given roll number.
extern Pro_State Delete_Std_roll(Student* PStudents);	
		
// ----------------------- Update Student by a given roll number.
extern Pro_State Update_Std_Roll(Student* PStudents);	
			
// ----------------------- Show all information.
Pro_State Show_All(Student* PStudents);	
		
#endif
		