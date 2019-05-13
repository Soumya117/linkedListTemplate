#include <iostream>
#include "TemplateLinkedList.h"

using namespace linked;
int main()
{
  auto linkedList = new TemplateLinkedList<int>();

  std::vector<int> list1 = {1, 3, 5};
  std::vector<int> list2 = {6, 8, 9};

  linkedList->push(list1);
  linkedList->append(list2);
  linkedList->deleteFromFront();
  linkedList->deleteFromBack();

  return 0;
}