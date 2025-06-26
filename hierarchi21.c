//gcc 5.4.0 
#include  <stdio.h> 
#include  <string.h> 
int main(void) 
{ 
   typedef struct 
 { 
   char first_name[20]; 
   char last_name[20]; 
 } 
 customer_name;  
   typedef struct
    { 
      int account_number; 
      char account_type[20]; 
      customer_name account_holder_name; 
      double balance; 
    } 
    bank_customer;  
       bank_customer    bank_customers[5]; 
          bank_customers[0].account_number = 1001 ; 
          strcpy(bank_customers[0].account_type, "Checking"); 
          strcpy(bank_customers[0].account_holder_name.first_name,  "John"); 
          strcpy(bank_customers[0].account_holder_name.last_name, "Paul"); 
          bank_customers[0].balance = 2100.50; 
          bank_customers[1].account_number = 1002; 
         strcpy(bank_customers[1].account_type, "Checking"); 
         strcpy(bank_customers[1].account_holder_name.first_name, "Mary"); 
         strcpy(bank_customers[1].account_holder_name.last_name, "Paul"); 
         bank_customers[1].balance = 30100.50; 
          for(int i=0;i<5;++i)
        { 
            printf("Account Number: %d\nAccount Type: %s\nACcount Holder fist Name: %s\naccount Holder Last Name: %s\nbalance: %.2lf\n------------\n",
              bank_customers[i].account_number,bank_customers[i].account_type, 
              bank_customers[i].account_holder_name.first_name, 
              bank_customers[i].account_holder_name.last_name, 
              bank_customers[i].balance); 
        } 
       return 0;
}