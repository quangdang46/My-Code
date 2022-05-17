#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
class Box {
    private:
        int l=0,b=0,h=0;
    public:
        Box(){

        }
        Box(int l,int b,int h){
            this->l=l;
            this->b=b;
            this->h=h;
        }
        Box(Box &x){
            this->l=x.l;
            this->b=x.b;
            this->h=x.h;
        }
    public:
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return (long long)l*b*h;
        }
        bool operator<(const Box& x) {
            if (l < x.l) return true;
            if (b < x.b && l == x.l) return true;
            if (h < x.h && l == x.l && b == x.b) return true;
            return false;
        }
        friend ostream& operator<< (ostream& o, const Box& x){
            o << x.l << " " << x.b << " " << x.h;
            return o;
        }
};

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}