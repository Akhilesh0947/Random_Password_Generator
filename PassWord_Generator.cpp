#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string Password_Generator(int Length){

  //Creating Input Variable
  string BigChar="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string SmallChar="abcdefghijklmnopqrstuvwxyz";
  string Numbers="0123456789";
  string Symbols="!~@#$%^&*";

  // Add all Variable in one string
  string temp=BigChar+SmallChar+Numbers+Symbols;

  //To store Random PassWord
  string PassWord="";

  for (int i = 0; i < Length; ++i)
  {
    // Generate Random No in the Range 0 to Size of Input Variables
    int RandomIndex = rand() % (temp.length());

    PassWord+=temp[RandomIndex];

  }

  //Returning PassWord
  return PassWord;
}
//Main
int main() {

  // Providing a seed value
  srand((unsigned) time(NULL));
  
  //Length Of Password
  int Length;cin>>Length;

  //Random Password
  cout<<Password_Generator(Length)<<endl;
  
}
