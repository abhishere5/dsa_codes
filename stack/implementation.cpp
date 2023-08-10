// This is the very basic implementaion of stack with its operations using simple list
// The stack can also be implemented by using linked list..
// Time complexity of push() -- 0(1)
// Time complexity of pop() -- 0(1)
// Time complexity of top_element -- 0(1)
// Time complexity of total -- 0(n)

#include<iostream>
using namespace std;

int stack[1000];
int top = -1;

void push(){
    if(top >= 1000){
        cout << "The stack is full..." << endl;
    }
    else{
        top++;
        cout << "Enter the element in the stack:" << endl;
        cin >> stack[top];
        cout << "Push operation is successfull.." << endl;
    }
}

void pop(){
    if(top < 0){
        cout << "Stack is empty, nothing to pop" << endl;
    }
    else{
        cout << "Pop operation successful , popped element is: " << stack[top] << endl;
        top--;
    }

}

void top_element(){
    if(top < 0){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Top element is :" << stack[top] << endl;
    }
}

void total(){
    if(top < 0){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Elements in the stack are:" << endl;
        for(int i = 0;i<=top;i++){
            cout << stack[i] << ", ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    while(1){
        cout << "Press 1 for push operation: " << endl;
        cout << "Press 2 for pop operation: " << endl;
        cout << "Press 3 for Top element: " << endl;
        cout << "Press 4 for total number of elements in the stack: " << endl;
        cout << "Press 5 to exit: " << endl;
        int num;
        cin >> num;
        if(num == 1){
            push();
        }
        else if(num == 2){
            pop();
        }
        else if(num == 3){
            top_element();
        }
        else if(num == 4){
            total();
        }
        else if(num == 5){
            break;
        }
        else{
            cout << "Invalid choice!! Please enter a valid choice: " << endl;
        }
        return 0;
    }

}