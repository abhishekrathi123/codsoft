#include<iostream>

using namespace std;

int main(){
    int n,randomnumber,turn=4;
    cout<<"You have only 4 chances!!\n\n";
    
    
    randomnumber=(rand()%(100-1)+1);
    while(turn>0){
    if(turn==0){
        cout<<"Bad luck!!\n\nTry next time";
        break;
    }
    cout<<"Guess the number between(1 - 100) = ";
    cin>>n;
    if(n==randomnumber){
        cout<<"Congratulations!! you guess the correct number ";
    }
    else if(n>randomnumber){
        cout<<"Too High!!\n Guess again you have "<< turn-1<< " more chances \n\n";
        
    }
    else if(n<randomnumber){
        cout<<"Too Low!!\n Guess again you have "<< turn-1<< " more chances\n\n ";
        
    }
    turn --;
    if(turn==0){
        cout<<"Bad luck!!\n\nTry next time";
    }
    }
    
    return 0;
}