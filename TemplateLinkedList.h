#include <vector>
#include <iostream>
#include <memory>

namespace linked
{

template <class Type>
class TemplateLinkedList
{
private:
  struct Node
  {
    Type data;
    Node* next;
  };

  bool isEmpty();
  Node* getLastNode();
  Node* head;

  ~TemplateLinkedList();

public:


  void push(std::vector<Type> list);
  void append(std::vector<Type> list);
  void deleteFromFront();
  void deleteFromBack();
  void display();
};
template <typename Type>
bool TemplateLinkedList<Type>::isEmpty()
{
  return head == nullptr;
}

template <typename Type>
void TemplateLinkedList<Type>::display()
{
  auto node = head;
  auto count(0);
  while(node != nullptr)
  {
    std::cout << count++ << ": " << node->data << std::endl;
    node = node->next;
  }
  std::cout<<std::endl;
}

template <typename Type>
typename TemplateLinkedList<Type>::Node* TemplateLinkedList<Type>::getLastNode()
{
  auto node = head;
  if(isEmpty())
    return head;

  else
  {
    while(node->next!= nullptr)
    {
      node = node->next;
    }
  }
  return node;
}
template <typename Type>
void TemplateLinkedList<Type>::push(std::vector<Type> list)
{
  for (const auto data : list)
  {
    auto node = new Node();
    node->data = data;
    node->next = head;
    head = node;
  }
  display();
}

template <typename Type>
void TemplateLinkedList<Type>::append(std::vector<Type>list)
{
  auto last = getLastNode();

  for(const auto data : list)
  {
    auto node = new Node();
    node->data = data;
    last->next = node;
    node->next = nullptr;
    last = node;
  }
  display();
}

template <typename Type>
void TemplateLinkedList<Type>::deleteFromBack()
{
  if (isEmpty())
    return;

  auto previous = new Node();
  auto node = head;
  while(node->next != nullptr)
  {
    previous = node;
    node = node->next;
  }
  previous->next = nullptr;
  delete node;

  display();
}

template <typename Type>
void TemplateLinkedList<Type>::deleteFromFront()
{
  if (isEmpty())
    return;

  auto node = head->next;
  delete head;
  head = node;

  display();
}


template <typename Type>
TemplateLinkedList<Type>::~TemplateLinkedList()
{
  auto node = head;
  while(node!=nullptr)
  {
    delete node;
    node = node->next;
  }
}
}

