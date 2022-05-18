#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
    public:
        string name;
        int age;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor:public Person
{
    private:
        int publications ;
        int cur_idP;
        static int id;
    public:
    void getdata()
    {
        cin>>name>>age>>publications;
        cur_idP=++id;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_idP<<endl;
    }
};
int Professor :: id=0;
class Student:public Person
{
    private:
        int marks[6],cur_idS;
        static int i;
    public:
    void getdata()
    {
        int i;
        cin>>name>>age;
        for(i=0;i<6;i++)
        {
            cin>>marks[i];
        }
    }
    void putdata() {
        cur_idS = ++i;
        int i, n;
        n = 0;
        for (i = 0; i < 6; i++) {
            n += marks[i];
        }
        cout << name << " " << age << " " << n << " " << cur_idS << endl;
    }
};
int Student :: i=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
