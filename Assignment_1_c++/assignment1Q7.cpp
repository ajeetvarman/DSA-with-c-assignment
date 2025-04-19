
/**Ques : Given a point (x, y), write a program to find out if 
 * it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
  */

  #include<iostream>
  using namespace std;
  int main(){
    int x,y;
    cout<<" Enter first point : ";
    cin>>x;
    cout<<" Enter second point : ";
    cin>>y;
    if(x==0 && y==0){
        cout<<" The point is at origin ";
    }else if(y==0){
        cout<<" The point lies on x-axis ";
    }else if(x==0){
        cout<<" The point lies on y-axis ";
    }else{
        cout<<" The point is not any axis or origin";
    }
  }
