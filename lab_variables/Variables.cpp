//💀Shane Casada💀
//9/13/16
//Wage Calculater

/*💀 A program that calculate a person’s weekly wages based on hourly salary and hours. Then it determines how much they would get paid if they paid 17% in taxes. And creates a wage slip with name, hours, rate, gross pay, and net pay.

  Pseudocode{ 
    
        Add #include <isostream> and using namespace std;
        then int main 
            in the main we are going to add least 3 variables
            at least one equation
            input and output
            Header comments "already done"
            Embedded comments based on your pseudocode  "will do"
        
        I'm going to use some functions just because I like them.
           
            1. I had to add global variables so every function could work in tandam.
            2. I will first ask name
            3. Then amount of hours worked
            4. Have them put hourly_wage
            5. Calculate salary by Multiplying the number of hours they work per week by your hourly wage. Than multiply that number by 52 (the number of weeks in a year).
            6. Give total with .17 or 17% tax 
            7. Pring it all out on a wage_slip } */ 
            
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

// name function #1
void name(){
     

    
    // Input Statements 
    cout << "Enter your first name: "; 
    cin >> first;
    cout << "Ender your last name: ";
    cin >> last;
    
    return;
 }
  
// salary calc #2-6    
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
 
// wage slip #7
void wage_slip(){ 
     

     
    // Output Statements Block
    cout << "-------------  Wage Slip -----------" << endl;
    cout << "         Employee: " << first << " " << last << endl;
    cout << "Time worked: " << hours << " hours  ";
    cout << " Hourly wage: " << "$" << hourly_wage << endl;
    cout << "Gross pay: " << salary;
    cout << "        Net Pay : " << after_tax << endl; // The Man got you again. Myabe nextime we will just not pay our tax 💀. 

  return;
 } 
 
// I love how clean the main looks. It makes my 💀 all nice and hard.
int main() { 
    name();
    annual_salary();
    wage_slip();
   
    return 0;
}



 
