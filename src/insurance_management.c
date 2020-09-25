#include <insurance_management.h>

char username(char operand1)
{
scanf("%s",operand1);
for(i=0;i<strlen(operand1);i++)
{
if((operand1[i]>='A'&&operand1[i]<='Z')||(operand1[i]>='a'&&operand1[i]<='z')|operand1[i]==' ')
return 1;
else
return 0;
}
}

char password(char operand1)
{
int acount, icount, spcount;
scanf("%s",operand1);
if(strlen(operand1)<=8)
    return 0;
        
for(i=0;i<strlen(operand1);i++)
{
    if((operand1[i]>='A' &&operand1[i]<='Z')||(operand1[i]>='a'&&operand1[i]<='z'))
        acount++;
    else if(operand1[i]>='0'&& operand1[i]<='9')
        icount++;
    else if((operand1[i]>=33 &&operand1[i]<=47)||(operand1[i]>=60 &&operand1[i]<=64))
         spcount++;
}
if(acount<1||icount<1 ||spcount<1)
    return 0;
else
    return 1;
}

int age(int operand1)
{
scanf("%d",&operand1);
if(operand1>=18&&operand1<=100)
    return 1;
else if
    return 0;
}

int phonenumber(int operand1)
{
scanf("%s",&operand1);
if(strlen(operand1)==10)
{
for(i=0;i<strlen(operand1);i++)
{
if(operand1[i]>='0'&&operand1[i]<='9')
    return 1;
else 
    return 0;
}
}
else 
    return 0;
}

char licensenumber(char operand1)
{
scanf("%s",operand1);
if(strlen(operand1)==15)
{
if(operand1[0]>='A'&&operand1[0]<='Z'||operand1[0]>='a'&&operand1[0]<='z')
{
if(operand1[1]>='A'&&operand1[1]<='Z'||operand1[1]>='a'&&operand1[1]<='z')
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

int enginenumber(int operand1)
{
scanf("%s",operand1);
if(strlen(operand1)!=10)
    return 0;
else
    return 1;
}

int principleamount(char operand1)
{
scanf("%s",operand1);
if(operand1[0]=='0')
    return 0;

else if(operand1[0]=='1')
    return 1;
}

int correctpayment(float operand1)
{
  scanf("%f",&operand1);
  amount=amount;
  if(amnt==amount)
    return 1;
  else
   return 0;
}

char login(char username,char password)
{

}
