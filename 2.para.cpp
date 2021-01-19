#include <iostream>
#include <thread>
using namespace std;

void f(int i,string const&s){
	cout<<s<<endl;	
}
void oops(int some_param)
{
	char buffer[1024];
	sprintf(buffer,"%i",some_param);
	thread t(f,3,buffer);
	t.detach();
}

int main(int argc,char **argv)
{
	oops(123);
	cin.get();
    return 0;
}
