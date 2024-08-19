//9
// use oops concept based program to display the cheapest book available ona a subject
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string subject;
    float price;

public:
    void setDetails() { // details of the book
        cout << "Enter the title of the book: ";
        cin>>title;
        cout << "Enter the subject of the book: ";
        cin>>subject;
        cout << "Enter the price of the book: ";
        cin >> price;
    }

    string getSubject() { // to get the subject name
        return subject;
    }

    float getPrice() {// to get the price of book
        return price;
    }

    string getTitle() {// to get the title of book
        return title;
    }
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    Book books[n];
    for (int i = 0; i < n; i++) {
        cout << "For book " << i + 1 << ":" << endl;
        books[i].setDetails();
    }

    string subject;
    cout << "Enter the subject to find the cheapest book: ";
    cin>>subject;

    float minPrice = -1;
    string cheapestBook;
    // finding the price and name of the cheapest book according to the subject
    for (int i = 0; i < n; i++) {
        if (books[i].getSubject() == subject) {
            if (minPrice == -1 || books[i].getPrice() < minPrice) {
                minPrice = books[i].getPrice();
                cheapestBook = books[i].getTitle();
            }
        }
    }

    if (minPrice != -1) {
        cout << "The cheapest book on " << subject << " is \"" << cheapestBook << "\" with a price of " << minPrice << "." << endl;
    } else {
        cout << "No books found on the subject \"" << subject << "\"." << endl;
    }

    return 0;
}
