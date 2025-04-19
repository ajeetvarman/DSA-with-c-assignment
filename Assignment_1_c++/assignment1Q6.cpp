/** Ques : If the marks of A, B and C are input through the keyboard,
 write a program to determine the student scoring least marks. 
 */
#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter marks of A : ";
    cin>>A;
    cout<<"Enter marks of B : ";
    cin>>B;
    cout<<"Enter marks of C : ";
    cin>>C;

    if(A<=B && A<=C){
        cout<<"A has the least marks ";
    }else if(B<=A && B<=C){
        cout<<"B has the least marks ";
    }else{
        cout<<"C has the least marks ";
    }
}