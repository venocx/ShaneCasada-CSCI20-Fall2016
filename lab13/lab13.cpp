/* Created By: 💀Shane Casada💀
 * 10/6/16
 * 3.4 Lab - Looping 
 * Create a program that will print every minute between two values.
    First, start by programming every minute between 1:00 pm and 2:59 pm using one or more loops.
    Second, accept user input for a start hour and ending hour.  Print every 15 minute interval between these two times.
 */


#include <iostream>
#include <string>


using namespace std;

int main ()
{
    int hourStart = 1;
    double minStart = 00;
    int hourEnd = 2;
    double minEnd = 59;

    
        
            
 /* made a if/else with nested while loops to get the print time to work.*/
    
         if(minStart > 0)
         {
             while(minStart <= 60){
                                 cout << hourStart << ":" << minStart << " PM" << " ";
                                 ++minStart;
                                
                                 if(minStart == 60 && hourStart == 1){
                                    cout << hourStart << ":" << minStart << " PM" << " ";
                                     minStart = 0;
                                     ++hourStart;
                                    
                                     if(minStart == 00)
                                          {
                                             cout << hourStart << ":" << "00" << " PM ";
                                             }
                                     while(minStart < 10)
                                     {
                                         cout << hourStart << ":" << "0" << minStart << " PM" << " ";
                                         ++minStart;
                                   }
                             }
                         }// end of first while loop for (minStart <= 60).
      }    
         else{
        
                 while(minStart < 10)
                     {
                         cout << hourStart << ":" << "0" << minStart << " PM" << " ";
                         ++minStart;
                        
                       if(minStart == 10 && minStart <= 59)
                       {
                            
                             while(minStart <= 60)
                             {
                                 cout << hourStart << ":" << minStart << " PM" << " ";
                                 ++minStart;
                                
                                 if(minStart == 60 && hourStart == 1)
                                 {
                                     minStart = 0;
                                     ++hourStart;
                                    
                                     if(minStart == 00)
                                        {
                                            cout << hourStart << ":" << "00" << " PM ";
                                        }
                                     while(minStart < 10)
                                        {
                                            ++minStart;
                                        }
                                
                                } //end of second if loop
                            }//end of second while loop
                         }//end of first if loop
                   }//end of first while loop
              }//end of else 
                
      cout << endl;
           
cout << "Please ender a any hour between 1:00 PM and 2:59 PM for your start time" << endl;
        cin >> hourStart;
        cout << endl;
        
        if(hourStart < 1 || hourStart > 2) // adds a fix if you enter a start time that is to low.
                {
                    cout << "You need to restart" << endl;
                    cout << "The number you picked is to low or to low" << endl;
                    abort(); 
                }
                
        else if(hourStart > 1 || hourStart < 2) // add a fix if 
            {
                cout << "Please enter any min between 1:00 PM and 2:59 PM for your start time" << endl;
                cin >> minStart;
                cout << endl;
            }
        else if(minStart < 00 || hourStart >= 60) // add a fix that fixed if the minStart time is to low.
                {
                    cout << "You need to restart" << endl;
                    cout << "The number you picked is to low or to low" << endl;
                    abort(); 
                }
        
        cout << "Your time you enterd is : " << 
        hourStart << ":"; 
        
        if(minStart == 00) // made a fix if min on start time is 00 it would print out 00 and not one 0.
            {
                cout << "00" << " PM" << endl;
                cout << endl;
            }
        else
            {
                cout << minStart << " PM" << endl;
                cout << endl;
            }
        

        cout << "Please enter any hour before 1:00 PM and 2:59 for your end time" << endl;
        cin >> hourEnd;
        cout << endl;
        
        cout << "Please enter any min between 1:00 PM and 2:59 PM for your end time" << endl;
        cin >> minEnd;
        cout << endl;
        
        
        cout << "Your time you enterd is : ";
        if(minEnd == 00) // made a fix if min on end time is 00 it would print out 00 and not one 0.
            {
                cout << hourEnd << ":" << "00" << " PM" << endl;
                cout << endl;
            }
        else
            {
                cout << hourEnd << ":" << minEnd << " PM" << endl;
                cout << endl;
            }

        
cout << "Out putting a 15 min incrament between ";
    if(minStart == 00 && minEnd > 0) //adds a if/else-if statment so that if the min is 00 it will print out the double 00 not just one 0.
    {
         cout << hourStart << ":" << "00" << " PM" << " and " << hourEnd << ":" << minEnd << " PM " << endl;
    }
    else if(minStart > 00 && minEnd == 00)
    {
        cout << hourStart << ":" << minStart << " PM" << " and " << hourEnd << ":" << "00" << " PM " << endl; 
    }
    else if(minStart == 00 && minEnd == 00)
    {
        cout << hourStart << ":" << "00" << " PM" << " and " << hourEnd << ":" << "00" << " PM " << endl; 
    }
    else
    {
        cout << hourStart << ":" << minStart << " PM" << " and " << hourEnd << ":" << minEnd << " PM " << endl;        
    }

    
while(hourStart <= hourEnd && minStart <= minEnd)// a while loop that compairs the Start time0 with the End time. 
 {
    if(minStart == 00 /*&& minEnd > 00*/) //adds a if statment so that if the min is 00 it will print out the double 00 not just one 0.
    {
        cout << hourStart << ":" << "00" << " PM ";
        minStart = minStart + 15;
        
    }
   else
    {
        cout << hourStart << ":" << minStart << " PM" << " ";
        minStart = minStart + 15;
    }// end of else
   
            while(minStart == 60 && hourStart == 1) // restarts the first whoile loop
        {
            minStart = 00;
            ++hourStart;
            cout << hourStart << ":" << "00" << " PM ";
            
        }// end of minStart == 60 && hourStart == 1 while loop'
 }// end of While loop for adding 15min incraments
}// end of main 