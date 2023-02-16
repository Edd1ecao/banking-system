#include <stdio.h>
#include<stdlib.h>

int main_exit;
struct date
{
    int month,day,year;
};
struct customer_info
{
    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
}add,upd,check,rem,transaction;

void menu(void);

void new.acc(struct customer_info* customer)
    {

    int choice;
    FILE *ptr;

    ptr = fopen("record.dat", "a+");
    account_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2 ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &add.deposit.month, &add.deposit.day, &add.deposit.year);
    printf("\nEnter the account number:");
    scanf("%d", &check.acc_no);
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        if (check.acc_no == add.acc_no)
        {
            printf("Account no. already in use!");
            fordelay(1000000000);
            goto account_no;
        }
    }
    add.acc_no = check.acc_no;

    printf("Enter the name: ");
    scanf("%c\n", &add.name);
    printf("Enter the date of birth (mm/dd/yyyy): ");
    scanf("%d/%d/%d\n", &add.dob.month, &add.dob.day, &add.dob.year);
    printf("Enter the address: ");
    scanf("%s", &add.address);
    printf("Enter the citizenship number: ");
    scanf("%s\n", &add.citizenship);
    printf("Enter the phone number: ");
    scanf("%lf\n", &add.phone);
    printf("Enter the amount to deposit:$");
    scanf("%f\n", &add.amt);
    printf("Type of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)
    \n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s\n", &add.acc_type);

    fclose(ptr);
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            close();
    else
        {
        printf("\nInvalid!\a");
        goto add_invalid;
        }
    }
    void view.list()
    {
        printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
    }
    void edit(const struct customer_info* customer)
    {
        int test = 0, choice;
        FILE *old, *newrec;
        old = fopen("record.dat", "r");
        newrec = fopen("new.dat", "w");

        printf("\nEnter the account no. of the customer whose info you want to change:");
        scanf("%d",&upd.acc_no);
        
    }
    void transact(void)
    void remove(void)
    void view(void)

    void menu(void)
    {   
        int choice;
        printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n\n\n\n\n\t\t Enter your choice:");
        scanf("%d",&choice);

        system("cls");
        switch(choice)
        {
            case 1:new.acc();
            break;
            case 2:edit();
            break;
            case 3:transact();
            break;
            case 4:view();
            break;
            case 5:remove();
            break;
            case 6:view.list();
            break;
            case 7:close();
            break;

        }
    }
   
   

int main(void)
{

    return 0;
}
//Display menu
//Show a menu or welcome screen that displays the various banking tasks
//1. Create new account
//2. Update information of existing account
//3. For transactions 
//4. Check the details of existing account
//5. Remove existing account
//6. View customers list
//7. Exit