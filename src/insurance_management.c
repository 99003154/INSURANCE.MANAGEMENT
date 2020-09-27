#include "insurance_management.h"


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

char enginenumber(int operand6[10])
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

/*char pa_payment(int amnt)
{
float amount;
amount=amount;
if(amnt==amount)
    return 1;
else
    return 0;
}*/
