#include <iostream>

int main(){
    using namespace std;

    char*name=new char[20];
    int age;

    cout<<"what's your name ?"<<endl;

    cin>>name;

    cout<<"what's your age?"<<endl;

    cin>>age;

    cout<<"Hello "<<name<<"  I know you have "<<age<<endl;

    delete [] name;






}

