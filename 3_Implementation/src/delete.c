#include<stdio.h>
#include<stdlib.h>

FILE * del(FILE * fp)
{
 printHead();
printf("\n\t\t\tDelete Employee");
Employee e;
int flag=0,tempid,siz=sizeof(e);
FILE *ft;
if((ft=fopen("temp.txt","wb+"))==NULL)
{
    printf("\n\n\t\t\t\\t*** ERROR ***\n\t\t");
    system("pause");
     return fp;
}
printf("\n\n\tEnter ID number of Employee to Delete the Record");
printf("\n\n\t\t\tID No. : ");
scanf("%d",&tempid);
rewind(fp);
while((fread(&e,siz,1,fp))==1)
{
    if(e.id==tempid)
    { flag=1;
    printf("\n\tRecord Deleted for");
    printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t",e.name,e.branch,e.id);
    continue;
    }
    fwrite(&e,siz,1,ft);
}
fclose(fp);
fclose(ft);
remove("employeeInfo.txt");
rename("temp.txt","employeeInfo.txt");
if((fp=fopen("employeeInfo.txt","rb+"))==NULL)
{
    printf("ERROR");
    return  NULL;
}
if(flag==0) printf("\n\n\t\t*** ERROR RECORD NOT FOUND *** \n\t");
printChar('-',65);
printf("\n\t");
system("pause");
return fp;
}
