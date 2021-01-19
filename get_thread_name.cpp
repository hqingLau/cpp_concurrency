#include <iostream>
#include <thread>
using namespace std;


int main(int argc,char **argv)
{
	cout<<this_thread::get_id()<<endl;
    return 0;
}
