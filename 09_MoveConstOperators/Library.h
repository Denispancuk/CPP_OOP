#pragma once
#include "Book.h"
class Library
{
	string name;
	string address;
	Book* books;
	int countBooks;
public:
	Library();
	Library(string name, string address);
	Library(const Library& other);
	Library& operator =(const Library& other);
	Library(Library&& other)
	{
		this->name = other.name;
		this->address = address;
		this->countBooks = countBooks;
		this->books = other.books;
		other.books = nullptr;
		cout << "Move constructor" << endl;
	}
	void ShowLibrary()const;
	void AddBook(Book b);
	~Library();
};

