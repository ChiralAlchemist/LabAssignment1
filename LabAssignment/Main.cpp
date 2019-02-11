#include <iostream>
#include "unsorted.h"
#include "ItemType.h"

using namespace std;
void SplitLists(UnsortedType list, ItemType item, UnsortedType list1, UnsortedType& list2);

int main() {
	std::cout << "Hello World!\n";
	UnsortedType example;

	ItemType item1 = ItemType();
	ItemType item2 = ItemType();
	ItemType item3 = ItemType();
	ItemType item4 = ItemType();
	ItemType item5 = ItemType();
	UnsortedType Test1;
	UnsortedType Test2;
	item1.Initialize("Hello");
	item2.Initialize("World");
	item3.Initialize("how");
	item4.Initialize("are");
	item5.Initialize("YOU");
	example.PutItem(item1);
	example.PutItem(item2);
	example.PutItem(item2);
	example.PutItem(item3);
	example.PutItem(item4);
	example.ResetList();
	/*ItemType t = example.GetNextItem();
	int length = example.GetLength();*/

	//example.splitSplitLists(example, item2, Test1, Test2);

	Test1.ResetList();
	ItemType x = Test1.GetNextItem();
	/*x.Print(cout);
	cout << " " << endl;
	Test1.GetNextItem().Print(cout);
	cout << " " << endl;*/

	/*Test2.ResetList();
	Test2.GetNextItem().Print(cout);
	Test2.GetNextItem().Print(cout);*/
	cout <<"length is " << example.GetLength() << endl;

	example.DeleteItem(item2);
	cout << "length is " << example.GetLength() << endl;
	system("pause");
	return 0;
}

void SplitLists(UnsortedType list, ItemType item, UnsortedType& list1, UnsortedType& list2) {

	/*for (int idx = 0; idx <= item; idx++) 
	{

	}*/
	//iterate throught the list
		//b4 item index
			//add items to list1 
		//After
			//add items to list2 
}