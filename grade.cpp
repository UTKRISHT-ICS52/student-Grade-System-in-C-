#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;

    cout <<"Enter marks in English"<<endl;
    cin>>a;
    cout<<"Enter marks in Math"<<endl;
    cin>>b;
    cout<<"Enter marks in physics"<<endl;
    cin>>c;
    cout<<"Enter marks in Biology"<<endl; 
    cin>>d;
    cout<<"Enter marks in Computer Science"<<endl;
    cin>>e;

    f=((a+b+c+d+e)*100/500);
    cout<<"Your Percentage is:"<<f<<endl;

    if(f>=90)
    {
        cout<<"Grade is A+";
    }
    else if(f>=80)
    {
        cout<<"Grade is A";
    }
    else if(f>=70)
    {
        cout<<"Grade is B";
    }
    else if(f>=60)
    {
        cout<<"Grade is C";
    }
    else if(f>=50)
    {
        cout<<"Grade is D";

    }
    else if(f>=40)
    {
        cout<<"Grade is E";
    }
    else if(f<=30)
    {
        cout<<"You are fail , Study Hard Next Time"<<endl;
    }
    return 0; 
}