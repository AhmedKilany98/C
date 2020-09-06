#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int oper[6];
int count=0;

// Admin Operation
void Add_new_patient_record (int size);
void Edit_patient_record (int size);
void Reserve_slot_with_doctor (int size);
void Cancel_reservation (int size);
// User	Operation
void View_patient_record (int size);
void View_today_reservations (int size);
// CommonOperation
int PassWord();
int array_check(int id, int size);

struct patient
{
    char name[30];
    short  age;
    char gender;
    long ID;
    int slot;
};

struct patient array[100];

int main()
{
    int mode;
    int c=0;
    int i;
    int d=0;
    int h=0;
    int id;
    int size=0;
    int operation;

    printf(" ** Clinic Management System ** \t\t\t\t\n");

    printf("1- Admin mode  \n");
    printf("2- User mode  \n");

    for(c=0; ; c++)
    {
        printf("\n Please Enter your mode  Number : ");
        scanf("%d",&mode);

        if(mode==1)
        {
            int x=PassWord();
            if(x==1)            //       correct Password
            {
                printf("  1- Add new patient record \n");
                printf("  2- Edit patient record \n");
                printf("  3- Reserve a slot with the doctor \n");
                printf("  4- Cancel reservation \n");

                printf(" Please choice operation Number : ");
                scanf("%d",&operation);

                if(operation==1)
                {
                    Add_new_patient_record ( size);
                }
                else if(operation==2)
                {
                    Edit_patient_record ( size);
                }
                else if(operation==3)
                {
                    if(count<5&&count>=0)
                        Reserve_slot_with_doctor (size);
                    else if(count==5)
                        count=0;
                }
                else if(operation==4)
                {
                    Cancel_reservation (size);
                }
                else
                {
                    break;
                    exit(0);
                }
            }
            else if(x==2)    ///    Incorrect Password
            {
                break;
                exit(0);
            }
        }
        else if(mode==2)
        {
            printf("  1- View patient record \n");
            printf("  2- View today reservations \n");

            printf(" Please choice operation Number : ");
            scanf("%d",&operation);

            if(operation==1)
            {
                View_patient_record (size);
            }
            else if(operation==2)
            {
                View_today_reservations (size);
            }
        }
        else
        {
            break;
        }
        size++;
    }
    return 0;
}

/*
                        ## Admine Mode Function
*/

// Add New Patient 
void Add_new_patient_record (int size)
{
    int id;
	struct patient ptt;
	
    printf("\n Please Enter ID more than 1000 and less than 100000 : ");
    scanf("%d",&id);
    int ck=array_check(id,size);
    if(ck==1)                    ///    Password Not Exist
    {

        ptt.ID=id;
        printf("\n Please Enter Name : ");
        scanf("%29s",&ptt.name);
        printf("\n Please Enter Gender M ->> Male and F ->> Female : ");
        scanf(" %c",&ptt.gender);
		
		printf("******** %c\n",ptt.gender);
		
		printf("\n	Please Enter Age : ");
        scanf("%d",&ptt.age);
		array[size] = ptt;
    }
    else if(ck==2)
    {
        printf("\n  I am sorry ID is Exist .....");
        exit(0);
    }
}
// Edit Patient Data
void Edit_patient_record (int size)
{

    int id;
    int x=0;
    int operation;
	struct patient ppt;

    printf(" Please Enter ID more than 1000 and less than 100000 : ");
    scanf("%d",&id);
    int ck=array_check(id,size);
    if(ck==2)
    {
        printf("  1- Edit Name \n");
        printf("  2- Edit Gender \n");
        printf("  3- Edit Age \n");

        printf("\n Please choice  Number : ");
        scanf("%d",&operation);

        for(x=0; x<size; x++)
        {
			ppt  = array[x];
            if(id==ppt.ID)
            {
                break;
            }
        }
        if(operation==1)
        {
            printf("\n Please Enter Name : ");
            scanf("%29s",ppt.name);
        }
        else if(operation==2)
        {
			char ch=0;
            printf("\n Please Enter Gender : ");
           scanf(" %c",&ppt.gender);
        }
        else if(operation==3)
        {
            printf("\n Please Enter Age : ");
            scanf("%d",&ppt.age);
        }
    }
    else if(ck==1)
    {
        printf("\n  I am sorry ID is not Exist .....");
        exit(0);
    }
}

// Revese Slot with doctor 
void Reserve_slot_with_doctor (int size )
{

    int arr[5]= {1,2,3,4,5};
    int sz=5;
    int x=0;
    int i=0;
    int j;
    int k;
    int f;
    int h;
    int id;
    char str1[]="  1- 2:00 pm to 2:30 pm ";
    char str2[]="  2- 2:30 pm to 3:00 pm ";
    char str3[]="  3- 3:00 pm to 3:30 pm ";
    char str4[]="  4- 4:00 pm to 4:30 pm ";
    char str5[]="  5- 4:30 pm to 5:00 pm ";

    printf("\n Please Enter ID more than 1000 and less than 100000 : ");
    scanf("%d",&id);
    for(f=0; f<size; f++)
    {
        if(id==array[f].ID)
        {
            break;
        }
    }

    printf("\n the Reservation a slot with the doctor  is :: ");
    for( j=0; j<sz; j++)
    {
        for( k=0; k<sz; k++)
        {
            if(oper[j]==arr[k])
            {
                arr[k]=0;
            }
        }
    }
    for( h=0; h<sz; h++)
    {
        if(arr[h]>0)
        {
            if(arr[h]==1)
            {
                printf("\n%s",str1);
            }
            else if(arr[h]==2)
            {
                printf("\n%s",str2);
            }
            else if(arr[h]==3)
            {
                printf("\n%s",str3);
            }
            else if(arr[h]==4)
            {
                printf("\n%s",str4);
            }
            else if(arr[h]==5)
            {
                printf("\n%s",str5);
            }
        }
    }
    printf("\n Please enter value you choice : ");
    scanf("%d",&oper[count]);
    array[f].slot=oper[count];
    count++;



}

// Cancel Reservation 
void Cancel_reservation (int size)
{
    int id;
    int h;
    printf("\n your choice Cancel reservation : ");
    printf("\n Please Enter ID more than 1000 and less than 100000 : ");
    scanf("%d",&id);
    for(h=0; h<=size; h++)
    {
        if(id==array[h].ID)
        {
            array[h].ID=0;
        }
    }
}


/*

                ## User Mode Function
*/

// View Patient Data
void View_patient_record (int size)
{
    int id;
    int t;
	struct patient ptt;
    char str1[]="  1- 2:00 pm to 2:30 pm ";
    char str2[]="  2- 2:30 pm to 3:00 pm ";
    char str3[]="  3- 3:00 pm to 3:30 pm ";
    char str4[]="  4- 4:00 pm to 4:30 pm ";
    char str5[]="  5- 4:30 pm to 5:00 pm ";

    printf(" Please Enter ID more than 1000 and less than 100000 : ");
    scanf("%d",&id);
    for(t=0; t<size; t++)
    {
		ptt = array[t];
        if(id==ptt.ID)
        {
            printf(" ID is     : %d\n", ptt.ID);
            printf(" Name is   : %s\n", ptt.name);
            printf(" Gender is : %c\n", ptt.gender);
            printf(" Age is    : %d\n", ptt.age);
            if(array[t].slot==1)
            {
                printf("\n Slot is : %s ", str1);
            }
            else if(array[t].slot==2)
            {
                printf("\n Slot is : %s ",str2);
            }
            else if(array[t].slot==3)
            {
                printf("\n Slot is : %s ",str3);
            }
            else if(array[t].slot==4)
            {
                printf("\n Slot is : %s ",str4);
            }
            else if(array[t].slot==5)
            {
                printf("\n Slot is : %s ",str5);
            }
            break;
        }
    }
}

// View Today Reservation
void View_today_reservations (int size)
{
    int arr[5]= {1,2,3,4,5};
    int id;
    int i=0;
    int f;
    int j;
    int sz=5;
    int h;
    int k;

    char str1[]="  1- 2:00 pm to 2:30 pm ";
    char str2[]="  2- 2:30 pm to 3:00 pm ";
    char str3[]="  3- 3:00 pm to 3:30 pm ";
    char str4[]="  4- 4:00 pm to 4:30 pm ";
    char str5[]="  5- 4:30 pm to 5:00 pm ";

    printf("\n Please Enter ID more than 1000 and less than 100000 : ");
    scanf("%d",&id);
    for(i=0; i<size; i++)
    {
        if(id==array[i].ID)
        {
            if(array[i].slot==1)
            {
                printf(" Slot is : %s \n", str1);
            }
            else if(array[i].slot==2)
            {
                printf(" Slot is : %s \n",str2);
            }
            else if(array[i].slot==3)
            {
                printf(" Slot is : %s \n",str3);
            }
            else if(array[i].slot==4)
            {
                printf(" Slot is : %s \n",str4);
            }
            else if(array[i].slot==5)
            {
                printf(" Slot is : %s \n",str5);
            }
            else
            {
                for(f=0; f<size; f++)
                {
                    if(id==array[f].ID)
                    {
                        break;
                    }
                }

                printf("\n the Reservation a slot with the doctor  is :: ");
                for( j=0; j<sz; j++)
                {
                    for( k=0; k<sz; k++)
                    {
                        if(oper[j]==arr[k])
                        {
                            arr[k]=0;
                        }
                    }
                }
                for( h=0; h<sz; h++)
                {
                    if(arr[h]>0)
                    {
                        if(arr[h]==1)
                        {
                            printf("\n%s",str1);
                        }
                        else if(arr[h]==2)
                        {
                            printf("\n%s",str2);
                        }
                        else if(arr[h]==3)
                        {
                            printf("\n%s",str3);
                        }
                        else if(arr[h]==4)
                        {
                            printf("\n%s",str4);
                        }
                        else if(arr[h]==5)
                        {
                            printf("\n%s",str5);
                        }
                    }
                }
                printf("\n Please enter value you choice : ");
                scanf("%d",&oper[count]);
                array[f].slot=oper[count];
                count++;

            }
        }
    }
}



//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
// this function used to check if password correct or not
int PassWord()
{
    int pw;
    int password=1234;
    int i;
    int res;
    int v=1;

    printf("\n\t\t Please Enter your Password Number : ");
    scanf("%d",&pw);

    if(pw!=password)
    {
        for(i=0; i<3; i++)
        {
            printf("\n Please Enter your password Number %d : ",i+1);
            scanf("%d",&pw);
            if(pw==password)
            {
                v=0;
                res=1;
                break;
            }
        }
        if(v==1)
        {
            res=2;   /// Exit
        }
    }
    else if(pw==password)
    {
        res=1;
    }
    return res;

}

// Function used to check if your select id exist or not 
int array_check(int id, int size)
{
    int res=1;
    int i;
    if(size==0)
    {
        res=1;
    }
    else
    {
        for(i=0; i<size; i++)
        {
            if(id==array[i].ID)
            {
                res=2;
                break;
            }
        }
    }
    return res;
}
