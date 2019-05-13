#include <iostream>
#include "TemplateLinkedList.h"
#include <string>

using namespace std;
using namespace linked;

namespace {
    void test_linkedlist_int() {
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

    void test_linkedlist_string() {

        auto linkedList = new TemplateLinkedList<string>();

        std::vector<string> list1 = {"ironman", "am", "i"};
        std::vector<string> list2 = {"i", "am", "inevitable"};
        linkedList->push(list1);
        linkedList->append(list2);
        linkedList->deleteFromFront();
        linkedList->deleteFromBack();

    }

    void mergeLists()
    {
        auto linkedList1 = new TemplateLinkedList<int>();
        auto linkedList2 = new TemplateLinkedList<int>();

        std::vector<int> list1 = {1, 2, 5, 6, 7};
        linkedList1->append(list1);

        std::vector<int> list2 = {1, 4};
        auto listToMerge = linkedList2->append(list2);

        linkedList1->mergeList(2, listToMerge);
        auto index = linkedList1->getMergeIndex(listToMerge);
        std::cout << "Merged at: " << index << std::endl;
    }
}

int main()
{
    mergeLists();
    return 0;
}