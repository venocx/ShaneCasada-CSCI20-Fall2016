//Shane Casada
//9/6/16
//Monsetr Maker

/*A program that creats differnt monster from monster parts using the struct or "a group of data elements grouped together" 
aka. monsterStruct and prints out the parts of each monster to make five different monsters*/

#include <iostream>
#include <string>

using namespace std;

struct monsterStruct {
  string head;
  string eyes;
  string ears;
  string nose;
  string mouth;
};

int main() {
 
   
 
  //Struct
  monsterStruct monsterOne;
  monsterStruct monsterTwo;
  monsterStruct monsterThree;
  monsterStruct monsterFour;
  
  
      //Monster part picker
      cout << "Lets create some monsters!" << endl;
  
      cout << "Pick 5 heads for each monster" << endl;
      cout << "[Vegitas] ☠ [Franken] ☠ [Happy]" << endl;
      cout << "Please enter a head types: ";
      cin >> monsterOne.head;
      cin >> monsterTwo.head;
      cin >> monsterThree.head;
      cin >> monsterFour.head;

  
      cout << "Now pick 4 different types of mouths for each monster" << endl;
      cout << "[Vegitas] ☠ [Wackus] ☠ [Spritem]" << endl;
      cout << "Please enter a eye types: ";
      cin >> monsterOne.eyes;
      cin >> monsterTwo.eyes;
      cin >> monsterThree.eyes;
      cin >> monsterFour.eyes;

    
      cout << "Now pick 4 are diff types of ears for each monster" << endl;
      cout << "[Vegitas] ☠ [Wackus] ☠ [Spritem]" << endl;
      cout << "Please enter a ears types: ";
      cin >> monsterOne.ears;
      cin >> monsterTwo.ears;
      cin >> monsterThree.ears;
      cin >> monsterFour.ears;
      
      cout << "Now pick 4 are diff types of nose for each monster" << endl;
      cout << "[Vegitas] ☠ [Wackus] ☠ [Spritem]" << endl;
      cout << "Please enter a nose types: ";
      cin >> monsterOne.nose;
      cin >> monsterTwo.nose;
      cin >> monsterThree.nose;
      cin >> monsterFour.nose;
      
      cout << "Now pick 4 are diff types of mouth for each monster" << endl;
      cout << "[Vegitas] ☠ [Wackus] ☠ [Spritem]" << endl;
      cout << "Please enter a mouth types: ";
      cin >> monsterOne.mouth;
      cin >> monsterTwo.mouth;
      cin >> monsterThree.mouth;
      cin >> monsterFour.mouth;
     



  //Output
  cout << "Monster One is: " << monsterOne.head << " " << monsterOne.eyes << " " <<
  monsterOne.nose << " " << monsterOne.ears << " " << monsterOne.mouth << endl;
  cout << "Monster Two is: " << monsterTwo.head << " " << monsterTwo.eyes << " " <<
  monsterTwo.nose << " " << monsterTwo.ears << " " << monsterTwo.mouth << endl;
  cout << "Monster Three is: " << monsterThree.head << " " << monsterThree.eyes << " " <<
  monsterThree.nose << " " << monsterThree.ears << " " << monsterThree.mouth << endl;
  cout << "Monster Four is: " << monsterFour.head << " " << monsterFour.eyes << " " <<
  monsterFour.nose << " " << monsterFour.ears << " " << monsterFour.mouth << endl;


  

}