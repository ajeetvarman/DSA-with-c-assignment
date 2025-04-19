/**
 * Ques : Given three points (x1, y1), (x2, y2) and 
(x3, y3), write a program to check if all the three
 points fall on one straight line.
 */
#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3;
    cout<<"Enter point 1 (x1 y1) : "<<endl;
    cin>>x1>>y1;
    cout<<"Enter point 2 (x2 y2) : "<<endl;
    cin>>x2>>y2;
    cout<<"Enter point 3 (x3 y3) : "<<endl;
    cin>>x3>>y3;
    int area = x1*(y2-y3) + x2*(y3-y1) + x3*(y1 - y2);
    if(area == 0){
        cout<<"All 3 points lies on the same line";
    }else{
        cout<<"All 3 points do not lies on the same line";
    }
}
