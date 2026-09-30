#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

LinkedList::LinkedList(int A[], int n)
{
    if (n == 0)
    {
        first = NULL;
        return;
    }

    Node *last, *t;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

LinkedList::~LinkedList()
{
    Node *p = first;

    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display()
{
    Node *p = first;

    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;
}

int LinkedList::Length()
{
    Node *p = first;
    int len = 0;

    while (p)
    {
        len++;
        p = p->next;
    }

    return len;
}

void LinkedList::Insert(int index, int x)
{
    if (index < 0 || index > Length())
        return;

    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        Node *p = first;

        for (int i = 0; i < index - 1; i++)
            p = p->next;

        t->next = p->next;
        p->next = t;
    }
}

int LinkedList::Delete(int index)
{
    if (index < 1 || index > Length())
        return -1;

    Node *p = first;
    Node *q = NULL;
    int x;

    if (index == 1)
    {
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        x = p->data;
        delete p;
    }

    return x;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};

    LinkedList l(A, 5);

    l.Display();

    l.Insert(3, 10);
    l.Display();

    cout << "Deleted element: " << l.Delete(4) << endl;
    l.Display();

    return 0;
}