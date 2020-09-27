#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <insurance_management.h>
#define PROJECT_NAME    "Insurance Management System"

/* Prototypes for all the test functions */
void test_validusername(void);
void test_invalidusername(void);
void test_validpassword(void);
void test_invalidpassword(void);
void test_validage(void);
void test_invalidage(void);
void test_validphonenumber(void);
void test_invalidphonenumber(void);
void test_validlicensenumber(void);
void test_invalidlicensenumber(void);
void test_validenginenumber(void);
void test_invalidenginenumber(void);
void test_validpay_pa(void);
void test_invalidpay_pa(void);
/*void test_validpa_payment(void);
void test_invalidpa_payment(void);*/


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "validusername", test_validusername);
  CU_add_test(suite, "invalidusername", test_invalidusername);
  CU_add_test(suite, "validpassword", test_validpassword);
  CU_add_test(suite, "invalidpassword", test_invalidpassword);
  CU_add_test(suite, "validage", test_age);
  CU_add_test(suite, "invalidage", test_invalidage);
  CU_add_test(suite, "validphonenumber", test_validphonenumber);
  CU_add_test(suite, "invalidphonenumber", test_invalidphonenumber);
  CU_add_test(suite, "validlicensenumber", test_validlicensenumber);
  CU_add_test(suite, "invalidlicensenumber", test_invalidlicensenumber);
  CU_add_test(suite, "validenginenumber", test_validenginenumber);
  CU_add_test(suite, "invalidenginenumber", test_invalidenginenumber);
  CU_add_test(suite, "validpay_pa", test_validpay_pa);
  CU_add_test(suite, "invalidpay_pa", test_invalidpay_pa);
  /*CU_add_test(suite, "validpa_payment", test_validpa_payment);
  CU_add_test(suite, "invalidpa_payment", test_invalidpa_payment);*/
 
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 



void test_validusername(void) {
  CU_ASSERT(1 == username("madhushree c"));
  
  
  CU_ASSERT(1 == username("manyatha a"));
}
void test_invalidusername(void) {
  CU_ASSERT(0 == username("madhushree2698"));
  
  
  CU_ASSERT(0 == username("manyatha8989"));
}

void test_validpassword(void) {
  CU_ASSERT(1 == password("madhu@123"));
  
 
  CU_ASSERT(1 == password("manyatha@123"));
}

void test_invalidpassword(void) {
  CU_ASSERT(0 == password("madhushree"));
  
  CU_ASSERT(0 == password("many16"));
}

void test_validage(void) {
  CU_ASSERT(1 == age(20));
  
  
  CU_ASSERT(1 == age(99));
}

void test_invalidage(void) {
  CU_ASSERT(0 == age(16));
 
  CU_ASSERT(0 == age(110));
}

void test_validphonenumber(void) {
  CU_ASSERT(1 == phonenumber("1234567890"));
  
  
  CU_ASSERT(1 == phonenumber("4536271809"));
}

void test_invalidphonenumber(void) {
  CU_ASSERT(0 == phonenumber("4567890"));
  
  
  CU_ASSERT(0 == phonenumber("123456789011"));
}

void test_validlicensenumber(void) {
  CU_ASSERT(1 == licensenumber("karnatakamysor1"));
  
  CU_ASSERT(1 == licensenumber("karnataka@mysor"));
  
  CU_ASSERT(1 == licensenumber("karnatakamysore"));
}

void test_invalidlicensenumber(void) {
  CU_ASSERT(0 == licensenumber("karnatakamysoregok"));
  
  CU_ASSERT(0 == licensenumber("karnataka myso"));
 
}

void test_validenginenumber(void) {
  CU_ASSERT(1 == enginenumber("9988776655"));
  
  CU_ASSERT(1 == enginenumber("2211332211"));
  
 }
 
 void test_invalidenginenumber(void) {
  CU_ASSERT(0 == enginenumber("887788778877"));
  
  CU_ASSERT(0 == enginenumber("990099"));
  
 }
 
 void test_validpay_pa(void) {
  CU_ASSERT(1 == pay_pa(1));
 
  
 }
 
 void test_invalidpay_pa(void) {
  CU_ASSERT(0 == pay_pa(0));
   
 }
 
 /* void test_validpa_payment(void) {
  CU_ASSERT(1 == pa_payment(1));
 
  
 }
 
  void test_invalidpa_payment(void) {
  CU_ASSERT(0 == pa_payment(0));*/
 
  
 }
 
 





