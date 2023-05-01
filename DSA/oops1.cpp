#include<bits/stdc++.h>
#pragma pack(1)
using namespace std;

class hero{
    public:
        string name;
        char level;
        int gethealth(){
            return health;
        }
        void sethealth(int n){
            health = n;
        }
        void setname(string s){
            name = s;
        }
        string getname(){
            return name;
        }
        hero(){
            cout << "Simple Constructor Called!" << endl;
        }
        hero(int j, string s){
            this->health = j;
            this->name = s;
            cout << "Constructor Called!" << endl;
        }
        hero(hero& temp){
            cout<< "Copy Constructor Called!" << endl;
            this->health = temp.health;
            this->name = temp.name;
        }
    private:
        int health;
}; 

int main()
{
    // hero newbie;
    // newbie.sethealth(70);
    // newbie.setname("Nilesh");
    // cout << newbie.gethealth() << endl;
    // cout << newbie.getname() << endl;
    // hero *h= new hero;
    // int *i=new int;
    // string *s=new string;
    // cin>>*s;
    // h->setname(*s);
    // cin>>*i;
    // h->sethealth(*i);
    // cout<<"Output: "<<endl;
    // cout<<(*h).gethealth()<<endl;
    // cout<<(*h).getname()<<endl;
    // hero *newbie=new hero(56);
    // newbie->setname("Nilesh");
    // cout << "Object created dynamically!" << endl;
    // cout << newbie->gethealth() << endl;
    // cout << newbie->getname() << endl;

    hero suresh(70, "Suresh");
    hero deepak(suresh);
    cout << deepak.gethealth() << endl;
    cout << deepak.getname() << endl;

    return 0;
}