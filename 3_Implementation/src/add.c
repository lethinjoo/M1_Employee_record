#include<stdio.h>
#include<stdlib.h>

void add(FILE * fp)
{
printHead();
printf("\n\t\t\tAdd Employee");
char another='y';
Employee e;
fseek(fp,0,SEEK_END);
while(another=='y'||another=='Y')
{
    printf("\n\n\t\tEnter ID number: ");
    scanf("%d",&e.id);
    printf("\n\n\t\tEnter Full Name of Employee: ");
    fflush(stdin);
    fgets(e.name,100,stdin); //fgets takes an extra \n character as input
    e.name[strlen(e.name)-1]='\0';
    printf("\n\n\t\tEnter Designation: ");
    fflush(stdin);
    fgets(e.desgn,10,stdin); //fgets takes an extra \n character as input
    e.desgn[strlen(e.desgn)-1]='\0';
    printf("\n\n\t\tEnter Gender: ");
    fflush(stdin);
    fgets(e.gender,10,stdin); //fgets takes an extra \n character as input
    e.gender[strlen(e.gender)-1]='\0';
    printf("\n\n\t\tEnter Branch: ");
    fflush(stdin);
    fgets(e.branch,50,stdin);
    e.branch[strlen(e.branch)-1]='\0';
    printf("\n\n\t\tEnter Salary: ");
    scanf("%f",&e.sal);
    printf("\n\n\t\tEnter Phone Number: ");
    fflush(stdin);
    fgets(e.phone,50,stdin);
    e.phone[strlen(e.phone)-1]='\0';
    printf("\n\n\t\tEnter E-mail Id: ");
    fflush(stdin);
    fgets(e.mail,20,stdin);
    e.mail[strlen(e.mail)-1]='\0';
    fwrite(&e,sizeof(e),1,fp);
    printf("\n\n\t\tWant to enter another employee info (Y/N)\t");
    fflush(stdin);
    another=getchar();
}
}
