
#include <iostream>
#include <string>
using namespace std;

class BookViewer;  // Forward declaration

class Book {
private:
    string title;
    int bookId;
    static int objectCount;

public:
    // Parameterized Constructor
    Book(string title, int bookId) {
        this->title = title;
        this->bookId = bookId;
        objectCount++;
    }

    // Inline Function
    inline void display() const {
        cout << "Title: " << title
             << ", Book ID: " << bookId << endl;
    }

    // Static Member Function
    static void displayObjectCount() {
        cout << "Number of Book objects: "
             << objectCount << endl;
    }

    // Friend Class
    friend class BookViewer;
};

// Initialize Static Data Member
int Book::objectCount = 0;

class BookViewer {
public:
    void showPrivateDetails(const Book &b) {
        cout << "Friend class access -> Title: "
             << b.title
             << ", Book ID: " << b.bookId << endl;
    }
};

int main() {
    Book b1("Wings of Fire", 101);
    Book b2("The Alchemist", 102);

    cout << "Book details using inline function:" << endl;
    b1.display();
    b2.display();

    Book::displayObjectCount();

    BookViewer viewer;
    viewer.showPrivateDetails(b1);

    return 0;
}
