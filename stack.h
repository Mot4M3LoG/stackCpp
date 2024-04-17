#pragma once

using namespace std;

class Stack {
  public:
	Stack();
	~Stack();
	Stack(Stack& s);
	
	void operator=(const Stack &s);
	bool isEmpty() const;
	void push(int element);
	int pop();

  private:
	int top;
	int* contents;
	int capacity;
};

