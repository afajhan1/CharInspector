//Author:Ahmad Fajhan
#include<iostream>

using namespace std;

int main()
{
    char letter;

  cout<<"What character do you want to know about?\n";
  cin>> letter;

      if(letter>='A' && letter<='z') 
      { 

  //when user's entry is between A-Z...
  cout<<" is an upper case letter!\n";
      }else if(letter>='a' && letter<='z') 
      { 
  //when user's entry is between a-z...
  cout<<" is a lower case letter!\n";
      }else
      {
  //in all other cases...
  cout<<"?! Pssh. What are you talking about?\n";
      }
  //no matter what they enter...
  cout<<"The ASCII value is: ";<<(int)letter<<endl;

  return 0;
}
