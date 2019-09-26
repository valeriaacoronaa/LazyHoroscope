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
  int index= 0;
  //get user input
  cout << "What is your first name?\n";
  cin  >> firstname;
  cout << "What is your last name?\n";
  cin  >> lastname;
  //tell fortune
  lucky = firstname.length();
  cout << "Welcome, " << firstname.at(0) << '.' << lastname.at(0)  << "., here is your fortune...\n"
       << "your lucky number is " << lucky << endl;

  if (firstname.at(0)=='A'|| firstname.at(0)=='a'|| firstname.at(0)=='E'|| firstname.at(0)=='e'|| firstname.at(0)=='I'|| firstname.at(0)=='i'|| firstname.at(0)=='O'|| firstname.at(0)=='o'|| firstname.at(0)=='U'|| firstname.at(0)=='u')
  {
    cout<<"you are destined to be famous!\n";
  }
  else
  {
    cout<<"you should keep a low profile.\n";
  }

  index=lastname.length()-1;

  if (lastname.at(index)=='A'|| lastname.at(index)=='a'||lastname.at(index)=='E'|| lastname.at(index)=='e'|| lastname.at(index)=='I'|| lastname.at(index)=='i'|| lastname.at(index)=='O'|| lastname.at(index)=='o'|| lastname.at(index)=='U'|| lastname.at(index)=='u')
  {
    cout<<"you have already met your true love.\n";
  }
  cout<<"have a good day!\n";


  return 0;
}
