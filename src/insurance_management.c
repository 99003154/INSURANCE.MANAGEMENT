#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <insurance_management.h>

int choice(char operand3)
{
     switch(operand3)
    {
        case 'B':
            return 1;
            break;
        case 'F':
            return 1;
            break;
        case 'T':
            return 1;
            break;
        default:
            return 0;
    }

}



char username(char operand1[])
{
int i;
for(i=0;i<strlen(operand1);i++)
{
if((operand1[i]>='A'&&operand1[i]<='Z')||(operand1[i]>='a'&&operand1[i]<='z')|operand1[i]==' ')
{
continue;
}
else
    return 0;
}
return 1;

}


char password(char operand2[])
{
int acount, icount, spcount, i;
if(strlen(operand2)<=8)
    return 0;

for(i=0;i<strlen(operand2);i++)
{
    if((operand2[i]>='A' &&operand2[i]<='Z')||(operand2[i]>='a'&&operand2[i]<='z'))
        acount++;
    else if(operand2[i]>='0'&& operand2[i]<='9')
        icount++;
    else if((operand2[i]>=33 &&operand2[i]<=47)||(operand2[i]>=60 &&operand2[i]<=64))
         spcount++;
}
if(acount<1||icount<1 ||spcount<1)
    return 0;
else
    return 1;
}

int gender(char operand3)
{
     switch(operand3)
    {
        case 'M':
        case 'm':
            return 1;
            break;
        case 'F':
        case 'f':
            return 1;
            break;
        case 'O':
        case 'o':
            return 1;
            break;
        default:
            return 0;
    }
    return 0;
}


int age(int operand3)
{
if(operand3>=18&&operand3<=100)
    return 1;
else
    return 0;
}

int phonenumber(char operand4[])
{
int i;
if(strlen(operand4)==10)
{
for(i=1;i<=strlen(operand4);i++)
{
if(operand4[i]>='0'&&operand4[i]<='9')
    return 1;
else
    return 0;
}
}
else
    return 0;
}

int vehicletype(char operand3)
{
     switch(operand3)
    {
        case 2:
            return 1;
            break;
        case 4:
            return 1;
            break;
        default:
            return 0;
    }

}

char licensenumber(char operand5[])
{
if(strlen(operand5)==15)
{
if(operand5[0]>='A'&&operand5[0]<='Z'||operand5[0]>='a'&&operand5[0]<='z')
{
if(operand5[1]>='A'&&operand5[1]<='Z'||operand5[1]>='a'&&operand5[1]<='z')
     return 1;
else
{
    return 0;
}
}
else
{
return 0;
}
}
else
{
return 0;
}
}

char enginenumber(char operand6[])
{
if(strlen(operand6)!=10)
    return 0;
else
    return 1;
}

char pay_pa(int operand7)
{

if(operand7==0)
    return 0;

else if(operand7==1)
    return 1;
}


int login(char user_name[],char pwd[])
{

    FILE *fptr;//pointing to the file
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    fptr=fopen("userdetails.txt","a");//opening the file which is in both read and write format
    fptr1=fopen("userpass.txt","a");
    fptr2=fopen("amount.txt","a");
    fptr3=fopen("details.txt","a");
	char c;
	int i,f=0,cnt=0,ch;

    FILE *fp1 = fopen("userdetails.txt","r");
    //FILE *fp2 = fopen("userpass.txt","r");
	char temp[100],temp1[100],sent[100],temp2[100];
	label1:

	while (fgets(temp,20,fp1)!=NULL)
        {
          f=0;
        	cnt++;

        	temp[strlen(temp)-1]='\0';

        	if(strcmp(user_name,temp)!=0)
        	{
        		f=1;
			}
			if(f==0)
			{
		fgets(temp1,20,fp1);
		temp1[strlen(temp1)-1]='\0';

	if((strcmp(pwd,temp1))!=0)
        	{
        		f=1;
			}

			if(f==0)
			{
				fgets(temp2,20,fp1);
	        	temp2[strlen(temp2)-1]='\0';
				strcpy(sent,temp2);
				break;
			}
		}
		}



        if(f==0 && cnt>0)
        {
        	return 1;

		}
		else
		{
			return 0;
		}
}

int claim(char id[])
{
    FILE *fptr;//pointing to the file
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    fptr=fopen("userdetails.txt","a");//opening the file which is in both read and write format
    fptr1=fopen("userpass.txt","a");
    fptr2=fopen("amount.txt","a");
    fptr3=fopen("details.txt","a");
	char temp[30];
	int yr;
	int c=1,f=0,y,choice;
	char description[250];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	yr = tm.tm_year + 1900;
	int amt;
	FILE *fpt;
	fpt = fopen("cl.txt","a+");
		rewind(fpt);
		while(fgets(temp,100,fpt)!=NULL)
		{
			if(f==0)
			{
			temp[strlen(temp)-1]='\0';
			if(strcmp(temp,id)==0)
			{
				fscanf(fpt,"%d",&y);
				if(y==yr)
				{
					return 0;
				}
			}
			}
		}


	if(f==0)
	{
	    return 1;
	}

	rewind(fpt);
}
