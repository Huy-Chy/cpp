#include<iostream>
#include<string>
using namespace std;
class Goal {
    private:
        string name;
        int id;
        double gpa;
    public:
        Goal(string n, int i, double g) {
            name=n;
            id=i;
            gpa=g;
        }
        void output() {
            cout<<"Name : "<<name<<endl;
            cout<<"Id   : "<<id<<endl;
            cout<<"Gpa  : "<<gpa<<endl;
        }
};

int main() {
    Goal myGoal("Heng", 101, 2.5);
    myGoal.output();

    return 0;
}