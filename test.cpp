#include "generalTree.h"
#include <iostream>

using namespace std;

/*Test Data Class*/

struct testData {
  int card;
  int suit;
};

/*Print Tree Function*/

void printTree(linkedList<treeNode<testData>> * loopList, int tabs) {
  if (loopList == nullptr) {
    return;
  }
  for (uint8_t i = 0; i < loopList->size(); i++) {
    treeNode<testData> * test = loopList->get(i)->dataPtr;
    for (uint8_t j = 0; j < tabs; j++) {
      cout << "\t";
    }
    cout << "Card: " << ((testData*)test->dataPtr)->card << " Suit: " << ((testData*)test->dataPtr)->suit << "\n";
    printTree(test->nodes, tabs + 1);
  }
}

/*Main Test Code*/

int main() {
  generalTree<testData> * testTree = new generalTree<testData>();
  int cardData[10] = {1, 5, 8, 7, 1, 10, 13, 2, 9, 4};
  int suitData[10] = {3, 1, 3, 2, 0, 0, 1, 2, 0, 3};
  for (uint8_t i = 0; i < 10; i++) {
    testData * testAdd = new testData();
    testAdd->card = cardData[i];
    testAdd->suit = suitData[i];
    if (i < 5) {
      int dir[] = {};
      testTree->add(dir, sizeof(dir)/sizeof(dir[0]), testAdd);
    } else {
      int dir[1] = {1};
      testTree->add(dir, sizeof(dir)/sizeof(dir[0]), testAdd);
    }
  }
  cout << "Inital data added:\n";
  printTree(testTree->root, 1);

  testData * testSet = new testData();
  testSet->card = 56;
  testSet->suit = 5;
  int dirSet[2] = {1,1};
  testTree->set(dirSet, sizeof(dirSet)/sizeof(dirSet[0]), testSet);
  cout << "After set [1,1]:\n";
  printTree(testTree->root, 1);

  testData * testInsert = new testData();
  testInsert->card = 100;
  testInsert->suit = 6;
  int dirInsert[1] = {3};
  testTree->insert(dirInsert, sizeof(dirInsert)/sizeof(dirInsert[0]), testInsert);
  cout << "After insert [3]:\n";
  printTree(testTree->root, 1);

  int dirRemove[1] = {4};
  testTree->remove(dirRemove, sizeof(dirRemove)/sizeof(dirRemove[0]));
  cout << "After remove [4]:\n";
  printTree(testTree->root, 1);

  int dirSwap1[2] = {1, 1};
  int dirSwap2[1] = {3};
  testTree->swap(dirSwap1, sizeof(dirSwap1)/sizeof(dirSwap1[0]), dirSwap2, sizeof(dirSwap2)/sizeof(dirSwap2[0]));
  cout << "After swap [1,1] and [3]:\n";
  printTree(testTree->root, 1);

  cout << "Before clear:\n";
  cout << "isEmpty: " << testTree->isEmpty() << "\n";
  testTree->clear(&testTree->root);
  cout << "After clear:\n";
  cout << "isEmpty: " << testTree->isEmpty() << "\n";
}