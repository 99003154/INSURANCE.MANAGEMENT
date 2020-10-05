#include <insurance_management.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int insurance_operation = 0;

/* Operands on which calculation is performed */
char insurance_operand10;
char insurance_operand1[];
char insurance_operand2[];
char insurance_operand9;
int insurance_operand8;
char insurance_operand4[];
char insurance_operand3;
char insurance_operand5[];
char insurance_operand6[];
int insurance_operand7;
char insurance_user_name;
char insurance_pwd;
char insurance_id[];

/* Valid operations */
enum operations{ CHOICE=1, USERNAME, PASSWORD, GENDER, AGE, PHONENUMBER, VEHICLETYPE, LINCENSENUMBER, ENGINENUMBER, PAY_PA, LOGIN, CLAIM, EXIT };

/* Display the menu of operations supported */
void insurance_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****insurance_management****\n");
    while(1)
    {
        insurance_menu();
    }
}

void insurance_menu(void)
{
    printf("\nSteps\n");
    printf("\n1. choice\n2. username\n3. password\n4. gender\n5. age\n6. phonenumber\n7. vehicletype\n8. lincensenumber\n9. enginenumber\n10. pay_pa\n11. login\n12. claim\n31.  Exit");
  
   
     __fpurge(stdin);
    scanf("%d", &insurance_operation);

    if(EXIT == insurance_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(insurance_operation))
    {
        printf("\n\tEnter the information with space between them\n");
        __fpurge(stdin);
        scanf("%c %s %s %c %d %s %c %s %s %d %c %c %s", &insurance_operand10, &insurance_operand1, &insurance_operand2, &insurance_operand9,&insurance_operand8, &insurance_operand4, &insurance_operand3, &insurance_operand5, &insurance_operand6, &insurance_operand7, &insurance_user_name, &insurance_pwd, &insurance_id);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(insurance_operation)
    {
        case CHOICE:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            insurance_operand10, 
            choice(insurance_operand10));
            
            __fpurge(stdin);
            getchar();
            break;
        case USERNAME:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            insurance_operand1[],
            username(insurance_operand1[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case PASSWORD:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            insurance_operand2[], 
            password(insurance_operand2[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case GENDER:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            insurance_operand9, 
            gender(insurance_operand9));
            
            __fpurge(stdin);
            getchar();
            break;
        case AGE:
            printf("\n\t Greater %d and %d = %d\nEnter to continue", 
            insurance_operand8, 
            age(insurance_operand8));
            
            __fpurge(stdin);
            getchar();
            break;
        case PHONENUMBER:
            printf("\n\t Primenum %d =%d\nEnter to continue", 
            insurance_operand4[], 
            phonenumber(insurance_operand4[]));
            
            __fpurge(stdin);
            getchar();
            break;
        case VEHICLETYPE:
            printf("\n\t Primenum1 %d =%d\nEnter to continue", 
            insurance_operand3, 
            vehicletype(insurance_operand3));
            
            __fpurge(stdin);
            getchar();
            break;
          case LICENSENUMBER:
            printf("\n\t evenodd %d =%d\nEnter to continue", 
            insurance_operand5[], 
            licensenumber(insurance_operand5[]));
            
            __fpurge(stdin);
            getchar();
            break;
          case ENGINENUMBER:
            printf("\n\t evenodd1 %d =%d\nEnter to continue", 
            insurance_operand6[10], 
            enginenumber(insurance_operand6[10]));
            
            __fpurge(stdin);
            getchar();
            break;
          case PAY_PA:
            printf("\n\t posneg %d =%d\nEnter to continue", 
            insurance_operand7, 
            pay_pa(insurance_operand7));
            
            __fpurge(stdin);
            getchar();
            break;
        case LOGIN:
            printf("\n\t posneg1 %d =%d\nEnter to continue", 
            insurance_username, 
            insurance_pwd,
            login(insurance_username, insurance_pwd));
            
            __fpurge(stdin);
            getchar();
            break;
        case CLAIM:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            insurance_id[], 
            claim(insurance_id[]));
            
            __fpurge(stdin);
            getchar();
            break;
          case 31:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((CHOICE <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
