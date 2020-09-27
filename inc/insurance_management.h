/**
* @file insurance_management.h
* Insurance management system with various operation
*
*/
#ifndef __INSURANCE_MANAGEMENT_H__
#define __INSURANCE_MANAGEMENT_H__

#include <stdio.h>
#include <stdlib.h>

/**
* checks whether operand1 contains only character or not
* @param[in] operand1
* @return Result retruns 1 if operand1 only contains character else returns 0
*/
char username(char operand1[]);

/**
*  checks whether operand1 contains only character or not
* @param[in] operand1
* @return Result retruns 1 if operand1 only contains character else returns 0
*/
char password(char operand2[]);

/**
*  checks whether operand1 is between 18 to 100
* @param[in] operand1
* @return Result retruns 1 if operand1 is between 18 to 100 else returns 0
*/
int age(int operand1);


/**
* checks whether operand1 as 10 digits
* @param[in] operand1
* @return Result retruns 1 if operand1 as 10 digits else returns 0
*/
int phonenumber(char operand4[]);


/**
* checks whether operand1 is in size of 15(characters and digits)
* @param[in] operand1
* @return Result retruns 1 if operand1 is in size of 15(characters and digits) else returns 0
*/
char licensenumber(char operand5[]);

/**
* checks whether operand1 is in size of 10(characters and digits)
* @param[in] operand1
* @return Result retruns 1 if operand1 is in size of 10(characters and digits) else returns 0
*/
char enginenumber(int operand6[]);

/**
* tells whether cliend pays the principle amount or quits the portal
* @param[in] operand1
* @return Result if operand1 is 1 client pays the principle amount else quit the portal
*/
char pay_pa(int operand7);

/*//**
* tells whether cliend pays the specified principle amount
* @param[in] operand1
* @return Result returns 1 if correct principle amount is paid else return 0
*/
//char pa_payment(int amnt);



#endif  /* #define __INSURANCE_MANAGEMENT_H__ */
