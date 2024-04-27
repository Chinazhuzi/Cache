#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main() {
    ifstream file("address.txt");
    vector<string> addresses;
    string line;
    while (getline(file, line)) {
        addresses.push_back(line);
    }
    file.close();
    for (const auto& address : addresses) {
        cout << address << endl;
    }
    return 0;
}
