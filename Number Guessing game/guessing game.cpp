#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int guess,random,count=0,range;

    cout<<"Game started....Press Ctrl+z to stop the game. Enjoy!! "<<endl<<endl;
    cout<<"Enter range: from 1 to ... ? "<<endl;
    cin>>range;
    cout<<"Enter a number from 1 to  "<<range<<endl;
    cin>>guess;

    while(cin ){
        random= 1+rand()%range;
        if(guess>range){
            cout<<"Out of range! Enter from 1 to "<<range<<endl;
        }
        if(guess== random){
            cout<<"Right You Are!  +1  \n"<<endl;
            count++;
        }else{
            cout<<"Wrong Number!  right number is =  "<<random<<endl;
            }
            cin>>guess;
        }

    cout<<endl<<endl;
    cout<<"End Game"<<endl;
    cout<<"Total point = "<<count<<endl;
}
