#include<bits/stdc++.h>

using namespace std;

class student{
    string name;
    int cls;
    int adno;
    bool scholar;
    int marks[5];

    public:
    void input(string , int , int , int mrks[]);
    bool isScholar(int marks[]);
    void display(){           //another way of memeber function implementation
        cout<<name<<endl;
        cout<<cls<<endl;
        cout<<adno<<endl;
        cout<<scholar<<endl;
        cout<<"english: "<<marks[0]<<endl;
        cout<<"maths: "<<marks[1]<<endl;
        cout<<"physics: "<<marks[2]<<endl;
        cout<<"chemistry: "<<marks[3]<<endl;
        cout<<"computer: "<<marks[4]<<endl;
        
    }
};

void student :: input(string nm, int clas, int admno,  int mrks[]){
    name = nm;
    cls = clas;
    adno = admno;
    scholar = isScholar(mrks);
    for(int i = 0; i < 5; i++){
        marks[i] = mrks[i];
    }
}
bool student :: isScholar(int marks[])
{
    double total = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4])/5;
    if(total < 90) return 0;
    return true;
}


int main()
{
    // string name;
    // int cls;
    // int adno;
    // bool scholar;
    // int marks[5];

    // cout<<"enter name: ";
    // cin>>name;
    // cout<<"enter class: ";
    // cin>>cls;
    // cout<<"enter admission number: ";
    // cin>>adno;
    // cout<<"enter marks: ";
    // cout<<"eng: ";
    // cin>>marks[0];
    // cout<<"maths: ";
    // cin>>marks[1];
    // cout<<"phy: ";
    // cin>>marks[2];
    // cout<<"chem: ";
    // cin>>marks[3];
    // cout<<"comp: ";
    // cin>>marks[4];
    int marks[] = {100,100,100,100,90};
    student st;
    st.input("jeteish", 12, 123456, marks);
    st.display();
}

