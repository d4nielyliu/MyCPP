#include <iostream>
#include <fstream>

using namespace std;

int main()
{
//	double value = 0.0;
	int count = 0;
	double sum = 0.0;
//	ifstream myfile_PTL("TEST.txt");
//	while (myfile_PTL >> value)
	while (count<=100)
	{
//		count++;
                sum+=count;
	}
//	cout << "There were " << count << " numbers." << endl;
	cout << "The sum is " << sum << endl;
}
