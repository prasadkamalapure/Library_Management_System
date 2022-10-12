#include<stdio.h>
#include<conio.h>
#include<string.h>
void verify();
void library();

struct book
{
    int bno;
    int bnoc;
    char bname[50];
    char bauther[50];
    char bpubli[50];
};

struct issue
{
    int Bno;
    int snoc;
    long int smo;
    int sidno;
    char sname[50];
    char sadd[50];
};
int main()
{
    verify();
}
void library()
{
    struct book b[500];
    struct issue p[500];
    int i,ch,ch1,n,j,k,bno,bnoc,Bno,smo,sidno,tid;
    char tbname[50],tbauther[50],bname[50],bauther[50],sname[50],sadd[50];
    clrscr();
    printf("   ---: WELCOME TO WIT LIBRARY :---\n\n\n");

    do
    {
        printf("\n1:Add Book\n2:View Book\n3:Search Book\n4:Issue Book\n5:View issue book\n\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n\n●•●• Welcome To Add Book Section •●•●\n");
            printf("\n\nHow many Book you Want to Add:");
            scanf("%d",&n);

            for(i=0; i<n; i++)
            {
                printf("\nDetails of Book %d\n",i+1);
                printf("Book ID number:");
                scanf("%d",&b[i].bno);
                printf("No. of copies:");
                scanf("%d",&b[i].bnoc);
                printf("Book name:");
                scanf("%s",&b[i].bname);
                printf("Book author name:");
                scanf("%s",&b[i].bauther);
                printf("Publisher Name:");
                scanf("%s",&b[i].bpubli);

                printf("\n\n\n");
            }
            break;

        case 2:
            printf("\n■•■• Welcome to view Book section •■•■\n");

            for(i=0; i<n; i++)
            {
                printf("\n\nDetails of Book %d\n",i+1);
                printf("Book ID number:%d\n",b[i].bno);
                printf("No. of copies:%d\n",b[i].bnoc);
                printf("Book name:%s\n",b[i].bname);
                printf("Book author name:%s\n",b[i].bauther);
                printf("Publisher Name:%s\n\n",b[i].bpubli);
            }
            printf("\n\n\n");
            break;

        case 3:
            printf("\n ▪︎▪︎▪︎Welcome to Search Book Section▪︎▪︎▪︎\n\n");
            printf("\n\nEnter your choice search by:\n1:Book ID\n2:Book Name\n3:Book auther");
            scanf("%d",&ch1);

            switch (ch1)
            {

            case 1:
                printf("\nEnter book ID:");
                scanf("%d",&tid);
                for(i=0; i<n; i++)
                {
                    if(tid==b[i].bno)
                        printf("\nAvailable\n");
                }
                break;

            case 2:
                printf("\nEnter Book name:");
                scanf("%s",&tbname);
                for(i=0; i<n; i++)
                {
                    if(tbname==b[i].bname)
                        printf("\nAvailable");
                }
                break;

            case 3:
                printf("\nEnter Author:");
                scanf("%s",&tbauther);
                for(i=0; i<n; i++)
                {
                    if(tbauther==b[i].bauther)
                        printf("\nAvailable\n");
                }
                break;
            }
            printf("\n\n\n");
            break;

        case 4:
            printf("\n\n ~~~ Welcome To Issue section ~~~\n\n");
            printf("\nOnly available book are allow to issue\n");
            printf("How many book you want to issue:");
            scanf("%d",&j);

            for(i=0; i<j; i++)
            {
                printf("\n\nEnter Book ID No.:");
                scanf("%d",&p[j].Bno);
                printf("Enter your id no.:");
                scanf("%d",&p[j].sidno);
                printf("Enter Your name:");
                scanf("%s",&p[j].sname);
                printf("Enter your mobile number:");
                scanf("%d",&p[j].smo);
                printf("Enter your add.:");
                scanf("%s",&p[j].sadd);
                printf("Enter no. of books availabl :");
                scanf("%d",&p[j].snoc);
                printf("\n\n");
            }

            printf("\n\n\n");
            break;

        case 5:
            printf("\nWelcome To view issue section\n");

            for(i=0; i<j; i++)
            {
                printf("\n Book ID No.:%d\n",p[j].Bno);
                printf(" student id no.:%d\n",p[j].sidno);
                printf(" student name:%s\n",p[j].sname);
                printf(" student mobile number:%d\n",p[j].smo);
                printf(" student add.:%s\n",p[j].sadd);
                printf(" no. of books available in library:%d\n\n",p[j].snoc-1);
            }
            printf("\n\n\n");
            break;

        case 6:
            exit(0);

        }
    } while(ch!=6);
}

void verify()
{
    int i,j,y=1234,x,z,w=4321;
    clrscr();
    printf("\n\t");
    for(i=0; i<24; i++)
    {
        printf("*");
    }
    printf("\n\t*       WELCOME        *");
    printf("\n\t*         TO           *");
    printf("\n\t*      WIT LIBRARY     *");
    printf("\n\t");
    for(i=0; i<24; i++)
    {
        printf("*");
    }
    printf("\n\n\tEnter \n\t   User Name:");
    scanf("%d",&x);
    printf("\t   Password :");
    scanf("%d",&z);

    if((w==x)&&(y==z))
    {
        library();
    }
    else
    {
        printf("\nInvalid User Name & Password!\nEnter '1' to try again '0' to exit:");
        scanf("%d",&j);
        if(j==1)
        {
            verify();
        }
        else if(j==0)
        {
            exit(1);
        }
        else
        {
            printf("\nInvalid!");
        }
    }
}