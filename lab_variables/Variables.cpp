//Shane Casada
//9/13/16
//Wage Calculater

/*💀 A program that calculate a person’s weekly wages based on hourly salary and hours. Then it determine how much they would get paid if they paid 17% in taxes. 
and creates a wage slip with name, hours, rate, gross pay, and net pay.*/

/*pseudocode
    
        Add #include <isostream> and using namespace std;
        then int main(){*/
        /*in the main we are going to add least 3 variables
        at least one equation
        input and output
        Header comments //already done
        Embedded comments based on your pseudocode // will do*/
        /*I'm going to use some functions just because I like them.
        
            1. I will first ask name
            2. Then amount of hours worked
            3. Then amount of minutes worked if there is any
            4. Then amount of weeks worked
            5. Have them put hourly_wage
            6. Calculate salary by Multiplying the number of hours they work per week 
            by your hourly wage. Than multiply that number by 52 (the number of weeks in a year).
            7. Give total with .17 or 17% tax */
        
#include <iostream>
#include <string>
using namespace std;

void annual_salary()
 {
    float hours;
    float hourly_wage;
    int salary;
    
    
    cout << "Enter how many hours worked: ";
    cin >> hours;
    cout << "Enter hourly wage: ";
    cin >> hourly_wage;
    
    salary = hours *  hourly_wage * 52;
    cout << "Your total salary before taxes are: " << salary << endl;
    
    cout << "Your salry after taxes is: " << salary 
     return;
 }
 
 void name(){
     
    string first;
    string last;
   
    
    
    // Input Statements 
    cout << "Enter your first name: "; 
    cin >> first;
    cout << "Ender your last name: ";
    cin >> last;
    
    return;
 }
 
int main() {

    name();
    annual_salary();
   
    return 0;
}



 
//  void  wage_slip(){
     
//     // Output Statements Block
//     cout << "---------- Employee Information -----------" << endl;
//     cout << "Employee: " << first << " " << last << endl;
//     cout << "Time worked: " << hours << "hours"
//          << ", " << minutes << " minutes" << endl;
//     cout << "Hourly wage: " << hourly_wage << endl;
//     cout << "Salary before taxes: " annualSalary = hourlyWage * 40 * 50;
//     cout << "Salary is: " << annualSalary << endl;

//   return;
//  }