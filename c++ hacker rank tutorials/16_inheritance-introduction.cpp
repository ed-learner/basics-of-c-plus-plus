#include <vector>
#include <iostream>


using namespace std;

class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle"<<endl;
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle"<<endl;
    	}
  		//Write your code here.
        void description(){
              cout<<"In an isosceles triangle two sides are equal"<<endl;
          }
         void triangle(){
              cout<<"I am a triangle"<<endl;
          }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
