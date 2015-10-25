#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> vi;
	//
	cout << "vi.size(): " << vi.size() 
		<< " vi.capacity(): " << vi.capacity() << endl;
	//	
	for (decltype(vi.size()) i = 0; i < 24; ++i)
	{
		vi.push_back(i);
	}

	cout << "vi.size(): " << vi.size() 
		<< " vi.capacity(): " << vi.capacity() << endl;
	//
	vi.reserve(70);

	cout << "vi.size(): " << vi.size() 
		<< " vi.capacity(): " << vi.capacity() << endl;
	
	while (vi.size() != vi.capacity())
	{
		vi.push_back(1);
	}
	cout << "vi.size(): " << vi.size() 
		<< " vi.capacity(): " << vi.capacity() << endl;

	vi.push_back(2);
	cout << "vi.size(): " << vi.size() 
		<< " vi.capacity(): " << vi.capacity() << endl;

	vi.shrink_to_fit();
	cout << "vi.size(): " << vi.size() 
		<< " vi.capacity(): " << vi.capacity() << endl;

	return 0;
}
