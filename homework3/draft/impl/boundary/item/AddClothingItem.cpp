#include <fstream>
#include "AddClothingItem.h"
#include <sstream>

using namespace std;

void AddClothingItem::addNewClothingItem() {
    string itemName, companyName, priceStr, quantityStr;
    in >> itemName >> companyName >> priceStr >> quantityStr;

    int price, quantity;

    stringstream priceStringStream, quantityStringStream;

    priceStringStream << priceStr;
    priceStringStream >> price;

    quantityStringStream << quantityStr;
    quantityStringStream >> quantity;

    ClothingItem::createClothingItem(itemName, companyName, price, quantity);

    out << "> " << itemName << " " << companyName << " " << priceStr << " " << quantityStr << "\n\n";
}
