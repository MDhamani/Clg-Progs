/////////////////////////////////////
// MDhamani
/////////////////////////////////////
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Cust
{
    int acc;
    int wdrw;
    int chrg=100;
public:
    Cust(){
         cin>>acc>>wdrw;
    }
    int calc(){
    if((wdrw % 5 == 0)&&(acc > wdrw)){
        acc -= (wdrw+chrg);
        cout<<"successful ";
        cout<< acc<<"\n";
        return acc;
    }
    else{
            cout<<"unsuccessful ";
            cout<<acc<<"\n";
            return acc;
    }
    }
};
int main(){
    while(1){
    Cust c;
    c.calc();
    }
}
