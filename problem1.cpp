// Author: Jacob Christiansen
// Recitation: 104 – Vipra Gupta
//
// Assignment 3
// Problem 1

#include <iostream>
using namespace std;


//This is the story1 function.
//It creates and has the user define string variables, which are then
//used to create and print a sentence.
//Once a story has been run, the function is exited.
void story1(void){
        string noun;
        string occ;
        string animal;
        string place;

        cout << "Enter a plural noun: \n";
        cin >> noun;

        cout << "Enter an occupation: \n";
        cin >> occ;

        cout << "Enter an animal name: \n";
        cin >> animal;

        cout << "Enter a place: \n";
        cin >> place;

        cout << "In the book War of the "<<noun<<", the main character is an anonymous "<<occ<<" who records the arrival of the "<<animal<<"s in "<<place<<".\n";
    }

//This is the story2 function.
//It creates and has the user define string variables, which are then
//used to create and print a sentence.
//Once a story has been run, the function is exited.
void story2(void){
    string name;
    string place;

    cout << "Enter a name: \n";
    cin >> name;

    cout << "Enter a state/country: \n";
    cin >> place;

    cout << name<<", I've got a feeling we're not in "<<place<<" anymore.\n";
}

//This is the story3 function.
//It creates and has the user define string variables, which are then
//used to create and print a sentence.
//Once a story has been run, the function is exited.
void story3(void){
    string name;
    string relative;
    string verb;

    cout << "Enter a first name: \n";
    cin >> name;

    cout << "Enter a relative: \n";
    cin >> relative;

    cout << "Enter a verb: \n";
    cin >> verb;

    cout << "Hello. My name is "<<name<<". You killed my "<<relative<<". Prepare to "<<verb<<".\n";
}


//This is the menu function. It displays choices the user can input,
//which will then run the corresponding task.
//If 1 is inputed, the function 'story1'.
//If 2 is inputed, the function 'story2'.
//If 3 is inputed, the function 'story3'.
//If q is inputed, the program exits the function and ends.
//If something else is inputed, the program will tell the user that
//isn't an option, and run the menu again.
//Once a 'story' has finished running, 'menu' runs again.
void menu(void){

    string storyInput;
    string rnVar;

    cout << "Which story would you like to play? Enter the number of the story (1, 2, or 3) or type q to quit: \n";
    cin >> storyInput;

    if(storyInput=="q"){
        rnVar="q";
        cout << "good bye";
    }
    else if(storyInput=="1"){
        rnVar="1";
        story1();
        menu();
    }
    else if(storyInput=="2"){
        rnVar="2";
        story2();
        menu();
    }
    else if(storyInput=="3"){
        rnVar="3";
        story3();
        menu();
    }
    else{
        cout << "Valid choice not selected.\n";
        menu();
    }

}
//This is the main function. It's only purpose is to run another function.
//How sad.

int main(){
    menu();
    return 0;
}
