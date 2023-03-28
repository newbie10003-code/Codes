#include<bits/stdc++.h>
using namespace std;

class hero{
    
    //Attributes
    public:
    char *name;
    int health;
    char level;
    static int time_to_complete;

    //Getter and Setter

    public:
        void setname(char s[]){
            strcpy(this -> name, s);
        }
        void sethealth(int n){
            this -> health = n;
        }
        char* getname(){
            return this -> name;
        }
        int gethealth(){
            return this -> health;
        }
        void print(){
            cout << endl;
            cout << "Name: " << this->name << endl;
            cout << "Health: " << this->health << endl;
        }
    
    // Constructors    

        hero(){
            cout << endl;
            cout << "Simple Constructor Called!" << endl;
            name = new char[100];
        }
        hero(char s[], int n){
            cout << endl;
            cout << "Parameterised Constructor Called!" << endl;
            strcpy(this->name,s);
            this -> health = n;
        }
        hero(hero& temp){
            char *ch = new char[strlen(temp.name)+1];
            strcpy(ch, temp.name);
            this -> name = ch;
            this -> health = temp.health;
            cout << endl;
            cout << "Copy Constructor Called!" << endl;
            cout << endl;
        }
    
    //Destructor

        ~hero(){
            cout << endl;
            cout << "Destructor Called!" << endl;
        }
};

int hero::time_to_complete = 5;

int main()
{
    cout << hero::time_to_complete << endl;
    hero a;

    // hero h1;
    // char name[]="Nilesh";
    // h1.sethealth(70);
    // h1.setname(name);
    // // h1.print();
    // hero *h2 = new hero;
    // h1.name[0]='B';
    // h1.print();
    // h2->print();
    // h1 = (*h2);
    // h1.print();
    // Destructor needs to be called manually for dynamically allocated objects
    // delete h2;
    return 0;
}