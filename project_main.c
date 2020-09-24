#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int signup()
{
FILE *fptr;
FILE *fptr1;
FILE *fptr2;
FILE *fptr3;
fptr=fopen("userdetails.txt","a");
fptr1=fopen("userpass.txt","a");
fptr2=fopen("amount.txt","a");
fptr3=fopen("details.txt","a");
time_t t=time(NULL);
struct tm tm=*localtime(&t);
srand(time(0));
char gender[5],vehicletype[5];
int age,count=0;
//char card_number[20],cvv[4],i;
char name[30],address[30],licenseno[18],engineno[10],vehicle_no[10],pass[10],phno[10];
float amount,amnt;
int i,flag=0;
char choice[5],c,select[5];
printf("_________________________SIGN UP_________________________\n\n");
printf("List of the various vehicle insurances available:\n");
printf("\t1.Bumper to Bumper insurance\n\t2.Full insurance\n\t3.Third party insurance\n");
printf("Enter your choice:");
scanf("%s",&choice);
while(choice[0]!='0')
{
  switch(choice[0])
  {
    case '1':
        printf("\nYou have selected BB insurance type");
        amount=10000.00;
        c=choice[0];
        choice[0]='0';
        break;
    case '2':
        printf("\nYou have selected IF insurance type");
        amount=13500.00;
        c=choice[0];
        choice[0]='0';
        break;
    case '3':
        printf("\nYou have selected TP insurance type");
        amount=14000.00;
        c=choice[0];
        choice[0]='0';
        break;
    default:
        def:
        printf("\nInvalid choice entered.Please try again!\n");
        printf("To try again press '1' , else press '0' to quit");
        scanf(" %s",select);
        if(select[0]=='0')
            exit(0);
        else if(select[0]=='1' && strlen(select)==1)
        {
            printf("\nRe enter your choice");
            scanf(" %s",choice);
        }
        else
            goto def;
  }
}

fprintf(fptr2,"%d/%d/%d\n",tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday);
fprintf(fptr3,"%d/%d/%d\n",tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday);
printf("\n--------------Enter your details-----------------\n");
lab1:
printf("\nEnter username:");
scanf("%s",name);
for(i=0;i<strlen(name);i++)
{
if((name[i]>='A'&&name[i]<='Z')||(name[i]>='a'&&name[i]<='z')||name[i]==' ')
flag=1;
else
{
flag=0;
break;
}
}
if(flag==0)
{
printf("\nInvalid Username!");
goto lab1;
}
fprintf(fptr,"%s\n",name);
flag=0;

int acount=0,icount=0,spcount=0;
lab6:
printf("\nEnter the password:");
scanf("%s",pass);
if(strlen(pass)<=8)
{
    printf("\nInvalid password.Please enter a passcode with atleast one alphabet,number an,a special character and with a length greater than 8");
    goto lab6;
}
for(i=0;i<strlen(pass);i++)
{
    if((pass[i]>='A' &&pass[i]<='Z')||(pass[i]>='a'&&pass[i]<='z'))
        acount++;
    else if(pass[i]>='0'&& pass[i]<='9')
        icount++;
    else if((pass[i]>=33 &&pass[i]<=47)||(pass[i]>=60 &&pass[i]<=64))
         spcount++;
}
if(acount<1||icount<1 ||spcount<1)
{
    printf("\nInvalid password.Please enter a passcode with atleast one alphabet,number and special character");
    goto lab6;
}


fprintf(fptr,"%s\n",pass);




char temp[20],z;
int j=0,count1=0,length;
if(c=='1')
{

itoa(rand(),temp,10);
printf("%s",temp);

fprintf(fptr,"%s","BB");

fprintf(fptr,"%s\n",temp);
//fprintf(fptr3,"%s\n",temp);
printf("\nYour Userid is %s%s","BB",temp);
}
if(c=='2')
{

itoa(rand(),temp,10);

fprintf(fptr,"%s","FI");

fprintf(fptr,"%s\n",temp);
//fprintf(fptr3,"%s\n",temp);
printf("\nYour Userid is %s%s","FI",temp);
}
if(c=='3')
{
itoa(rand(),temp,10);

fprintf(fptr,"%s","TP");

fprintf(fptr,"%s\n",temp);
//fprintf(fptr3,"%s\n",temp);
printf("\nYour Userid is %s%s","TP",temp);
}




lab3:
printf("\nEnter age:");
scanf("%d",&age);
if(age>=18&&age<=100)
{
flag=1;
}
else if(flag==0)
{
printf("Invalid age!");
goto lab3;
}
fprintf(fptr,"%d\n",age);
printf("\nEnter address:");
scanf("%s",address);
fprintf(fptr,"%s\n",address);
lab2:
printf("\nEnter phone number:");
scanf("%s",&phno);
if(strlen(phno)==10)
{
for(i=0;i<strlen(phno);i++)
{
if(phno[i]>='0'&&phno[i]<='9')
{
flag=1;
}
else {
flag=0;
break;
    }
}
}
else {
flag=0;
}
if(flag==0)
{
printf("Invalid number! ");
goto lab2;
}
fprintf(fptr,"%ld\n",phno);
flag=0;
printf("\nSelect gender:");
jump:
printf("\n\t1.Male\n\t2.Female\n\t3.Other\n  ");
scanf(" %s",&gender);
switch(gender[0])
{
    case '1':
        fprintf(fptr,"%s\n","Male");
        break;
    case '2':
        fprintf(fptr,"%s\n","Female");
        break;
    case '3':
        fprintf(fptr,"%s\n","Other");
        break;
    default:
        printf("Invalid choice.Try again!");
        goto jump;
}
lab4:
printf("\nEnter License number(15 characters):");
scanf("%s",licenseno);
if(strlen(licenseno)==15)
{
if(licenseno[0]>='A'&&licenseno[0]<='Z'||licenseno[0]>='a'&&licenseno[0]<='z')
{
if(licenseno[1]>='A'&&licenseno[1]<='Z'||licenseno[1]>='a'&&licenseno[1]<='z')
     flag=1;
   else
 flag=0;
    }
else
{
flag=0;
}
}
else
{
flag=0;
}
if(flag==0)
{
printf("Invalid License number!");
goto lab4;
}
fprintf(fptr,"%s\n",licenseno);
flag=0;
printf("\nSelect the Vehicle type:");
jump1:
printf("\n\t1.Two Wheeler\n\t2.Four Wheeler\n\t ");
scanf(" %s",vehicletype);
int vtamt;
switch(vehicletype[0])
{
    case '1':
        fprintf(fptr,"%s\n","Two Wheeler");
        vtamt=3000;
        break;
    case '2':
        fprintf(fptr,"%s\n","Four Wheeler");
        vtamt=5000;
        break;
    default:
        printf("\nInvalid choice.Try again!");
        goto jump1;
}
fprintf(fptr2,"%f\n\n",amount+vtamt);
lab5:
printf("\nEnter Engine number(10 digits):");
scanf("%s",engineno);
if(strlen(engineno)!=10)
{
printf("\nInvalid engine number!");
goto lab5;
}
fprintf(fptr,"%s\n",engineno);

fclose(fptr);
printf("\n\n---------------Sign up successfull!-----------------\n\n");

int idv=98,scount=0;
fprintf(fptr3,"%d\n",idv);
fprintf(fptr3,"%d\n\n",scount);
printf("\nYour userid and password is recorded");
printf("\nPlease make sure you pay the principle amount of Rs.%.2f",amount+vtamt);
printf("\nPress '1' to proceed with the initial payment or press '0' to quit");
scanf("%s",choice);
if(choice[0]=='0')
    exit;
else
{
  printf("\n------------------Payment-----------------------");
  pay:
  printf("\nEnter the amount you wish to pay");
  scanf("%f",&amnt);
  amount=amount+vtamt;
  if(amnt==amount)
    printf("\nPayment successfully completed");
  else{
    printf("\nPlease pay the correct amount");
    inp:
    printf("\nIf you wish to continue the payment ,press '1' else to quit press '0'");
scanf(" %s",choice);
if(choice[0]=='1')
{
goto pay;
}
else if(choice[0]=='0')
{
exit(0);
}
else
{
printf("\nInvalid choice!");
goto inp;
}}
}
fclose(fptr);
fclose(fptr1);
fclose(fptr2);
fclose(fptr3);
}
int func(char id[])
{
	int f=0,i=0,j=0,amt,fine=0,k=0,cvv,data1,data,diff,perdec,ans;
	long long int cn;
	char ch,c[3],temp[20],dat[20];

	FILE *fp;
	fp=fopen("login-data.txt","r");
	while((fgets(temp,20,fp))!=NULL)
	{
		if(id[0]==temp[0] && id[1]==temp[1] )
		{
			f=2;
			c[0]=id[0];
			c[1]=id[1];
		}
		if(f==2)
		{
			break;
		}
	}

	fgets(dat,20,fp);
	fscanf(fp,"%d",&data);

	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	data1=tm.tm_year + 1900;
	diff=data1-data;
	perdec=diff*5;
	ans=98-perdec;
	printf("Your Idv value according to date %d-%d-%d is %d% \n",tm.tm_year + 1900, tm.tm_mon+ 1, tm.tm_mday,ans);
	if(f==2)
	{
		if(c[0]=='B' && c[1]=='B')
		{
			printf("\nThe insurance type is bumper to bumper...The amount to be paid is Rs 2000.00");

			printf("\nEnter the amount to continue with payment:");

			x:
				scanf("%d",&amt);

			if(amt!=2000 )
			{
				printf("Enter the correct amount ...The amount to be paid is Rs 2000.00\n");
				goto x;
			}
			else
			{
				printf("Thank you for paying the amount");
			}

		}
		else if(c[0]=='F' && c[1]=='I')
		{
			printf("\nThe insurance type is full insurance...The amount to be paid is Rs 1000.00");
			printf("\nEnter the amount to continue with payment:");
			y:
			{
				scanf("%d",&amt);
			}

			if(amt!=1000 )
			{
				printf("Enter the correct amount ...The amount to be paid is Rs 1000.00\n");
				goto y;
			}
			else
			{
				printf("Thank you for paying the amount");
			}
		}
		else if(c[0]=='T' && c[1]=='P')
		{
			printf("\nThe insurance type is third party insurance...The amount to be paid is Rs 900.00");
			printf("\nEnter the amount to continue with payment:");

			z:
				scanf("%d",&amt);

			if(amt!=900 )
			{
				printf("\nEnter the correct amount ...The amount to be paid is Rs 900.00\n");
				goto z;

			}
			else
			{
				printf("Thank you for paying the amount");
				printf("\nPayment Successfull!");
			}
		}

	}

}
int claim(char id[])
{
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
	if((fgets(temp,20,fpt))=='\0')
	{
		fputs(id,fpt);
		fprintf(fpt,"\n%d\n",yr);
		fprintf(fpt,"%d\n",c);
	}
	else
	{
		rewind(fpt);
		while(fgets(temp,20,fpt)!=NULL)
		{
			if(f==0)
			{
			temp[strlen(temp)-1]='\0';
			if(strcmp(temp,id)==0)
			{
				fscanf(fpt,"%d",&y);
				if(y==yr)
				{
					printf("You have already claimed the insurance more than one time in this year!!\n");
					f=1;
				}
			}
			}
		}
		if(f==0)
		{
			fputs(id,fpt);
		fprintf(fpt,"\n%d\n",yr);
		fprintf(fpt,"%d\n",c);
		}
	}

	if(f==0)
	{
	labl:
	printf("Enter the total expense: ");
	scanf("%d",&amt);
	if(amt<0)
	{
		printf("Invalid Input!\n");
		goto labl;
	}
	if(id[0]=='B' && id[1]=='B')
	{
		choice = 1;

	}
	else if(id[0]=='F' && id[1]=='I')
	{
		choice = 2;
	}
	else if(id[0]=='T' && id[1]=='P')
	{
		choice = 3;
	}
	switch(choice)
	{
	case 1:
		printf("\nBased upon your policy, a sum of %d will be transacted only if the submitted document is approved.",amt);
		break;

	case 2:
		printf("\nBased upon your policy, a sum of %d will be transacted only if the submitted document is approved.",amt*(0.8));
		break;
	case 3:
   		printf("\nIn accordance to the amount you claimed, a particular sum will be transacted only if the submitted document is approved.");
		break;
    default:
		printf("Invalid choice. Please enter a valid choice:  ");
	}
	}
	rewind(fpt);
}



int login()
{
	char c;
	int i,f=0,cnt=0,ch;

    FILE *fp1 = fopen("userdetails.txt","r");
    //FILE *fp2 = fopen("userpass.txt","r");
	char id[100],pwd[100],temp[100],temp1[100],sent[100],temp2[100];
	label1:
	printf("Enter your userid and password\n");
	scanf("%s ",id);
	scanf("%s",pwd);
	while (fgets(temp,20,fp1)!=NULL)
        {
          f=0;
        	cnt++;

        	temp[strlen(temp)-1]='\0';

        	if(strcmp(id,temp)!=0)
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
        	printf("Verified\n");
        lbl:
        	printf("1.Claim\n2.Payment\nEnter the Choice: ");
        	scanf("%d",&ch);
			if(ch==1)
        	{

				claim(sent);
			}
			else if(ch==2)
			{
				func(sent);
			}
			else
			{
				printf("Invalid choice!\n");
				goto lbl;
			}


		}
		else
		{
			printf("Invalid user OR Password");
			fseek(fp1,0,SEEK_SET);
			printf("\n");
			goto label1;

		}

}
int main()
{
	char ch='y';
	int c;
	while(ch=='y')
	{
		printf("Enter 1 for signup\n");
		printf("Enter 2 for login\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:signup();
			    break;
		    case 2:login();
		        break;
		    default:
		    	   printf("Invalid entry\n");
		}
		printf("Do u want to continue: y/n");
		scanf("%c",&ch);
	}
}
