#include <iostream>
using namespace std;

class Test
{
private:
	int a[10];
public:
	Test() 
	{
		for(int i=0;i<10;i++)
			a[i]=i;
	}
	void operator()() const
	{
		for(int i=0;i<10;i++)
			cout<<a[i]<<",";
		cout<<endl;
	}
};

int main()
{
	Test()();
	return 0;
}



