/*DigitalLibrary//VirtualB00KShelf*/

//B00K - The noteable data presented for a brief comprehensive understanding of what a book is.
struct Book {
std::string title;
std::string genre;
std::string authorFirstName;
std::string authorLastName;
int edition;
std::string publicationDate;
};

struct Bookshelf {
std::string name;
std::vector<Book> books;
bool isPrivate;

//Constructor with default value reserved for "isprivate"
Bookshelf(std::string shelfName, bool privateStatus = false)
  : name(shelfName, isprivate(privateStatus) {}
std::string password;
};

void addBook(std::vector<Book>& Bookshelf) {
  Book newBook;

  std::cout << "Enter book title: ";
  std::cin >> newBook.title;

  std::cout << "Enter authors first name: ";
  std::cin >> newBook.authorFirstName;

  std::cout << "Enter authors last name: ";
  std::cin >> newBook.authorLastName;

  std::cout << "Enter edition (if available): ";
  std::cin >> newBook.edition;

  std::cout << "Enter publication date: ";
  std::cin >> newBook.publicationDate;

  Bookshelf.push_back(newBook);
}

void displayBookshelf(const std::vector<Book>& bookshelf) {
    for (const auto& book : bookshelf) {
        std::cout << "Title: " << book.title << std::endl;
        std::cout << "Author: " << book.authorFirstName << " " << book.authorLastName << std::endl;
        if (book.edition > 0) {
            std::cout << "Edition: " << book.edition << std::endl;
        }
        std::cout << "Publication Date: " << book.publicationDate << std::endl;
        std::cout << std::endl;
    }
}

void addShelf() {
    Bookshelf newShelf;
    
    std::cout << "Enter shelf name: ";
    std::cin >> newShelf.name;
    std::cout << "Is the shelf private? (1 for private, 0 for public): ";
    std:: cin >> newShelf.isPrivate;
    
    if (newShelf.isPrivate) {
        std::cout << "Enter password for shelf: ";
        std::cin << newShelf.password;
    }
    shelves.push_back(newShelf);
}

void addToShelf(int shelfIndex) {
    if(shelfIndex >= 0 && shelfIndex < shelves.size()) {
        addBook(shelves[shelfIndex].books);
        if(shelves[shelfIndex].isPrivate) {
            std::string enteredPassword;
            std::cout << "Enter ther password for self: ";
            std::cin >> enteredPassword;
            if (enteredPassword == shelves[shelfIndex].books); {
                addBook(shelves[shelfIndex].books);
        } else {
            std::cout << "Invalid password." << std::endl;
            }
        } else {
            addBook(shelves[shelfIndex].books);
        }
    } else {
        std::cout << "Invalid shelf index." << std::endl;
    }
}

void displayShelf(int shelfIndex) {
    if(shelfIndex >= 0 && shelfIndex < shelves.size()) {
        if(Shelves[selfIndex].isPrivate) {
            std::string enteredPassword;
            std::cout << "Enter the password for the shelf: ";
            std::cin >> entered password;
            if (enteredPassword == shelves[shelfIndex].password); {
                std:: cout << "Books in shelf ";
                std:: cin >> enteredPassword;
                if (enteredPassword == shelves[shelfIndex].password) {
                    std::cout << "Books in shelf " << shelves[shelfIndex].name << std::endl;
                }
        } else {
            std::cont << "Invalid password." << std::endl;}
    }else{
        std::cout << "Invalid shelf index." << std::endl;
        {
        }
        }
        }
        std::cout << "Books in shelf " << shelves[shelfIndex].name << std::endl;
        displayBookshelf(shelves[shelfIndex].books); {
    } else {;
        std::cout << "Invalid shelf index." << std::endl;
    }
}

int main() {
    int choice;

    do {
        std::cout << "1. Add Book to Shelf" << std::endl;
        std::cout << "2. Display Shelf" << std::endl;
        std::cout << "3. Add Shelf" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int shelfIndex;
                std::cout << "Enter the index of the shelf to add the book: ";
                std::cin >> shelfIndex;
                addToShelf(shelfIndex);
                break;
            }
            case 2: {
                int shelfIndex;
                std::cout << "Enter the index of the shelf to display: ";
                std::cin >> shelfIndex;
                displayShelf(shelfIndex);
                break;
            }
            case 3:
                addShelf();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
        }

        std::cout << std::endl;
    } while (choice != 4);

    return 0;
}
