// The following declarations and definitions go into file 
// ItemType.h. 
#pragma once
#include <fstream>
#include <string>
const int MAX_ITEMS = 10;
enum RelationType { LESS, GREATER, EQUAL };
using namespace std;

class ItemType
{
public:
	ItemType();
	RelationType ComparedTo(ItemType) const;
	void Print(std::ostream&) const;
	void Initialize(string str);
private:
	string value;
};

