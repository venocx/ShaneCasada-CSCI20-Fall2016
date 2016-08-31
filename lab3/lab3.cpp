//Created By: Shane Casada
//Created On: 8/30/2016

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number=0; //number is Integer
    cout<<"Please enter a year: ";
    cout.flush();
    cin >> number;
    
    int number3=0; //number is Integer
    cout<<"Please enter another year: ";
    cout.flush();
    cin >> number3;
    
    float number2=0; //number2 is a Floating point
    cout<<"Please enter a number with a decimal point:";
    cout.flush();
    cin>>number2;
    
    string noun; 
    cout<<"Please enter a name: ";
    cout.flush();
    getline(cin.ignore(), noun);
 
    
    
    string noun2; 
    cout<<"Please enter another name: ";;
    cout.flush();
    getline(cin, noun2);
    
    string job;
    cout<<"Please enter a job title: ";
    cout.flush();
    getline(cin, job);
   
    
    string job2;
    cout<<"Please enter another job title: ";
    cout.flush();
    getline(cin, job2);
    
    string prize;
    cout<<"Please enter yet another job title: ";
    cout.flush();
    getline(cin, prize);
    
    cout<<"Albert Einstein, the son of "<<noun<< " and "<<noun2<<" was boarn in "<<number3<<"."
    " In "<<number<<","" he held a job as an assistant "<<job<<" at the Swiss patent office and attende the University of Zurich."
    " In "<<number2<<"," " he won the Nobel prize for "<<prize<< "," " and became the director of "<<job2<<"s."<<endl;
}