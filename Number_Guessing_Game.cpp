#include<bits/stdc++.h>
using namespace std;
int main(){
    // Welcome to my new project Number Guessing Game
    srand((unsigned int) time(0));
    int number=(rand() % 100)+1;
    int guess,chances;
    string difficuilty_level;

    cout<<"Choose your difficuilty level, like Easy,Medium or Hard\n";

    while(difficuilty_level!="Easy" || difficuilty_level!="Medium" || difficuilty_level!="Hard"){
        cin>>difficuilty_level;
        if(difficuilty_level=="Easy" || difficuilty_level=="Medium" || difficuilty_level=="Hard")
        break;
        else
        cout<<"Choose a valid difficuilty level, like Easy,Medium or Hard\n";
    }

    if(difficuilty_level=="Easy")
    chances=7;
    else if(difficuilty_level=="Medium")
    chances=5;
    else
    chances=3;

    do{
        cout<<"Enter your guess in the range (1-100): ";
        cin>>guess;
        if(guess>number)
        cout<<"Too high!\n";
        else if(guess<number)
        cout<<"Too low!\n";
        else
        cout<<"You won!\n";
    }while(guess!=number && --chances);
    if(!chances)
    cout<<"You lost\n";
    cout<<"Game over";
    return 0;
}