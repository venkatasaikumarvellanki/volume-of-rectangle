//volume of rectangle
#include<iostream>
using namespace std;
class volume
{
	int l,b,h;
	public:
		volume()
		{
			l=20;
			b=10;
			h=30;
		}
		void v()
		{
			cout<<l*b*h;
		}
};
main()
{
	class volume obj;
	obj.v();
}
