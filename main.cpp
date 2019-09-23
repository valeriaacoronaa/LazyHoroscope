//Valeria Corona
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname;
  //get user input
  cout << "What is your first name?\n";
  cin  >> firstname;
  cout << "What is your last name?\n";
  cin  >> lastname;
  //tell fortune
  cout << "Welcome, " << firstname << ' ' << lastname  << ", here is your fortune...\n";

  return 0;
}
