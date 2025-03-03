#include <iostream>
#include <vector>
using namespace std;

class Material {
private:
    string name;
    int quality;
    vector<string> compatibleTypes;

public:
    Material(string name, int quality);
    string getName();
    int getQuality();
    void addCompatibleType(string type);
    bool isCompatibleWith(string weaponType);
    int getUpgradeValue();
};

//Implementation

Material(string name, int quality) {
    this->name = name;
    if (quality < 1) {
        this->quality = 1;
    } else if (quality > 5) {
        this->quality = 5;
    } else {
        this->quality = quality;
    }
}
string getName() {
    return name;
}
int getQuality() {
    return quality;
}
void addCompatibleType(string type) {
    compatibleTypes.push_back(type);
}
bool isCompatibleWith(string weaponType) {
    for (vector<string> iterator t = compatibleTypes.begin(); t != compatibleTypes.end(); t++) {
        if (weaponType.compare(t)) {
            return 1;
        } else {
            return 0;
        }
    }
}
int getUpgradeValue() {
    return quality*5;
}

// End implementation

int main() {
    Material *material = new material("Steel", 6);
    cout << material->getName() << endl;
    cout << material->getQuality() << endl;
    material->addCompatibleType("Sword");
    material->addCompatibleType("Sheild");
    cout << material->isCompatibleWith("Sword") << endl;
    cout << material->getUpgradeValue();
}