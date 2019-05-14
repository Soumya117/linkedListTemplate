#include <vector>
#include <iostream>
#include <memory>

namespace linked
{
    template<class Type>
    class TemplateLinkedList {
    private:
        struct Node {
            Type data;
            Node *next;
        };

        bool isEmpty();
        Node *getLastNode(Node *);
        Node *iterateDiff(Node *, const int &);
        Node *head = nullptr;

        ~TemplateLinkedList();

    public:
        void push(const std::vector<Type> &list);
        Node *append(const std::vector<Type> &list);
        void deleteFromFront();
        void deleteFromBack();
        int length(Node *);
        void display(Node *);
        void mergeList(const int &index, Node *mergeIn);
        Type getMergeIndexData(Node *mergeIn);
    };

    template<typename Type>
    void TemplateLinkedList<Type>::push(const std::vector<Type> &list) {
        for (const auto data : list) {
            auto node = new Node();
            node->data = data;
            node->next = head;
            head = node;
        }
        display(head);
    }

    template<typename Type>
    typename TemplateLinkedList<Type>::Node *TemplateLinkedList<Type>::append(const std::vector<Type> &list) {
        for (const auto data : list) {
            auto last = getLastNode(head);
            if (last == nullptr) {
                auto node = new Node();
                node->data = data;
                head = node;
            } else {
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
    void TemplateLinkedList<Type>::deleteFromFront() {
        if (isEmpty())
            return;
        auto node = head->next;
        delete head;
        head = node;
        display(head);
    }

    template<typename Type>
    void TemplateLinkedList<Type>::deleteFromBack() {
        if (isEmpty())
            return;
        Node *previous = nullptr;
        auto node = head;
        while (node->next != nullptr) {
            previous = node;
            node = node->next;
        }
        previous->next = nullptr;
        delete node;
        display(head);
    }

    template<typename Type>
    int TemplateLinkedList<Type>::length(Node *head) {
        if (!head) {
            std::cout << "List is empty.." << std::endl;
            return 0;
        }
        auto node = head;
        auto count(0);
        while (node != nullptr) {
            count++;
            node = node->next;
        }
        return count;
    }

    template<typename Type>
    void TemplateLinkedList<Type>::display(Node *head) {
        if (!head) {
            std::cout << "List is empty.." << std::endl;
            return;
        }
        auto node = head;
        while (node != nullptr) {
            std::cout << node->data << std::endl;
            node = node->next;
        }
        std::cout << std::endl;
    }

    template<typename Type>
    void TemplateLinkedList<Type>::mergeList(
            const int &index,
            Node *mergeIn) {
        if (!index) {
            std::cout << "Index cannot be 0" << std::endl;
            return;
        }
        auto len = length(head);
        if (index >= len) {
            std::cout << "Index is out of range.." << std::endl;
            return;
        }
        auto parentHead = head;
        auto headToMerge = mergeIn;
        auto tailToMerge = getLastNode(headToMerge);
        int count{0};
        while (parentHead != nullptr) {
            if (count == index) {
                tailToMerge->next = parentHead;
                display(headToMerge);
                return;
            }
            parentHead = parentHead->next;
            count++;
        }
        display(headToMerge);
    }

    template<typename Type>
    typename TemplateLinkedList<Type>::Node *TemplateLinkedList<Type>::iterateDiff(Node *nodeHead, const int &diff) {
        auto node = nodeHead;
        for (int i = 0; i < abs(diff); i++) {
            node = node->next;
        }
        return std::move(node);
    }

    template<typename Type>
    bool TemplateLinkedList<Type>::isEmpty() {
        return head == nullptr;
    }

    template<typename Type>
    typename TemplateLinkedList<Type>::Node *TemplateLinkedList<Type>::getLastNode(Node *head) {
        auto node = head;
        if (isEmpty()) {
            return head;
        } else {
            while (node->next != nullptr) {
                node = node->next;
            }
        }
        return node;
    }

    template<typename Type>
    Type TemplateLinkedList<Type>::getMergeIndexData(linked::TemplateLinkedList<Type>::Node *mergeInHead) {
        auto len1 = length(head);
        auto len2 = length(mergeInHead);

        auto diffIndex = len1 - len2;
        auto node1 = head;
        auto node2 = mergeInHead;
        if (diffIndex > 0)
            node1 = iterateDiff(head, diffIndex);
        else
            node2 = iterateDiff(mergeInHead, diffIndex);
        while (node1 != nullptr && node2 != nullptr) {
            if (node1 == node2) {
                return node1->data;
            }
            node1 = node1->next;
            node2 = node2->next;
        }
    }


    template<typename Type>
    TemplateLinkedList<Type>::~TemplateLinkedList() {
        auto node = head;
        while (node != nullptr) {
            delete node;
            node = node->next;
        }
    }


}