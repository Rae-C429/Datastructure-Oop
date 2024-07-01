#include<iostream>
using namespace std;
template<class T>class myList;
template<class T>
class myListNode{
	friend class myList<T>;
	public:
		myListNode(){
			num = 0;
			next = 0;
		};
	private:
		T num;
		myListNode<T>* next;
};

template<class T>
class myList{
	public:
		myList();
		~myList();
		void push_back(const T& n);
		void push_front(const T& n);
		void insert(int index, const T& n);
		void pop_back();
		void pop_front();
		void pop_index(int index);
		void print();
		int length();
	private:
		myListNode<T>* first;
};
template<class T>
myList<T>::myList():first(0){}

template<class T>
myList<T>::~myList(){
	myListNode<T>* temp;
	while(first){
		temp = first->next;
		delete first;
		first = temp;
	}
}

template<class T>
void myList<T>::push_back(const T& n){
	myListNode<T>* node = new myListNode<T>;
	node->num = n;
	node->next = 0;
	if(first){
		myListNode<T>* temp = first;
		while(temp->next != 0){
			temp = temp->next;
		}
		temp->next = node;
	}else{
		first = node;
	}
}

template<class T>
void myList<T>::push_front(const T& n){
	myListNode<T>* node = new myListNode<T>;
	node->num = n;
	if(first){
		node->next = first;
	}
	first = node;
}

template<class T>
void myList<T>::insert(int index, const T& n){
	myListNode<T>* node = new myListNode<T>;
	node->num = n;
	myListNode<T>* temp = first;
	int count = 0;
	while(temp != 0 && count < index){
        if(count == index-1){
            if(temp->next != NULL){
                node->next = temp->next;
            }
            temp->next = node;
            break;
        }
        count++;
        temp = temp->next;
	}
	if (temp == 0){
		first = node;
	}
}


template<class T>
void myList<T>::pop_back(){
	myListNode<T>* temp1 = first;
	myListNode<T>* temp2;
	if(first != 0 && first->next != 0){
		for(int count = 0; count < (length()-2); count++){
		 	temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = 0;
		delete  temp2;
	}else{
		delete temp1;
		first = 0;
	}
}

template<class T>
void myList<T>::pop_front(){
	myListNode<T>* temp = first;
	if(first != 0){
		first = temp->next;
		delete temp;
	}
}

template<class T>
void myList<T>::pop_index(int index){
	myListNode<T>* temp1 = first;
	int count = 0;
	while(temp1 != 0){
		if(count == index - 1){
            myListNode<T>* temp2 = temp1->next;
			temp1->next = temp1->next->next;
			delete temp2;
        }
        count++;
        temp1 = temp1->next;
        // }
	}

}

template<class T>
void myList<T>::print(){
	myListNode<T>* temp = first;
	while(temp != 0){
		cout << temp->num <<" ";
		temp = temp->next;
	}
}

template<class T>
int myList<T>::length(){
	myListNode<T>* temp;
	int len = 0;
	for(temp = first; temp != 0; temp = temp->next){
		len++;
	}
	return len;
}
