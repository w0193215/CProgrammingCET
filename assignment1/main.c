#include <stdio.h>
#include <float.h>



int main() {

    //Create Comments As if you were talking to another Programmer for every Assignment.

    // fixed variables.
    float pays_per_year = 26.0f;
    float employment_amt = 1195.00f;
    float cpp_exception_amt = 3500.00f;
    float fed_personal_amt = 11809.00f;
    float prov_personal_amt = 11481.00f;
    float federal_tax_deduction = 0.15f;
    float provincial_tax_deduction = 0.0879f;
    float cpp_deduction = 0.0495f;
    float e_i_deduction = 0.0166f;


    // input variables.
    float hours_worked = 0.0f;
    float hourly_wage = 0.0f;

    printf("Enter the number of hours worked: ");
    scanf("%f", &hours_worked );

    printf("Enter the wage per hour: ");
    scanf("%f", &hourly_wage );

    //calculations
    float gross_pay = hours_worked * hourly_wage;
    float vacation = (gross_pay * 0.04f);
    float total_income = gross_pay + vacation;

    float annual_income = total_income * pays_per_year;
    float annual_cpp = (annual_income - cpp_exception_amt)*cpp_deduction;
    float annual_ei = annual_income * e_i_deduction;

    float federal_tax = (annual_income - fed_personal_amt - annual_cpp - annual_ei - employment_amt)* federal_tax_deduction / pays_per_year;
    float provincial_tax = (annual_income - annual_cpp - annual_ei - prov_personal_amt)* provincial_tax_deduction / pays_per_year;
    float total_tax = federal_tax + provincial_tax;

    float cpp = annual_cpp / pays_per_year ;
    float e_i = annual_ei / pays_per_year ;
    float net_pay = total_income - total_tax - cpp - e_i ;

    // output variables.
    printf(" Gross Pay: $ %.2f \n Vacation: $ %.2f \n Total Income: $ %.2f \n ", gross_pay, vacation, total_income);
    printf("\n");
    printf(" Federal Tax: $ %.2f \n Provincial Tax: $ %.2f \n Total Tax: $ %.2f \n ", federal_tax, provincial_tax, total_tax);
    printf("\n");
    printf(" CPP: $ %.2f \n EI: $ %.2f \n", cpp, e_i);
    printf("\n");
    printf(" Net Pay: $ %.2f ",net_pay);


    return 0;
}