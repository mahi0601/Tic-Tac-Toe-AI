
//Let's introduce you with the game of tic-tac-toe
/****Rules of the game****/
/****First you have to chose who will get the chance first to start the game****/
/*Now we will make a randomised function that would decide whom will be playing first*/
#include<iostream>
using namespace std;
char matrix[3][3]={ '1' , '2', '3', '4','5','6','7','8','9'};
int n;
void draw(){
    cout<<" TIC-TAC-TOE GAME "<<endl;
    cout<<" start playing the game and have the fun with the AI"<<endl;
    cout<<"Rules for the game are same as earlier"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int  choose(){
    int X;
    int O;
    if (X==1||X==2)
    {
        return X;
    }
    else if (O==0)
    {
        return O;
    }
    else{
        cout<<"The value could not be choosen as the input was latelty passed"<<endl;
    }
    
}



char input(){
    int a;
    char choice;
    choose();
    cout<<"Choose who will go first"<<":"<<endl;
    cin>>choice;
    cout<<"Press the number of the field form the given matrix number"<<endl;
    cin>>a;
    if (a==1)
    {
        if (matrix[0][0]=='1')
        {
            matrix[0][0]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
    else if (a==2)
    {
        if (matrix[0][1]=='2')
        {
            matrix[0][1]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==3)
    {
        if (matrix[0][2]=='3')
        {
            matrix[0][2]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==4)
    {
        if (matrix[1][0]=='4')
        {
            matrix[1][0]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==5)
    {
        if (matrix[1][1]=='5')
        {
            matrix[1][1]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==6)
    {
        if (matrix[1][2]=='6')
        {
            matrix[1][6]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==7)
    {
        if (matrix[2][0]=='7')
        {
            matrix[2][1]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==8)
    {
        if (matrix[2][1]=='2')
        {
            matrix[2][1]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
     else if (a==9)
    {
        if (matrix[2][2]=='9')
        {
            matrix[2][2]=choice;
        }
        else{
            cout<<"The field is already taken"<<endl;
            input();
        }
    }
}

char Win()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';

    return '/';
}

int main(){
    draw();
    n=0;
   
    while (1)
    {
        n++;
        input();
        draw();
        

        if (Win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout << "O wins!" << endl;
            break;
        }
        else if (Win() == '/' && n == 9)
        {
            cout << "It's a draw!" << endl;
            break;
        }

    }
    system("pause");
    return 0;
}
