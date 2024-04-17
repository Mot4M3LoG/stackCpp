#include "stack.h"
#include <iostream>
#include <stdlib.h>

#define MEM_INCR 5

using namespace std;

Stack::Stack()
{
	top = 0;
	contents = (int*)malloc(MEM_INCR * sizeof(int));
	capacity = MEM_INCR;
}

Stack::~Stack()
{
	free(this->contents);
}

bool Stack::isEmpty() const
{
	if (this->top == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::push(int element)
{
	if (this->top == this->capacity) {
		this->contents = (int*)realloc(
			this->contents, (MEM_INCR + this->capacity) * sizeof(int));
		if (this->contents == NULL) {
			printf("Unable to allocate memory, aborting");
			exit(2);
		}
		this->capacity = this->capacity + MEM_INCR;
	}
	this->contents[this->top] = element;
	this->top = this->top + 1;
}

int Stack::pop()
{
	if (this->top == 0) {
		printf("cannot pop from an empty stack.\n");
		exit(2);
	}
	this->top = this->top - 1;
	int holder = this->contents[this->top];
	this->contents[this->top] = 0;
	return holder;
}

Stack::Stack(Stack &s)
{
	this->top = s.top;
	this->capacity = s.capacity;
	this->contents = (int*)malloc(capacity * sizeof(int));
	for (int i = 0; i < (s.top); i++) {
		this->contents[i] = s.contents[i];
	}
}

void Stack::operator=(const Stack &rs){
	if (this != &rs){
		this->top = rs.top;
		
		if (this->capacity <= rs.capacity)
		{
			this->contents = (int*) realloc(this->contents, rs.capacity * sizeof(int));
			//ewentualnie tu dopisac error handling ale idk to rozpierdziela wszystko
		}
		this->capacity = rs.capacity;
		for (int i = 0; i < (rs.top); i++) {
			this->contents[i] = rs.contents[i];
		}
	}
}
