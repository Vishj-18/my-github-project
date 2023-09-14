#include<iostream>
using namespace std;
class complex{
  private:
    int real;
    int imag;
    int real1;
    int imag1;
  public:
    
    complex(int r,int i,int x,int y){
       real=r;
       imag=i;
       real1=r;
       imag1=i;
       }
   
    void add(){
       int a=real+real1;
       int b=imag+imag1;
       cout<<"add is"<<a<<"+i"<<b;
      
      
        
        }
        
          void sub(){
       int a=real-real1;
       int b=imag-imag1;
       cout<<"sub is"<<a<<"+i"<<b;}
       
      void mul(){
       int a=real*real1;
       int b=imag*imag1;
       cout<<"mul is"<<a<<"+i"<<b;}
     
     
     void display(){
         cout<<"complex number is"<<real<<"+i"<<imag;
         }
};

int main(){
 complex c1(1,2,3,4);
 
 
 c1.add();
 c1.sub();
 c1.mul();
 
 return 0;
 }
   
