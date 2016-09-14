//Shane Casada
//9/13/16
//Wage Calculater

/*💀 A program that calculate a person’s weekly wages based on hourly salary and hours. Then it determine how much they would get paid if they paid 17% in taxes. 
and creates a wage slip with name, hours, rate, gross pay, and net pay.*/

/*pseudocode
    
        Add #include <isostream> and using namespace std;
        then int main(){
            in the main we are going to add least 3 variables
            at least one equation
            input and output
            Header comments //already done
            Embedded comments based on your pseudocode // will do*/
        
        /*I'm going to use some functions just because I like them.
           
           .5. I had to add global variables so every function could work in tandam.
            1. I will first ask name
            2. Then amount of hours worked
            3. Have them put hourly_wage
            4. Calculate salary by Multiplying the number of hours they work per week 
            by your hourly wage. Than multiply that number by 52 (the number of weeks in a year).
            5. Give total with .17 or 17% tax */
     
#include <iostream>
#include <string>

using namespace std;

//global variables so every function can use it.
int hours;
int hourly_wage;
int salary;
int after_tax;
string first;
string last;


void annual_salary(){
    

    cout << "Enter how many hours worked: ";
    cin >> hours;
    
    cout << "Enter hourly wage: ";
    cin >> hourly_wage;
    
    salary = hours *  hourly_wage * 52;
    cout << "Your total salary before taxes are: " << salary << endl;
    
    after_tax =  salary * .17;
    cout << "Your salry after taxes is: " << after_tax << endl;
     
    return;
 }
 
void name(){
     

    
    // Input Statements 
    cout << "Enter your first name: "; 
    cin >> first;
    cout << "Ender your last name: ";
    cin >> last;
    
    return;
 }
 
void wage_slip(){
     

     
    // Output Statements Block
    cout << "-------------  wage slip -----------" << endl;
    cout << "         Employee: " << first << " " << last << endl;
    cout << "Time worked: " << hours << " hours  ";
    cout << " Hourly wage: " << "$" << hourly_wage << endl;
    cout << "Gross pay: " << salary;
    cout << "       Net Pay : " << after_tax << endl;

  return;
 }
 
int main() {

    name();
    annual_salary();
    wage_slip();
   
    return 0;
}



 
