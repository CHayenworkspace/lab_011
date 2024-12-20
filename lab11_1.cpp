#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
int main(){
    srand(time(0));
    string x ;
    string G[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.\n";    
    getline(cin,x);
    if(x==""){getline(cin,x);
    if(x==""){getline(cin,x);
    if(x==""){
    cout << "You will get "<< G[rand()%9+1]<< " in this 261102.";}}}}

