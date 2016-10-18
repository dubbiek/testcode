#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;
struct Bottles {
    string botNum;
    string beerName;
    string brewery;
    string isActive;
};

int main() {
    vector<Bottles> oBeer;
    ifstream stream("test.csv");
    string line = "";

    while (getline(stream, line, '\n'))
    {
        Bottles aBeer;
        istringstream s(line);
        getline(s, aBeer.botNum, ',');
        getline(s, aBeer.beerName, ',');
        getline(s, aBeer.brewery, ',');
        getline(s, aBeer.isActive, ',');
        cout << aBeer.botNum << " is " << aBeer.beerName << " and made by " << aBeer.brewery << endl;
        oBeer.push_back(aBeer);
        }//while
    cout << "There are " << oBeer.size() << " beers on this list." << endl;
    return 0;
}
