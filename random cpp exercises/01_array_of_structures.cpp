#include<iostream>
#include<cstring>

using namespace std;

struct student{
    int roll_no;
    string name;
    int phone_number;
};

int main(){

    struct student stud[5];

    int i;

    for (i = 0; i < 5 ; i++){
        cout<< "student "<<i+1<<endl;
        cout<<"Enter roll no"<<endl;

        cin>> stud[i].roll_no;

        cout<<"Enter name"<<endl;
        cin>> stud[i].name;


        cout<< "Enter phone number"<<endl;
        cin >> stud[i].phone_number;

    }

    for (i = 0; i < 5; i++){ //printing values
        cout<< "Student: "<<i+1<<endl;
        cout<<" Roll no:"<<stud[i].roll_no<<endl;
        cout<<" Roll no:"<<stud[i].name<<endl;
        cout<<" phone no:"<<stud[i].phone_number<<endl;

    }

    return 0;
}

© 2020 GitHub, Inc.
