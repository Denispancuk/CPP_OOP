#include "Library.h"

Library::Library()
{
	name = "Noname";
	address = "No address";
	books = nullptr;
	countBooks = 0;
}

Library::Library(string name, string address) {
	this->name = name;
	this->address = address;
	books = nullptr;
	countBooks = 0;
}

Library::Library(const Library& other)
{
	this->name = other.name;
	this->address = other.address;
	this->countBooks = other.countBooks;
	this->books = new Book[countBooks];
	for (int i = 0; i < countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
	cout << "Copy constructor" << endl;
}

Library& Library::operator=(const Library& other) {
	this->name = other.name;
	this->address = other.address;
	this->countBooks = countBooks;
	if (books != nullptr)
	{
		delete[] books;
	}
	for (int i = 0; i < countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
	cout << "Operator = " << endl;
	return*this;
}

void Library::ShowLibrary() const {
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	for (int i = 0; i < countBooks; i++)
	{
		books[i].ShowInfo();
		cout << endl;
	}
}

void Library::AddBook(Book b)
{
	Book* temp = new Book[countBooks + 1];
	for (int i = 0; i < countBooks; i++)
	{
		temp[i] = books[i];
	}
	temp[countBooks] = b;
	if (books != nullptr)
	{
		delete[] books;
	}
	countBooks++;
	books = temp;
}

Library::~Library() {
	if (books != nullptr)
	{
		delete[] books;
	}
}
