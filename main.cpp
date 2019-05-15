#include <iostream>
#include "TemplateLinkedList.h"
#include "TemplateDoubleLinkedList.h"

using namespace std;
using namespace linked;
namespace
{
void test_linkedlist_int()
{
  {
    auto linkedList = new TemplateLinkedList<int>();

    std::vector<int> list1 = {1, 3, 5};
    std::vector<int> list2 = {6, 8, 9};
    linkedList->push(list1);
    linkedList->append(list2);
    linkedList->deleteFromFront();
    linkedList->deleteFromBack();
  }
}

void test_linkedlist_string()
{
  auto linkedList = new TemplateLinkedList<string>();

  std::vector<string> list1 = {"ironman", "am", "i"};
  std::vector<string> list2 = {"i", "am", "inevitable"};
  linkedList->push(list1);
  linkedList->append(list2);
  linkedList->deleteFromFront();
  linkedList->deleteFromBack();
}

//logic wont work if you merge at 0 because its just one list at
//the end.
//Index starts from 2nd node, means index1 = value 2;
void mergeIntData()
{
  auto linkedList1 = new TemplateLinkedList<int>();
  auto linkedList2 = new TemplateLinkedList<int>();

  std::vector<int> list1 = {1, 2, 5, 6, 7};
  std::cout << "List1: " << std::endl;
  linkedList1->append(list1);
  std::vector<int> list2 = {1, 4};
  std::cout << "List2: " << std::endl;
  auto listToMerge = linkedList2->append(list2);

  auto mergeIndex = 1;
  std::cout << "Merging at : " << mergeIndex << std::endl;
  linkedList1->mergeList(mergeIndex, listToMerge);
  auto index = linkedList1->getMergeIndexData(listToMerge);
  std::cout << "Merged data: " << index << "\n\n";
}

void mergeStringData()
{
  auto linkedList1 = new TemplateLinkedList<string>();
  auto linkedList2 = new TemplateLinkedList<string>();

  std::vector<string> list1 = {"A", "B", "C", "Am", "Os"};
  std::cout << "List1: " << std::endl;
  linkedList1->append(list1);
  std::vector<string> list2 = {"He", "She"};
  std::cout << "List2: " << std::endl;
  auto listToMerge = linkedList2->append(list2);

  auto mergeIndex = 1;
  std::cout << "Merging at : " << mergeIndex << std::endl;
  linkedList1->mergeList(mergeIndex, listToMerge);
  auto index = linkedList1->getMergeIndexData(listToMerge);
  std::cout << "Merged data: " << index << "\n\n";
}
}

void test_doublelinkedlist_int()
{
  const std::vector<int> data = {1,3,4,5};
  const auto& doubleList = new TemplateDoubleLinkedList<int>();
  doubleList->append(data);

  const std::vector<int> dataToPush = {6,7,8,9};
  doubleList->push(dataToPush);

  doubleList->deleteFromEnd();
  doubleList->deleteFromFront();
}

void test_doublelinkedlist_string()
{
  const std::vector<string> data = {"i", "am", "batman"};
  const auto& doubleList = new TemplateDoubleLinkedList<string>();
  doubleList->append(data);

  const std::vector<string> dataToPush = {"avengers", "assemble"};
  doubleList->push(dataToPush);

  doubleList->deleteFromEnd();
  doubleList->deleteFromFront();
}

int main()
{
  test_doublelinkedlist_string();
  return 0;
}