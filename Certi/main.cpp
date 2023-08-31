#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int MAX_BUFFER_SIZE = 1024;
template<class T> class Queue
{
	public:
		int front;
		int rear;
		int size;
		T *values;
		
		Queue()
		{
			front = 0;
			rear = 0;
			size = MAX_BUFFER_SIZE;
			values = new T[size];
		}
		
		~Queue()
		{
			delete[] values;
		}
		
		void enqueue(T value){
			if(!isFull())
			{
				values[rear] = value;
				rear ++;
				rear %= size;
			} else
				cout << "Queue is full" << endl;
		}
		
		int dequeue()
		{
			int result = -1;
			if(!isEmpty())
			{
				result = values[front];
				front++;
				front %= size;
			} else
				cout << "Queue is empty" << endl;
				
			return result;
		}
		
		bool isEmpty()
		{
			return (front == rear);
		}
		
		bool isFull()
		{
			return (((rear + 1) % size) == front);
		}
};

template<typename T>
ostream& operator <<(ostream &out, Queue<T> &qq)
{
	T *temp = qq.values;
	out << "front [ ";
	for(int loop=qq.front; loop<qq.rear; loop++){
	    out << temp[loop];
	    if(loop < qq.rear-1) out << " | ";
	}
	out << " ] rear" << endl;
    return out;
}

template<class T> class Stack
{
	public:
		int top;
		int size;
		T *values;
		
		Stack()
		{
			top = -1;
			size = MAX_BUFFER_SIZE;
			values = new T[size];
		}
		
		~Stack()
		{
			delete[] values;
		}
		
		void push(T value){
			if(!isFull())
			{
				top++;
				values[top] = value;
				
			} else
				cout << "Queue is full" << endl;
		}
		
		int pop()
		{
			int result = -1;
			if(!isEmpty())
			{
				result = values[top];
				top--;
			} else
				cout << "Queue is empty" << endl;
				
			return result;
		}
		
		bool isEmpty()
		{
			return (top < 0);
		}
		
		bool isFull()
		{
			return (top == size-1);
		}
};

template<typename T>
ostream& operator <<(ostream &out, Stack<T> &st){
	T *temp = st.values;
	out << "¦£¦¡¦¡¦¡¦¤"	<< endl;
	for(int loop = st.top; loop >= 0; loop--)
	{
		out << "  " << temp[loop] << endl;
	}
	out << "¦¦¦¡¦¡¦¡¦¥" << endl;
	
	return out;
}


int main(int argc, char** argv) {
	
	//const int MAX_SIZE = 1024;
	
	//	Queue Test
	Queue<int> queue;
	queue.enqueue(1);
	queue.enqueue(3);
	queue.enqueue(5);
	queue.enqueue(7);
	queue.enqueue(9);
	
	cout << " Queue Test " << endl;
	do
	{
		cout << queue;
		int value = queue.dequeue();
		//cout << value << " ";
		
	} while(!queue.isEmpty());
	
	cout << endl;
	
	//	Stack Test
	Stack<int> stack;
	stack.push(1);
	stack.push(3);
	stack.push(5);
	stack.push(7);
	stack.push(9);
	
	cout << " Stack Test " << endl;
	do
	{
		cout << stack;
		int value = stack.pop();
		//cout << value << " ";
		
	} while(!stack.isEmpty());
	
	cout << endl;
	
	return 0;
}
