#include <iostream>
#include <stdlib.h>
class student{
  private :
      int roll;
  public :
      int age;


  void Age(int a){
    roll=a;
    return roll;
  }
  void display(){
  	cout<<age <<roll;
  }
};
int main(){
    student a,*b;
    *b=new student;
    b->Age(45);
    a.display
}