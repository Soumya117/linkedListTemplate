#include <iostream>
#include "TemplateLinkedList.h"
#include <string>

using namespace std;
using namespace linked;

int main()
{
//  {
//    auto linkedList = new TemplateLinkedList<int>();
//
//    std::vector<int> list1 = {1, 3, 5};
//    std::vector<int> list2 = {6, 8, 9};
//    linkedList->push(list1);
//    linkedList->append(list2);
//    linkedList->deleteFromFront();
//    linkedList->deleteFromBack();
//  }
//
//  {
//    auto linkedList = new TemplateLinkedList<string>();
//
//    std::vector<string> list1 = {"ironman", "am", "i"};
//    std::vector<string> list2 = {"i", "am", "inevitable"};
//    linkedList->push(list1);
//    linkedList->append(list2);
//    linkedList->deleteFromFront();
//    linkedList->deleteFromBack();
//  }

  //merging two lists
  {
    auto linkedList1 = new TemplateLinkedList<int>();
    auto linkedList2 = new TemplateLinkedList<int>();
    std::vector<int> list1 = {1, 2, 5, 6};
    linkedList1->append(list1);

    std::vector<int> list2 = {1, 4};
    auto listToMerge = linkedList2->append(list2);
    linkedList1->mergeList(3, listToMerge);
  }
  return 0;
}