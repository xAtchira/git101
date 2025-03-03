#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

class Media {
private:
    string title;
    int sizeInBytes;
public:
    Media(string, int);
    string getTitle();
    int getSizeInBytes();
    double getSizeInKB();
    double getSizeInMB();
    double getSizeInGB();
};

#endif