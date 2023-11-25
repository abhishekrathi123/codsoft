#include<iostream>
using namespace std;
void setup(){
    
    char c;
    cout<<" Press Enter to Start the Game . . .\n";
    getchar();
    cout<<"**********"<<endl;
    cout<<"       Tic-Tac-Toe        "<<endl;
    cout<<"**********\n"<<endl;
    cout<<"Player 1 --> X "<<endl;
    cout<<"Player 2 --> O \n"<<endl;
    cout<<"The Game Board is given Below:"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  1  |  2  |  3  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"-----|-----|-----"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  4  |  5  |  6  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"-----|-----|-----"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  7  |  8  |  9  "<<endl;
    cout<<"     |     |     "<<endl;

}

void update(string board[],int i,int chance){
    
    if(chance==1 && board[i-1]==" "){
        board[i-1]='X';
    }
    else if(chance==2 && board[i-1]==" "){
        board[i-1]='O';
    }
    else{
        cout<<"Wrong input!!!"<<endl;
    }
}

void print(string board[]){

    cout<<"     |     |     "<<endl;
    cout<<"  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"-----|-----|-----"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"-----|-----|-----"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;

}

bool isWinner(string board[]){
    
    bool ans=false;
    
    //checking rows

    if( (board[0]==board[1]) && ( board[1]==board[2] ) && board[0]!=" "){
        ans=true;
    }
    else if( (board[3]==board[4]) && ( board[4]==board[5] ) && board[3]!=" "){
        ans=true;
    }
    else if( (board[6]==board[7]) && ( board[7]==board[8] ) && board[6]!=" "){
        ans=true;
    }
    
    //checking columns
    
    else if( (board[0]==board[3]) && ( board[3]==board[6] ) && board[0]!=" "){
        ans=true;
    }
    else if( (board[1]==board[4]) && ( board[4]==board[7] ) && board[1]!=" "){
        ans=true;
    }
    else if( (board[2]==board[5]) && ( board[5]==board[8] ) && board[2]!=" "){
        ans=true;
    }
    
    //checking diagonals
    
    else if( (board[0]==board[4]) && ( board[4]==board[8] ) && board[0]!=" "){
        ans=true;
    }
    else if( (board[2]==board[4]) && ( board[4]==board[6] ) && board[2]!=" "){
        ans=true;
    }
    
    return ans;
}

int whoWon(string board[]){
    
    int ans;
    
    if( (board[0]==board[1]) && ( board[1]==board[2] ) && board[0]!=" "){
        if(board[0]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    
    else if( (board[3]==board[4]) && ( board[4]==board[5] ) && board[3]!=" "){
       if(board[3]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    
    else if( (board[6]==board[7]) && ( board[7]==board[8] ) && board[6]!=" "){
       if(board[6]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    
    //checking columns
    
    else if( (board[0]==board[3]) && ( board[3]==board[6] ) && board[0]!=" "){
        if(board[0]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    
    else if( (board[1]==board[4]) && ( board[4]==board[7] ) && board[1]!=" "){
        if(board[1]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    
    else if( (board[2]==board[5]) && ( board[5]==board[8] ) && board[2]!=" "){
        if(board[2]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    
    //checking diagonals
    
    else if( (board[0]==board[4]) && ( board[4]==board[8] ) && board[0]!=" "){
        if(board[0]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    else if( (board[2]==board[4]) && ( board[4]==board[6] ) && board[2]!=" "){
        if(board[2]=="X"){
            ans=1;
        }
        else{
            ans=2;
        }
    }
    return ans;
}

bool allfilled(string board[]){
    int ans=true;
    for(int i=0;i<9;i++){
        if(board[i]==" "){
            ans=false;
            break;
        }
    }
    return ans;
}

int main(){
    
    setup();
    int chance=1;
    int enteragain=0;
    
    string board[9]={" "," "," "," "," "," "," "," "," "};
    while((!isWinner(board) || !allfilled(board)) && enteragain==0){
        
        int i;
        cout<<"Player "<<chance<<" ,Enter a Number {1 --> 9} :";
        cin>>i;
        update(board,i,chance);
        print(board);
        
        if(isWinner(board)){
            if(whoWon(board)==1){
                cout<<"Congratulations Player 1 ,You Won !!!"<<endl;
                break;
            }
            else{
                cout<<"Congratulations Player 2 ,You Won !!!"<<endl;
                break;
            }
        }

        else if(allfilled(board)){

            char x;
            cout<<"It's a Tie!!!"<<endl;
            cout<<"Press 'Y' --> Play Again \n 'N' --> End Game "<<endl;
            cin>>x;
            
            if(x=='Y'){
                enteragain=0;
                for(int i=0;i<9;i++){
                    board[i]=" ";
                }
            }
            else{
                enteragain=1;
                break;
            }
        }

        //changing chance

        if(chance==1){
            chance++;
        }
        else{
            chance--;
        }
    }

    return 0;
}

