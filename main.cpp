#include <iostream>

using namespace std;

#include "BookFactory.cpp"


//Descomentar tipo de libro que se desea generar
#define THICKCOVER_BOOK 1
#define THINCOVER_BOOK 1



int main() {
	//#ifdef THICKCOVER_BOOK
		BookFactory* factory = new ThickCoverBookFactory;
	//#elif THINCOVER_BOOK
		BookFactory* factory = new ThinCoverBookFactory;
	//#endif

	Book *book = factory->createWholeBook();
	book->printDetails();

	return 0;
}
