#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main() {

  int input;
  
  bool still_playing = true;

  while (still_playing == true) {
    int counter = 1;
    cout << "Enter a number between 0-100" << endl;
    cin >> input;
    
  //check if input is valid
    if (input < 0 || input > 100) {
      cout << "Invalid. Please enter number between 0-100" << endl;
      cin >> input;
    }

  
  //generate random number
  //help from https://youtu.be/wGgUKL7pmAg  

  int rand_num = 0;
   srand(unsigned(time(NULL)));
   rand_num = rand()%101;

   //prints out random number (for testing)
   //cout << "Random Number:" << rand_num << endl;

   //compare the number to random number
   while (input != rand_num) {
     if (input < rand_num) {
       cout << "Guess Higher: ";
       cin >> input;
       counter = counter + 1;
     }
     else if (input > rand_num) {
       cout << "Guess Lower: ";
       cin >> input;
       counter = counter + 1;
     }
   }
   //play again
   cout << "Took you " << counter << " tries" << endl;
  cout << "Play Again?" << endl;
  string yesno;
  cin >> yesno;
  if (yesno == "yes" || yesno == "Yes" || yesno == "y" || yesno == "Y") {
    still_playing = true;
  }
  else {
    still_playing = false;
  }
}

   return 0;
}





  
