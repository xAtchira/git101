#include <iostream>
#include <string>
using namespace std;

// OOP Concept : OOP is A PIE;
// A : Abstraction
// P : Polymorphism
// I : Inheritance
// E : Encapsulation

class Book {
private:            // All Attribute are private
    string title;   // Attribute
    int totalPage;  // use lowerCamelCase
    int read;
public:
    Book();
    Book(string t);
    Book(string t, int total);
    void setTitle(string title);
    string getTitle();
    int getTotalPage();
    int getRead();
    void readMore(int page);
    string toString();
};

int main() {
    Book book1;
    Book book2("Java for Beginner");
    book1.setTitle("Introduction to C++");

    Book* b3 = new Book("OOP for CS113", 250);
    b3->setTitle("OOP is A PIE");
    b3->readMore(10);

    cout << book1.getTitle() << " " << book1.getTotalPage() << endl;
    cout << book2.getTitle() << " " << book2.getTotalPage() << endl;
    cout << b3->getTitle() << " " << b3->getTotalPage() << endl;

    cout << book1.toString() << endl;
    cout << book2.toString() << endl;
    cout << b3->toString() << endl;


    return 0;
}

void Book::setTitle(string title) {
    this->title = title;
}

string Book::getTitle() {
    return title;
}

Book::Book(string title, int totalPage) {
    this->title = title;
    this->totalPage = totalPage;
    read = 0;
}

Book::Book(string title) : Book(title, 200) {}

Book::Book() : Book("Sample Book", 100) {}

int Book::getTotalPage() {
    return totalPage;
}

int Book::getRead() {
    return read;
}

void Book::readMore(int page) {
    read += page > 0 ? page : 0;
}

string Book::toString() {
    string result = "Title: ";
    result += title;
    result += ", read: ";
    result += to_string(read);
    result += ", totalPage: ";
    result += to_string(totalPage);
    return result;
}