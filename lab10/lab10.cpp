/* Created By: 💀Shane Casada💀
 * 10/4/16
 * 3.1 Lab - Relational and Conditional 
 * Run the equations from the worksheet Operators Worksheet.pdf
 */  


#include <iostream>
#include <string>


using namespace std;

// created functions for each Boolean and Logical Operators number 1-9
int num1(int suzyAge = 25, int johnAge = 21)
{
   if (suzyAge < johnAge)
        {
            cout << "Suzy is younger than john." << endl;
        }
        
    else
        {
            cout << "Suzy is older than john." << endl;
        }
    return 0;
}

int num2(int x = 7, int y = 7)
{
    if (x >= y)
    {
        cout << "The number x is lessthan or equal to y" << endl;
    }
    else
    {
        cout << "The number x is not lessthan or equal to y" << endl;
    }
}

int num3(int a = 1, int b = 9)
{
    if (a == b)
    {
        cout << "The number a is equal to b" << endl;
    }
    else
    {
        cout << "The numbers are not equal" << endl;
    }
}

int num4(int limit = 20, int count = 10)
{
    if ((((limit) * (count))/2) > 0)
    {
        cout << "limit multiplyed by count devided by 2 is gratter than 0" << endl;
    }
    else 
    {
        cout << "limit is not gratter than 0" << endl;
    }
}

int num5(int t = -4, int z = 0)
{
    if ((t > 5) || (z < 2))
    {
        cout << "t is gratter than 5 or z is less than 2" << endl;
    }
    else
    {
        cout << "t is not gratter than 5 or z is not less than 2" << endl;
    }
    
}

int num6(int variable = -5)
{
    if (!(variable > 0))
    {
        cout << "variable is not equal to 0" << endl;
    }
    else
    {
        cout << "variable is equal to 0" << endl;
    }
}

int num7(int a = 16)
{
    if (((a/4) < 8) && (a>= 4))
    {
        cout << "a is less than 8 and a is gratter than or equal to 4" << endl;
    }
    else 
    {
        cout << "a is not less than 8 and a is not gratter than or equal to 4" << endl;
    }
}

int num8(int x = -2, int y = 5, int z = 1)
{
    if (((x*y) < 10) || ((y*z) < 10))
    {
        cout << "x time y is less than 10 or y times z is less than 10" << endl;
    }
    else 
    {
        cout << "x times y is not less than 10 or y times z is not less than 10" << endl;
    }
}

int num9(int j = -2, int k = 5, int l = 4, int y = 1, int x = 1)
    {
        if((!((j*l) < 10) || ((y/x) * 4) < (y *2)))
        {
            cout << "j times l is not less than 10 or y devided by x times 4 is not less than y times 2" << endl;
        }
        else
        {
            cout << "j times l is less than 10 or y devided by x times 4 is less than y times 2" << endl;
        }
    }


int main ()// called each function in main and put in spaces so it looks better.
{
    cout << endl;
    num1();
    cout << endl;
    num2();
    cout << endl;
    num3();
    cout << endl;
    num4();
    cout << endl;
    num5();
    cout << endl;
    num6();
    cout << endl;
    num8();
    cout << endl;
    num9();
    cout << endl;
    
    
    return 0;
}