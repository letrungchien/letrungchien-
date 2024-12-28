#include<stdio.h>
#include"functions.h"

  void startTheProgram(){
	printf("***Student Management System Using C***\n");
    printf("\n");
    printf("           CHOOSE YOUR ROLE\n");
    printf("        =========================\n");
    printf("        [1] Admin.\n");
    printf("        [2] Student.\n");
    printf("        [3] Teacher.\n");
    printf("        [0] Exit the Program.\n");
    printf("        =========================\n");
    printf("        Enter The Choice: ");
}
  void menuAdmin(){
    printf("***Student Management System Using C***\n");
    printf("\n");
    printf("                MENU\n");
    printf("        =========================\n");
    printf("        [1] Students management.\n");
    printf("        [2] Classrooms management.\n");
    printf("        [3] Teacher management.\n");
    printf("        [4] User Guideline.\n");
    printf("        [5] About Us.\n");
    printf("        [0] Exit the Program.\n");
    printf("        =========================\n");
    printf("        Enter The Choice: ");
 	
}
  void invalidSelection(){
	
    printf("\n");
    printf("\n");
    printf("========== Invalid Selection  =======\n");
    printf("\n");
    printf("\n");

}
  void endOfTheProgram(){
	printf("\n");
    printf("========== Thank You =======\n");
    printf("========== See You Soon ====\n");
    printf("\n");
}
