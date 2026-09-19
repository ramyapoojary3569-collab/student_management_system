#include <stdio.h>
#include <string.h>

int main(){
    char name[3][50];
    char usn[3][50];
    float marks[3];
    int i,choice;
    char search_usn[20];
    int found;
    printf("student details\n");
    for(i=0;i<3;i++)
    {
    printf("\nenter the student student detail\n",i+1);
    printf("Enter the name:");
    scanf("%s",&name[i]);
    printf("Enter the usn:");
    scanf("%s",&usn[i]);
    printf("Enter the marks:");
    scanf("%2f",&marks[i]);
    }
    /*menu*/
    printf("\nSTUDENT management system\n");
    printf("1.Display students\n");
    printf("2.Search students\n");
    printf("3.Exit\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    if(choice==1)
{
    printf("\nSTUDENT DETAILS\n");
    for(i=0;i<3;i++){
    printf("\nSTUDENt %d\n",i+1);
    printf("Name:%s\n",name[i]);
    printf("Usn:%s\n",usn[i]);
    printf("Marks:%2f\n",marks[i]);
}
}
     else if(choice==2)
{
    printf("\nEnter the usn to search:\n");
    scanf("%s",search_usn);
    found=0;
    for(i=0;i<3;i++)
    {
        if(strcmp(usn[i],search_usn)==0);
        {
            printf("\nstudent found\n");
            printf("Name:%s\n",name[i]);
            printf("Usn:%s\n",usn[i]);
            printf("Marks:%2f\n",marks[i]);
            found=1;
            break;
        }
}
if(found==0)
{
    printf("\nstudent not found");
}
}
else if(choice==3)
{
    printf("\nthankyou\n");
}
else
{
    printf("\ninvalid choice\n");
}
return 0;
}
