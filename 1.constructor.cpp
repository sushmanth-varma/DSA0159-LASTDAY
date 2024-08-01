#include<iostream>
#include<math.h>
using namespace std;
class Shape{
	public:
		double area;
		void rectangle(double length,double breadth){
			area=length*breadth;
			cout<<area<<endl;
		}
		void square(double radius){
			area=2*M_PI*radius;
			cout<<area<<endl;
		}
		void triangle(double base,double heigth){
			area=0.5*base*heigth;
			cout<<area<<endl;
		}
};
int main(){
	Shape shape;
	int n1=3.0;
	int n2=5.0;
	cout<<"area of rectangle:";
	shape.rectangle(n1,n2);
	cout<<"area of square:";
	shape.square(n1);
	cout<<"area of triangle:";
	shape.triangle(n1,n2);
	return 0;
}
