//---------------------------------------------------------------------------

#ifndef QueueH
#define QueueH
#include <iostream>
template <typename T>
class  Node
{
	public:
		T value;
		Node* next;
		Node* prev;
		Node(T value = T(), Node* next = nullptr, Node* prev = nullptr)
		{
			this->value = value;
			this->next = next;
			this->prev = prev;
		}
};

template<typename T>
class Queue
{
public:

	Node<T>* head;
	Node<T>* tail;
	int size;
	void PopFrontClear()
	{
		Node<T>* q = head;
		if (head!=head->next)
		{
		  head = head->next;
		  tail->next = head;
		  head->prev = tail;
		}
		delete q;
		size--;
	}

public:
	Queue()
	{
		head = nullptr;
		tail = nullptr;
		size = 0;
	}
	~Queue(){}

	void PushBack(T x)
	{
		if (head == nullptr && tail == nullptr)
		{
			head = new Node<T>(x);
			head->next = head;
            head->prev = head;
			tail = head;
		}
		else
		{
			tail->next = new Node<T>(x);
			Node<T>* q = tail;
			tail = tail->next;
			tail->prev = q;
			tail->next = head;
			head->prev = tail;
		}
		size++;
	}

	void Clear()
	{
		while (size>0)
		{
			PopFrontClear();
		}
	}

	int GetSize()
	{
		return size;
	}
};
//---------------------------------------------------------------------------
#endif
