/** Ques : Given the length and breadth of a rectangle,
 *  write a program to find whether numerically the 
 * area of the rectangle is greater than its perimeter.
 */

#include<iostream>
using namespace std;
int main(){
    int length, breadth;
    cout<<" Enter length : ";
    cin>>length;
    cout<<" Enter breadth : ";
    cin>>breadth;
    int area = length*breadth;
    cout<<"Area : "<<area<<endl;
    int perimeter = 2*(length + breadth);
    cout<<"Perimeter"<<perimeter<<endl;
    if(area>perimeter){
        cout<<"Area is greater than ";
    }else{
        "Area is not greater than perimeter ";
    }
}