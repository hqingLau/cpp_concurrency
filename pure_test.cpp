#include <iostream>
#include <thread>
#include <vector>
using namespace std;

class Group {
	public:
		int x;
		int y;
		Group(int x,int y): x(x),y(y) {}
		Group() = default;
};

ostream& operator <<(ostream &os,Group &g)
{
	os<<"x: "<<g.x<<", y: "<<g.y<<endl;
	return os;
}
int main(int argc,char **argv)
{
	vector<Group> t;
	t.push_back(4,5);
	t.emplace_back(4,5);
	cout<<t[0];

	return 0;
}
