#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> names = {"John", "Jane", "Bob", "Alice"};
    string name;
    cout << "Enter a name: ";
    cin >> name;

    if (find(names.begin(), names.end(), name) != names.end()) {
        cout << "The name is in the list." << endl;
    } else {
        cout << "The name is not in the list." << endl;
    }

    return 0;
}
