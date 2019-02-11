#include <iostream>
#include "unsorted.h"
#include "ItemType.h"

using namespace std;
void SplitLists(UnsortedType list, ItemType item, UnsortedType list1, UnsortedType& list2);

int main() {
	std::cout << "Hello World!\n";
	UnsortedType example;

	ItemType itemI = ItemType();
	string iString;
	int n = 5;
	UnsortedType Test1;
	for (int i = 0; i < n; i++) 
	{
		iString = to_string(i);
		itemI.Initialize(iString);
		Test1.PutItem(itemI);
	}
	
	cout << "splitLists splits based on the item given" << endl;
	UnsortedType Test2;
	UnsortedType Test3;
	ItemType splitItem = ItemType();
	splitItem.Initialize("2");
	Test1.splitLists(Test1, splitItem, Test2, Test3);
	cout << Test2.GetLength() << endl;
	cout << Test3.GetLength() << endl;

	int test1Length = Test1.GetLength();
	cout << "DeleteItem still deletes an item" << endl;
	cout << "Test1 length before deleteItem" << test1Length << endl;
	Test1.DeleteItem(itemI);
	test1Length = Test1.GetLength();
	cout << "Test1 length after deleteItem" << test1Length << endl;
	
	cout << "DeleteItem does not delete an item if item given does not match any in list" << endl;
	ItemType notInList = ItemType();
	test1Length = Test1.GetLength();
	cout << "Test1 length before deleteItem" << test1Length << endl;
	notInList.Initialize("I should not be in list");
	Test1.DeleteItem(notInList);
	test1Length = Test1.GetLength();
	cout << "Test1 length after deleteItem" << test1Length << endl;
	

	cout << "DeleteItem delete an all if item if any are in list" << endl;
	Test1.PutItem(itemI);
	Test1.PutItem(itemI);
	Test1.PutItem(itemI);
	test1Length = Test1.GetLength();
	cout << "Test1 length before deleteItem" << test1Length << endl;
	Test1.DeleteItem(itemI);
	test1Length = Test1.GetLength();
	cout << "Test1 length after deleteItem" << test1Length << endl;
	
	

	system("pause");
	return 0;
}