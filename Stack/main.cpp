#include<iostream>

using namespace std;

#define Max 100

class Stack{

    private:
    int top;
    int stack[Max];

    public:

    Stack(){
        top = -1;
    }

     bool isEmpty();

     bool isFull();

     void push(int ele);

     int pop();

     void printStack();

    int peek();

    int nextGreater(int *arr);

};


bool Stack :: isFull(){
    if(top == Max-1) return true;
    return false;
}

bool Stack :: isEmpty(){
    if(top == -1) return true;

    return false;
}

void Stack :: push(int ele){
    if(isFull()){cout<<"Stack is Overflow"; return;}
    top++;

    stack[top] = ele;

}

int Stack :: pop(){
    if(isEmpty()){cout<<"Stack is Underflow"; abort();}
    int x = stack[top];
    
    top--;
    return x;
}

void Stack :: printStack(){
    int i = top;
    while(i>=0){
        cout<<stack[i--]<<" ";
    }
}

int Stack :: peek(){
    if(!isEmpty()) return stack[top];
}

int Stack :: nextGreater(int *arr){
        
}

int main()
{
 
 Stack st;

 st.push(24);
 st.push(5);
 st.push(2);
 st.push(4);
 st.push(0);
 st.push(4);

 st.printStack();
  cout<<endl;
 st.pop();
 
  st.printStack();
cout<<endl;
  cout<<st.peek();

  return 0;
}