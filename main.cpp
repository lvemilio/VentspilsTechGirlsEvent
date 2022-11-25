/*
* TASK:
* Develop a simple credit calculator which takes following values as user input:
*   1) credit amount (type: double)
*   2) credit period (in months)
*
* The calculator is expected to take the credit amount and apply the specified interest rate every month.
* Every next month, the interest rate is applied to the total credit amount calculated for the previous month.
* The interest rate is static and defined within the BankUtils class.
* The calculator should implement and use BankUtils class for output setup and calculations.
* The definition of class and corresponding methods can be found in bankUtils.hpp file.
*
* Bonus 1: implement logging to a file that tracks the applciation flow.
*          Format and the information of the logs is not strictly defined - can be implemented as seen fit.
*
* Bonus 2: implement support for interest rate configuration by reading the value from a file.
*          Format and the information of the configuration file is not strictly defined - can be implemented as seen fit.
*
* Bonus tasks are not mandatory, but an opportunity to showcase your knowledge and skills.
*
* OUTPUT:
* The application is expected to return the following output:
*   1) Total amount of credit and interest
*   2) Total interest amount
*
* FORMAT:
* Display the total amount of credit and interest in format: [TOTAL AMOUNT/INTEREST X EUROS AND Y CENTS]
*
* EXAMPLE:
* User input:
*   1) Credit amount: 100.00 EUR
*   2) Credit period: 13 months
* Interest rate (static): 10 %
* Calculated result:
*   Total credit and interest amount: 345.23
*   Interest amount: 245.23
* Output in console:
*   'TOTAL AMOUNT 345 EUROS AND 23 CENTS'
*   'TOTAL INTEREST 245 EUROS AND 23 CENTS'
*
* THINGS THAT MATTER:
*   1) Code formatting
*   2) Meaningful comments
*   3) Handling of the edge cases
*
* NOTE: you can use any environemt/setup to implement the solution, but if you use any non-standard libraries, please, provide description of how to build and run the solution.
*/

#include "bankUtils.hpp"

int main() {
    BankUtils bankUtils;


    return 0;
}
