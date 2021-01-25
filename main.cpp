#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void memDump(void* p, int cnt)
{
	cout << "Dumping ...\n\t";
	// Make conversion to char, use interpret cast.
	// No hierarchy, cannot use dynamic cast!
	unsigned char* pC = reinterpret_cast<unsigned char*>(p);
	cout << setfill('0') << hex;
	for (auto i = 0; i < cnt; ++i)
	{
		cout << " " << setw(2) << (unsigned int)pC[i];
	}
	cout << setfill(' ') << dec << endl;

}

int main()
{
	void* ptr = nullptr; // Generic pointer: Cannot be dereferenced.
						 // Void is an incomplete type! void is NO type.
	
	int arr[5]{ 1,2,3,45 };

	memDump(arr, 20);

	cout << endl;
}