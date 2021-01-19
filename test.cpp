#include <iostream>
#include <thread>
#include <string>
using namespace std;

void some_function()
{
	cout<<"f: some_function()"<<endl;
}
thread f()
{
	return thread(some_function);
}

void g(thread t)
{
	thread tt = move(t);
	cout<<"g func"<<endl;
	tt.join();
}

int main(int argc,char **argv)
{
	thread t(some_function);
	g(t);
	return 0;
}

