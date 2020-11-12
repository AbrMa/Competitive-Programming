#include <iostream>
#include <string>
using namespace std;
int main() { 
	int t, sx, sy, ex, ey, n = 0, s = 0, e = 0, w = 0, px, py;
	bool valid = false;
	string directions;
	cin >> t >> sx >> sy >> ex >> ey >> directions;
	for (int i = 0; i < directions.size(); i++) {
		px = sx;
		py = sy;
		if (directions[i] == 'N') py++;
		else if (directions[i] == 'S') py--;
		else if (directions[i] == 'E') px++;
		else if (directions[i] == 'W') px--;
		if (abs(ex - px) < abs(ex - sx) || abs(ey - py) < abs(ey - sy)) {
			sx = px;
			sy = py;
		}
		if (abs(ex - sx) == 0 && abs(ey - sy) == 0) {
			cout << (i + 1) << endl;
			valid = true;
			break;
		}
	}	
	if (!valid) cout << "-1" << endl;
	return 0;
}