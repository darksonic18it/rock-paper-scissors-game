#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  
  srand(static_cast<unsigned> (time(0)));

  int user;
  int computer = rand() % 3 + 1;
  
  cout << "Rock Paper Scissors Game! " << endl;
  cout << "1. Rock" << endl;
  cout << "2. Paper" << endl;
  cout << "3. Scissors" << endl;
  cout << "Choice: ";
  cin >> user;


  if(user > 3 || user < 1){
    cout << "Invalid choice try again!";
    return 1;
  }

  cout << "You choose: ";
  if(user == 1){
    cout << "Rock" << endl;
  }else if(user == 2){
    cout << "Paper" << endl;
  }else if(user == 3){
    cout << "Scissors" << endl;
  }

  cout << "Computer choose: ";
  if(computer == 1){
    cout << "Rock" << endl;
  }else if(computer == 2){
    cout << "Paper" << endl;
  }else if(computer == 3){
    cout << "Scissors" << endl;
  }

  if(user == 1 && computer == 3){
    cout << "You won!" << endl;
  }else if(user == 2 && computer == 1){
    cout << "You won!" << endl;
  }else if(user == 3 && computer == 2){
    cout << "You won!" << endl;
  }else{
    cout << "You lose!" << endl;
  }
  
  return 0;
}