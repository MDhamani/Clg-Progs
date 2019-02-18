/////////////////////////////////////
// MDhamani
/////////////////////////////////////
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
  int x;
  int y;
  cout<<"enter acc balance";
  cin >> y;
  cout<<"amount to withdraw";
  cin >> x;
  if ((x % 5 == 0)&&((x+100)<y)&&(x!=0)){
      cout <<"bal is:"<<y-(x+100);
  }
else{
     cout <<"bal is:"<<y;
}
 return 0;
}
