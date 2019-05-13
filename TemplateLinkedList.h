#include <vector>
#include <iostream>
#include <memory>

namespace linked
{
template<class Type>
class TemplateLinkedList
{
private:
  struct Node
  {
    Type data;
    Node* next;
  };

  bool isEmpty();
  Node* getLastNode(Node*);
  Node* head = nullptr;

  ~TemplateLinkedList();
public:
  void push(const std::vector<Type>& list);
  Node* append(const std::vector<Type>& list);
  void deleteFromFront();
  void deleteFromBack();
  int display(Node*);
  Node* mergeList(const int& index,
                  Node* mergeIn);
  int getMergeIndex(Node* mergeIn);
};

template<typename Type>
bool TemplateLinkedList<Type>::isEmpty()
{
  return head == nullptr;
}

template<typename Type>
int TemplateLinkedList<Type>::display(Node* head)
{
  auto node = head;
  auto count(0);
  while (node != nullptr)
  {
    std::cout << count++ << ": " << node->data << std::endl;
    node = node->next;
  }
  std::cout << std::endl;
  return count;
}

template<typename Type>
typename TemplateLinkedList<Type>::Node* TemplateLinkedList<Type>::getLastNode(Node* head)
{
  auto node = head;
  if (isEmpty())
  {
    return head;
  }
  else
  {
    while (node->next != nullptr)
    {
      node = node->next;
    }
  }
  return node;
}

template<typename Type>
void TemplateLinkedList<Type>::push(const std::vector<Type>& list)
{
  for (const auto data : list)
  {
    auto node = new Node();
    node->data = data;
    node->next = head;
    head = node;
  }
  display(head);
}

template<typename Type>
typename TemplateLinkedList<Type>::Node* TemplateLinkedList<Type>::append(const std::vector<Type>& list)
{
  for (const auto data : list)
  {
    auto last = getLastNode(head);
    if (last == nullptr)
    {
      Node* node = new Node();
      node->data = data;
      head = node;
    }
    else
    {
      auto node = new Node();
      node->data = data;
      last->next = node;
      node->next = nullptr;
    }
  }
  display(head);
  return head;
}

template<typename Type>
void TemplateLinkedList<Type>::deleteFromBack()
{
  if (isEmpty())
    return;
  Node* previous = nullptr;
  auto node = head;
  while (node->next != nullptr)
  {
    previous = node;
    node = node->next;
  }
  previous->next = nullptr;
  delete node;
  display(head);
}

template<typename Type>
void TemplateLinkedList<Type>::deleteFromFront()
{
  if (isEmpty())
    return;
  auto node = head->next;
  delete head;
  head = node;
  display(head);
}

template<typename Type>
TemplateLinkedList<Type>::~TemplateLinkedList()
{
  auto node = head;
  while (node != nullptr)
  {
    delete node;
    node = node->next;
  }
}

template<typename Type>
typename TemplateLinkedList<Type>::Node* TemplateLinkedList<Type>::mergeList(
  const int& index,
  Node* mergeIn)
{
  auto parentNode = head;
  auto headToMerge = mergeIn;
  auto tailToMerge = getLastNode(headToMerge);
  int count{0};
  while (parentNode != nullptr)
  {
    count++;
    parentNode = parentNode->next;
    if (count == index)
    {
      tailToMerge->next = parentNode;
    }
  }
  display(headToMerge);
}

template<typename Type>
int TemplateLinkedList<Type>::getMergeIndex(linked::TemplateLinkedList<Type>::Node *mergeIn)
{
    if(head == nullptr || mergeIn == nullptr)
    {
        return -1;
    }

    auto len1 = display(head);
    auto len2 = display(mergeIn);

    auto diffIndex = abs(len1 - len2);

    auto node1 = head;
    for (auto i = 0; i  < diffIndex; i++)
    {
        node1 = node1->next;
    }
    int count (0);
    while(node1 != nullptr && mergeIn != nullptr)
    {
       if(node1 == mergeIn)
       {
           return count + diffIndex;
       }
        count++;
        node1 = node1->next;
        mergeIn = mergeIn->next;
    }
}

}