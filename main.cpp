//Valeria Corona
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname= " ";
  string lastname= " ";
  int lucky= 0;
  //get user input
  cout << "What is your first name?\n";
  cin  >> firstname;
  cout << "What is your last name?\n";
  cin  >> lastname;
  //tell fortune
  lucky = firstname.length();
  cout << "Welcome, " << firstname.at(0) << '.' << lastname.at(0)  << ", here is your fortune...\n"
       << "your lucky number is " << lucky << endl;

  return 0;
}
