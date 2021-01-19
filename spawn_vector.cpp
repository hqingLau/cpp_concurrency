#include <iostream>
#include <stdio.h>
#include <thread>
#include <vector>
using namespace std;

void do_work(unsigned id)
{
	printf("current id: %d\n",id);
}

int main()
{
	vector<thread> threads;
	for(int i=0;i<20;i++)
		threads.emplace_back(do_work,i);
	for(auto &entry: threads)
		entry.join();
	return 0;
}
