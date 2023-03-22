#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int w; // width of the building.
    int h; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of turns before game over.
    cin >> n; cin.ignore();
    int x;
    int y;
    cin >> x >> y; cin.ignore();
    int first_x = 0;
    int last_x = w;
    int first_y = 0;
    int last_y = h;

    // game loop
    while (1) {
        string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bomb_dir; cin.ignore();
        if (bomb_dir.find('U') != std::string::npos) {
            last_y = y - 1;
        }
        else if (bomb_dir.find('D') != std::string::npos) {
            first_y = y + 1;

        }
        if (bomb_dir.find('L') != std::string::npos) {
            last_x = x - 1;
        }
        else if (bomb_dir.find('R') != std::string::npos) {
            first_x = x + 1;
        }
        x = (first_x + last_x) / 2;
        y = (first_y + last_y) / 2;
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // the location of the next window Batman should jump to.
        cout << x << " " << y << endl;
    }
}