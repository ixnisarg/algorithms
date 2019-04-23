#include<iostream> //depends on compiler
using namespace std;

class rectangle
{
	private : 
	int length,breadth;
	
	public:
	rectangle() {length=breadth=1;}		//default constructor
	rectangle(int l,int b);			//parameterized constructor	

	int area() ; 				//faciltators
	int perimeter();			//facilitators	
 	int GetLength(){return length;} 	//accessor		
	int SetLength(int l) {length = l;}
  

	~rectangle();				//destructor	

};

rectangle :: rectangle(int l,int b)
{
	length = l;
	breadth = b;
}

int rectangle :: area()
{
	return length * breadth;
}

int rectangle :: perimeter()
{
	return 2*length+breadth;
}	

rectangle :: ~rectangle()
{
}

int main()
{
	rectangle r(2,4);
	cout<<r.area()<<endl;
	cout<<r.perimeter()<<endl;
	r.SetLength(20);
 	cout<<r.GetLength()<<endl;		

}
