#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main() {

  int input;
  cout << "Enter a number between 0-100" << endl;
  cin >> input;
  cout << "You entered: " << input << endl;  

  //Need to check user's input

  
  //generate random number
  //help from  

  int rand_num = 0;
   srand(unsigned(time(NULL)));
   rand_num = rand()%101;

   cout << "RandomNumber:" << rand_num << endl;

   //Compare the number to random number
   while (input != rand_num) {
     if (input < rand_num) {
       cout << "Guess Higher: ";
       cin >> input;
     }
     else if (input > rand_num) {
       cout << "Guess Lower: ";
       cin >> input;
     }
   }
   return 0;
}





  
