#include "Device.h"
#include <iostream>
using namespace std;

class Player : public Device
{
private:
	int _totaltracks;
public:
	Player(int _batterylife, const int& totaltracks ) : Device(_batterylife), _totaltracks(totaltracks)
	{

	}
	void Showtotaltracks()
	{
		cout << "total tracks: " << _totaltracks << endl;
	}
};

int main()
{
	Device m(10);
	m.Showspec();
	Player z(20, 150);
	z.Showspec();
	z.Showtotaltracks();

	
	return 0;

}