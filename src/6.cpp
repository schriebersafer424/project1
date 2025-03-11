#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> names;
    string name;
    while (true) {
        cout << "Enter a name: ";
        cin >> name;
        if (name == "") break;
        names.push_back(name);
    }
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
    }
    return 0;
}
