#include <iostream>
#include <thread>
#include <ctime>
#include <unistd.h>
using std::cout;
using std::endl;
class background_task
{
public:
	void operator()() const
	{
		cout<<"()"<<endl;
	}
	background_task() 
	{
		cout<<"say hi"<<endl;
	}
};

void say_hi() 
{
	cout<<"hi"<<endl;
	//sleep(5);
}

void say_hello()
{
	cout<<"hello"<<endl;
}
int main()
{
	std::thread my_thread([]{
		say_hi();
		say_hello();
	});

	return 0;
}
