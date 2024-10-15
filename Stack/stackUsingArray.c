#include<stdio.h>
#define size 10
int stack[size];
int top=-1;

// IsFULL Function
int isFull(){
    if(top>=size-1){
        return 1;
    }
    return -1;
}

// PUSH into stack
void push(int data){
    if(isFull()==1){
        printf("%d Cannot push into stack. Stack is full\n",data);
        return;
    }
    stack[++top] = data;
}

// isEmpty function
int isEmpty(){
    if(top<0){
        return 1;
    }
    return -1;
}

// POP from stack
int pop(){
    if(isEmpty()==1){
        printf("Stack is Empty.");
        return -1;
    }
    int delEle;
    delEle = stack[top];
    stack[top--] = NULL; 
}

void printStack(){
    if(isEmpty()==1){
        printf("Stack is Empty");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d\t",stack[i]);
    }
    printf("\n");
}

// Peak
int peak(){
    if(isEmpty()==1){
        printf("Stack is Empty");
        return -1;
    }
    return stack[top];
}

int main(){
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    push(30);
    push(35);
    push(40);
    push(45);
    push(50);
    push(55);
    printStack();
    pop();
    printf("top ele = %d\n",peak());
    pop();
    printStack();
    return 0;
}