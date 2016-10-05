/* Created By: 💀Shane Casada💀
 * 10/4/16
 * 3.2 Lab - If/Else 
 * Creating a program that will calculate the income tax, and amount owed or to be refunded for a person (or couple).  
 The program will take the following basic tax information: name, filing status (single or married), gross wages, salaries and tips, and the amount of tax withheld. 

 It will then calculate the taxes as follows:
    Add the three income sources (wages, interest and unemployment) together to get the adjusted gross income.
    Subtract the personal exemption of $3,900 and the standard deduction of $6,100. 
    For a joint (married) return, these amounts are subtracted for each person.
    If the resulting number is less than zero, then the owed tax is zero. 
    If the number is above zero, use the tax tables to calculate the tax.Run the equations from the worksheet Operators Worksheet.pdf
 */  


#include <iostream>
#include <string>


using namespace std;

double refund(double grossWages, string married, double taxWithheld)
{
    if (grossWages >= taxWithheld)
        { 
            cout << "You owe more taxs";
        }
        else
        {
            cout << "You are entitled to a refund";
        }
}

double taxes(double grossWages, string married)// created a functions that finds out if you owe more on taxes
{
    if(married == "married")
    {
        cout << endl;
        
        if(grossWages <= 8925)
        {
            grossWages = (grossWages * 0.1);
            return grossWages;
        }
        else if (grossWages >= 8925 || grossWages <= 36250)
        {
            grossWages = (grossWages * 0.15);
            return grossWages;
        }
        else if (grossWages >=36251 || grossWages <= 87850)
        {
            grossWages = (grossWages * 0.2);
            return grossWages;
        }
        else if (grossWages >=87850 || grossWages <= 100000000000)
        {
            grossWages = (grossWages * 0.25);
            return grossWages;
        }
    }
    else 
    {
        cout << endl;
         
        if(grossWages <= 8925 || grossWages <= 72500)
        {
            grossWages = (grossWages * .15);
            return grossWages;
        }
        else if(grossWages >= 72500 || grossWages <= 10000000000)
        {
            grossWages = (grossWages * .28);
            return grossWages;
        }
    }
}

string unemployment(string x) // created a functions that kill the program if unemplyment is a yes
{
    if (x == "yes")
    {
        cout << "You can not uses this program" << endl;
        abort(); 
    }
    else 
    {
        return x;
    }
}

/*created functions for each exemptions: Subtract the personal exemption of $3,900 and the 
standard deduction of $6,100. For a joint (married) return, these amounts are subtracted for each person.
*/
int personalexemption(double grossWages, string married) 
{
    if (grossWages > 0 && married == "married")
    {
        
        return grossWages - 20000;
        
    }
    else
    {
        return grossWages - 10000;
    }
    
}



double adjustedGrossIncome(double tips, double grossWages) //Created a function tat add the  income sources together to get the adjusted gross income.
{
    double grossincome = tips + grossWages;
    
    return grossincome;
}

int main ()
{
    string userName("");
    string filingStatus("");
    string unemployed("");
    double grossWages = 0;
    double tips = 0;
    double taxWithheld = 0;
  
    
    cout << "Please give me your name" << endl;
    getline(cin, userName);
    cout << endl;
    
    cout << "Are you unemployed at this time (yes, no)" << endl;
    cin >> unemployed;
    cout << endl;
    unemployment(unemployed);
    
    
    
    cout << "Please give me filing status (single or married)" << endl;
    cin >> filingStatus;
    cout << endl;
   
 
    
    cout << "Please give me your gross wages: Gross wages are the total amount an employee is paid before any"
    "taxes, deductions, insurance premiums, and other withholdings." << endl;
    cin >> grossWages;
    cout << endl;
    
    cout << "Pleas give me any tips you have made" << endl;
    cin >> tips;
    cout << endl;
    
    
    cout << "Please give me your tax withheld" << endl;
    cin >> taxWithheld;
    cout << endl; 
    
    
    cout << "Your adjusted gross income is: " << adjustedGrossIncome(tips, grossWages) << endl;
    cout << endl;
    
    cout << "Your gross income after personal exemptions of $3,900 and the"
            " standard deduction of $6,100. is: " << personalexemption(adjustedGrossIncome(tips, grossWages), filingStatus) << endl;
    cout << "If (married) these amounts are subtracted for each person." << endl;
    cout << endl;

    // called all the information that was givena and calculated to print our if you oue taxes or not. 
    cout << "After we compared the calculated tax with the amount withheld ";
    refund(taxes(personalexemption(adjustedGrossIncome(tips, grossWages), filingStatus), filingStatus) , filingStatus, taxWithheld); 
    cout << " " << userName << endl;
    cout << endl;
    
    cout << "💀Give us money NOOOOOOOW!!!!!💀" << endl;

    
    return 0;
}