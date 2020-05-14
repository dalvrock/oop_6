#pragma once
#include <iostream>

using namespace std;

template<typename T>
class List
{
public:
	List();
	~List();

	// видалення першого елемента в списку
	void pop_front();

	// додавання елемента в кінець списку
	void push_back(T data);

	// очистити список
	void clear();

	// отримати кількість елементів у списку
	int GetSize() { return Size; }

	// перевантажений оператор []
	T& operator [] (const int index);

	// додавання елемента в початок списку
	void push_front(T data);

	// додавання елемента в список за вказаним індексом
	void insert(T data, int index);

	// видалення елемента в списку за вказаним індексом
	void removeAt(int index);

	// видалення останнього елемента в списку
	void pop_back();

private:

	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T>* head;
};
