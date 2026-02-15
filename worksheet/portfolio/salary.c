
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Ethan West
 * ID:201990893
 */

 int main( void ) {

    // define and initialise variables for the problem data 
      double total_salary = 36250;
      double nat_in = 8;
      double tax_rate =15;
      double nat_in_amount;
      double salary_post_nat;
      double taxable_amount;
      double tax_contribution;
      double tax_applied;
      double salary_post_tax;

    // calculate the deductions and final take-home salary
      nat_in_amount = nat_in*0.01*total_salary;       //0.01 to represent the percentages
      salary_post_nat = total_salary - nat_in_amount;
      taxable_amount = salary_post_nat - 12500;
      tax_contribution = taxable_amount*tax_rate*0.01;
      tax_applied = taxable_amount - tax_contribution;
      salary_post_tax = tax_applied + 12500;

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);
      printf("Salary £%.2f\n",total_salary);
      printf("NI contribution £%.2f\n",nat_in_amount);
      printf("Tax contribution £%.2f\n",tax_contribution);
      printf("Take home salary £%.2f\n",salary_post_tax);

    return 0;
 }