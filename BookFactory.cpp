#include <iostream>

using namespace std;

#include "Book.cpp"



class BookFactory {
    private:
        Book *book;
    protected:
        virtual Covers * createCovers() = 0;
        virtual Pages * createPages() = 0;
    public:
        virtual Book* createWholeBook() = 0;
};




class ThickCoverBookFactory : public BookFactory {
	Covers * createCovers() {
		return new ThickCCovers();
	}
	Pages * createPages() {
		return new ThickCPages();
	}

	Book * createWholeBook() {
		Book *book = new Book("ThickCoverBook");
		book->setCovers(createCovers());
		book->setPages(createPages());
		return book;
	}
};


class ThinCoverBookFactory : public BookFactory {
	Covers * createCovers() {
		return new ThinCCovers();
	}
	Pages * createPages() {
		return new ThinCPages();
	}
	Book * createWholeBook() {
		Book *book = new Book("ThinCoverBook");
		book->setCovers(createCovers());
		book->setPages(createPages());
		return book;
	}
};
