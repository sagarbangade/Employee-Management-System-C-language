#include <stdio.h>
#include <stdlib.h>
int n=1;
void menu()
{
    printf("*MENU*\n");
    printf("1. Add Employee details.\n");
    printf("2. Show Employee details.\n");
    printf("3. Update Employee details.\n");
    printf("4. Search Employee details.\n");
    printf("0. Exit.\n");

}
struct emp
{
 int id;
 char name[20],newn[20];
 int sal,nsal;
}e[10000];
void add()
{
    int i;
    printf("Enter Number of Employees: ");
    scanf("%d",&n);
    printf("\nDataset created for %d employees",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of Employee %d\n",i+1);
        printf("ID: ");
        scanf("%d",&e[i].id);
        printf("NAME: ");
        scanf("%s",&e[i].name);
        printf("SALARY: ");
        scanf("%d",&e[i].sal);
        printf("\n");
    }
    printf("DATA SAVED.\n");
}
void show()
{
    int i;
    printf("\nEMPLOYEE RECORD\n");
    printf("\nID\tNAME\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\n",e[i].id,e[i].name,e[i].sal);
    }
}
void update()
{
    int id,x,i,m=0,x2,x3;
    printf("Enter the Id u want to update:\n");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(id==e[i].id)
        {
            printf("What would u Like to Update:\n");
            printf("1.Name\n");
            printf("2.Salary\n");
            scanf("%d",&x);
            switch(x)
            {
            case 1:
                printf("Your old name is %s\n",e[i].name);
                printf("Enter your new name: ");
                scanf("%s",&e[i].newn);
                printf("Your new name is %s your old name is %s\n",e[i].name,e[i].newn);
                printf("Do you really want to change\n");
                printf("3.Yes\n4.No\n Enter your choice : ");
                scanf("%d",&x2);
                switch (x2);
                {
                case 3:
                strcpy(e[i].name, e[i].newn);
                printf("name updated\n\n");

                    break;

                case 4:
                printf("name not updated\n\n");
                    break;


                }

                break;
            case 2:
                printf("Your old salary in %d\n",e[i].sal);
                printf("Enter your new salary: ");
                scanf("%d",&e[i].nsal);
                printf("Your new salary is %d your old salary is %d\n",e[i].nsal,e[i].sal);
                printf("Do you really want to change\n");
                printf("5.Yes\n6.No\n Enter your choice : ");
                scanf("%d",&x3);
                switch (x3);
                {
                case 5:
                e[i].sal = e[i].nsal;
                printf("salary updated\n\n");

                    break;

                case 6:
                printf("salary not updated\n\n");
                    break;


                }
                break;
            default:
                printf("Enter valid option\n\n");
           }
        }
        else
           {
                m++;
           }
    if(m==n)
    {
        printf("ID not found \n\n");
        m=0;
  }
}
}
void search()
{
  int id,x,i,m=0;
    printf("Enter your ID: \n");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(id==e[i].id)
        {
            printf("ID: %d\n",e[i].id);
            printf("Name: %s\n",e[i].name);
            printf("Salary: %d\n",e[i].sal);
        }
        else
           {
                m++;
           }
    if(m==n)
    {
     printf("ID not found\n");
     m=0;
    }
}
}

int main()
{
    int i;
    while(n>0)
    {
        menu();
        printf("\nWhat would you like to do ?\n");
        printf("Please enter your choice: ");
        scanf("%d",&n);
        printf("\n");
        switch(n)
        {
        case 1:
            {
               add();
               printf("\n");
            }
            break;
        case 2:
            {
                show();
                printf("\n");
            }
            break;
        case 3:
            {
                update();
                printf("\n");
            }
            break;
        case 4:
            {
                search();
                printf("\n");
            }
            break;
        case 0:
            {
              printf("Thank you for your business\nWe look forward to work with you again.\n");
            }
            break;
        default:
            printf("Please Enter Valid Function\n");
        }
    }

    return 0;
}
