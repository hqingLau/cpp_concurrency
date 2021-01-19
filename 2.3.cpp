#include <iostream>
#include <thread>

using std::cout;
using std::endl;
using std::thread;

class thread_guard
{
	thread t;
public:
	explicit thread_guard(std::thread t_)
	{
		t = move(t_);
	}
	//:t(move(t_)) {}
	~thread_guard()
	{
		t.join();
	}

	thread_guard(thread_guard const&)=delete;
	thread_guard& operator=(thread_guard const &)=delete;
};

struct func
{
	int &i;
	func(int &i_):i(i_) {}
	void operator()()const
	{
		for(unsigned j=0;j<1000000;++j)
		{
			cout<<i<<"\r";
		}
	}
};


void f()
{
	int some_local_state=0;
	thread t{func(some_local_state)};
	thread_guard g(move(t));
	cout<<"f func\n";
}

int main()
{
	f();
	return 0;
}
