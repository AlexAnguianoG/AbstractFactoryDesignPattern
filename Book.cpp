#include <iostream>

using namespace std;



class Covers {
    protected:
        string color;
        int thickness;
    public:
        Covers(string color, int thickness):color(color),thickness(thickness){};
        string getColor(){return color;}
        int getThickness(){return thickness;}
};

class ThickCCovers : public Covers{
    public:
        ThickCCovers():Covers("Black",5) {}
};

class ThinCCovers : public Covers{
    public:
        ThinCCovers():Covers("Blue",2) {}
};




class Pages {
protected:
	string fontType;
	int quantity;
public:
	Pages(string fontType, int quantity):fontType(fontType),quantity(quantity) {}
	string getFontType(){return fontType;}
	int getQuantity(){return quantity;}
};


class ThickCPages : public Pages{
    public:
        ThickCPages():Pages("Times New Roman",100) {}
};

class ThinCPages : public Pages{
    public:
        ThinCPages():Pages("Arial",400) {}
};




class Book {
    protected:
        string bookType;
        Covers *covers;
        Pages *pages;
    public:
        Book(string bookType):bookType(bookType) {}
        void setCovers(Covers* t) { covers = t;}
        void setPages(Pages* b) {	pages = b;}
        void printDetails(){
            cout << "Book type: " << bookType << endl;
            cout << "Covers - Color: " << covers->getColor() << ". Thickness: " << covers->getThickness() << " mm" << endl;
            cout << "Pages - Quantity: " << pages->getQuantity() << " pages" << ". Font type: " << pages->getFontType() << endl << endl;
        }
};
