#include <vector>
#include <iostream>

namespace linked
{
template<class Type>
class TemplateDoubleLinkedList
{
private:
  struct Node
  {
    Type data;
    Node* next;
    Node* previous;
  };
  Node* head;
  Node* createNode(Type data);
public:
  void append(const std::vector<Type>& data);
  void push(const std::vector<Type>& data);
  void deleteFromFront();
  void deleteFromEnd();

  bool isEmpty();
  Node* getLastNode();
  void display();
  int getLength();
};

template<typename Type>
bool TemplateDoubleLinkedList<Type>::isEmpty()
{
  return head == nullptr;
}

template<typename Type>
typename TemplateDoubleLinkedList<Type>::Node*
TemplateDoubleLinkedList<Type>::createNode(Type data)
{
  auto node = new Node();
  node->data = data;
  node->next = nullptr;
  node->previous = nullptr;
}

template<typename Type>
void TemplateDoubleLinkedList<Type>::display()
{
  auto node = head;
  while (node != nullptr)
  {
    std::cout << node->data << " ";
    node = node->next;
  }
  std::cout << std::endl;
}

template<typename Type>
typename TemplateDoubleLinkedList<Type>::Node*
TemplateDoubleLinkedList<Type>::getLastNode()
{
  auto node = head;
  while (node->next != nullptr)
  {
    node = node->next;
  }
  return node;
}

template<typename Type>
int TemplateDoubleLinkedList<Type>::getLength()
{
  auto node = head;
  int count(0);
  while (node != nullptr)
  {
    node = node->next;
    count++;
  }
  return count;
}

template<typename Type>
void TemplateDoubleLinkedList<Type>::push(const std::vector<Type>& data)
{
  for (const auto& item : data)
  {
    auto new_node = createNode(item);
    new_node->next = head;
    head->previous = new_node;
    head = new_node;
  }
  display();
}

template<typename Type>
void TemplateDoubleLinkedList<Type>::append(const std::vector<Type>& data)
{
  for (const auto& item : data)
  {
    auto new_node = createNode(item);
    if (head == nullptr)
    {
      head = new_node;
    }
    else
    {
      auto last_node = getLastNode();
      last_node->next = new_node;
      new_node->previous = last_node;
    }
  }
  display();
}

template<typename Type>
void TemplateDoubleLinkedList<Type>::deleteFromFront()
{
  if (isEmpty())
  {
    std::cout << "List is empty.." << std::endl;
    return;
  }
  auto next_node = head->next;
  delete head;
  head = next_node;
  display();
}

template<typename Type>
void TemplateDoubleLinkedList<Type>::deleteFromEnd()
{
  if (isEmpty())
  {
    std::cout << "List is empty.." << std::endl;
    return;
  }
  auto last_node = getLastNode();
  auto previous_node = last_node->previous;
  delete last_node;
  previous_node->next = nullptr;
  display();
}
}