#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    int level;
public:
    Hero(string s, int n) {
        name = s;
        level = n;
    }
    string getName() {
        return name;
    }
    int getLevel() {
        return level;
    }
};

int main() {
    string s;
    int n;
    cin >> s >> n;
    Hero hero1(s, n);
    cout << hero1.getName() << " " << hero1.getLevel();
};