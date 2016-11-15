/* Created By: 💀Shane Casada💀
 * 11/03/16
 * Use file input to read in a file with a list of numbers separated by a space that is four numbers in a line.  
 * Store these values in a two dimensional array.  Average all numbers in the matrix.  Add up each line and each columnn of the array.  
 * Output the array and totals into an output file named output.txt.  Use the stream manipulators to make the output nice.
   Example output
   1    2   3    4 10
   5    6   7    8 26
   9   10  11   12 42
   15  18  21   24
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
   ofstream outFS; // output file steam
   ifstream inFS; // Input file stream
   int myArray[5][5], i, j, total_row_1 = 0, total_row_2 = 0,  total_row_3 = 0, total_column_1 = 0, total_column_2 = 0, total_column_3 = 0, total_column_4 = 0,
   row_1 = 0, row_2 = 0, row_3 = 0, column_1 = 0, column_2 = 0, column_3, column_4 = 0;
   
   
   // Try to open file
   cout << "Opening file myfile.txt." << endl;
   cout << "Opening file output.txt." << endl;
   cout << endl;
   
   inFS.open("myfile.txt");
   if (!inFS.is_open()) 
   {
      cout << "Could not open file myfile.txt." << endl;
      return 1; // 1 indicates error
   }
   
   outFS.open("output.txt");
   if(!outFS.is_open())
   {
      cout << "Could not open file output.txt." << endl;
      return 1; // 1 indicates error
   }
   
   while (!inFS.eof()) // loops till end of txt file
   {
      cout << "Doing Great Stuff to output.txt file"<< endl;
      for(i = 0; i < 5; ++i)
      {
         for(j = 0; j < 4; ++j)
         {
            inFS >> myArray[i][j];
         }
      }
         for(i = 0; i < 4; ++i)
         {
            row_1 = myArray[0][i];
            outFS << " " << row_1;
            total_row_1 += row_1;
         }
         outFS << " = " << total_row_1;
         outFS << endl;
         
         for(i = 0; i < 4; ++i)
         {
            row_2 = myArray[1][i];
            outFS << " " << row_2;
            total_row_2 += row_2;
         }
         outFS << " = " << total_row_2;
         outFS << endl;
         
         for(i = 0; i < 4; ++i)
         {
            row_3 = myArray[2][i];
            outFS << " " << row_3;
            total_row_3 += row_3;
         }
         outFS << " = " << total_row_3;
         outFS << endl;
         
      for(i = 0; i < 5; ++i) // start of column addition
      {
         for(j = 0; j < 4; ++j)
         {
            inFS >> myArray[i][j];
         }
      }
      for(i = 0; i < 3; ++i)
      {
         column_1 = myArray[i][0];
         total_column_1 += column_1;
      }
      outFS << total_column_1;
      
      for(i = 0; i < 3; ++i)
      {
         column_2 = myArray[i][1];
         total_column_2 += column_2;
      }
      outFS << " " << total_column_2;
      
      for(i = 0; i < 3; ++i)
      {
         column_3 = myArray[i][2];
         total_column_3 += column_3;
      }
      outFS << " " << total_column_3;
        for(i = 0; i < 3; ++i)
      {
         column_4 = myArray[i][3];
         total_column_4 += column_4;
      }
      outFS << " " << total_column_4;
   }//end of first while loop

   
   cout << endl;
   cout << "Closing file myfile.txt." << endl;
   cout << "Closing file output.txt." << endl;
   inFS.close();
   outFS.close();
   
   return 0;
}
