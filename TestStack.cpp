#include <iostream>
#include "stack.h"

using namespace std;

int main(){
	Stack stack1;
	
	/*cout << "stack is empty? " << stack.isEmpty() << endl;
	cout << "pushing..." << endl;
	stack.push(0);
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.push(7);
	cout << "stack is empty? " << stack.isEmpty() << endl;
	int test1 = stack.pop();
	int test2 = stack.pop();
	int test3 = stack.pop();
	cout << "3 consecutive pops: " << test1 << " " << test2 << " " << test3 << endl;
	cout << "pushing..." << endl;
	stack.push(8);
	stack.push(9);
	test1 = stack.pop();
	test2 = stack.pop();
	test3 = stack.pop();
	cout << "3 consecutive pops: " << test1 << " " << test2 << " " << test3 << endl;
	cout << "stack is empty? " << stack.isEmpty() << endl;*/
	
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	
	Stack s2(s1);
	
	int test1 = s1.pop();
	int test2 = s1.pop();
	int test3 = s1.pop();
	int test4 = s2.pop();
	int test5 = s2.pop();
	int test6 = s2.pop();
	
	cout << "3 consecutive pops: " << test1 << " " << test2 << " " << test3 << endl;
	cout << "3 consecutive pops: " << test4 << " " << test5 << " " << test6 << endl;
	
	s1.push(4);
	s1.push(5);
	s1.push(6);
	
	Stack s3 = s1;
	
	int test7 = s3.pop();
	int test8 = s3.pop();
	int test9 = s3.pop();
	test1 = s1.pop();
	test2 = s1.pop();
	test3 = s1.pop();
	
	cout << "3 consecutive pops (s1): " << test1 << " " << test2 << " " << test3 << endl;
	cout << "3 consecutive pops (s3): " << test7 << " " << test8 << " " << test9 << endl;
	
	s1.push(0);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	s1.push(7);
	s1.push(8);
	s1.push(9);
	
	Stack s4;
	s4.push(10);
	s4 = s1;
	
	cout << "ultimate test (should be 9): "<< s4.pop() << endl;
	cout << "ultimate test (should be 8): "<< s4.pop() << endl;
	cout << "ultimate test (should be 9): "<< s1.pop() << endl;
	
	Stack s5;
	Stack s6;
	
	s5.push(25);
	/*s5.push(0);
	s5.push(1);
	s5.push(2);
	s5.push(3);
	s5.push(4);
	s5.push(5);
	s5.push(6);
	s5.push(7);*/
	
	s5 = s6;
	
	//cout << "ultimate test (should be 25): "<< s5.pop() << endl;
	//cout << "ultimate test (should be exit): "<< s5.pop() << endl;
	cout << "stack is empty?(should be 1) " << s5.isEmpty() << endl;
	
	return 0;
}
