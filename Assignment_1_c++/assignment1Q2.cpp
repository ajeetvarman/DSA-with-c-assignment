#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter radius : ";
    cin>>radius;
    int area = 3.14*radius*radius;
    cout<<"area : "<<area<<endl;
    int circumference = 2*3.14*radius;
    cout<<"circumference : "<<circumference<<endl;
    if(area>circumference){
        cout<<"Area of this circle is larger than the circumference";
    }else{
        cout<<"Area of this circle is not larger than the circumference";
    }
}