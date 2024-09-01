#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack *ptr, int val) {
    if (isFull(ptr)) {
        printf("stack overflow element not inserted into the stack\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("stack underflow no element is present in the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peak(struct stack *ptr, int i) {
    
    if (i < 1 || i > ptr->top + 1) {
        printf("not a valid position\n");
        return -1;
    } else {
        return ptr->arr[ptr->top - (i - 1)];
    }
}

int main() {
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("Stack full: %d\n", isFull(sp));
    printf("Stack empty: %d\n", isEmpty(sp));

    push(sp, 50);
    push(sp, 55);
    push(sp, 60);
    push(sp, 70);
    push(sp, 80);
    push(sp, 90);
    push(sp, 10);
    push(sp, 20);
    push(sp, 30);
     push(sp, 40);
     push(sp, 41);
    int j;
    for (j = 1; j <= sp->top+1; j++) {
        printf("\nelement at position %d is %d \n", j, peak(sp, j));
    }
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
printf("popped value is %d\n",pop(sp));
    
    for (j = 1; j <= sp->top+1; j++) {
        printf("\nelement at position %d is %d \n", j, peak(sp, j));
    }
     printf("Stack full: %d\n", isFull(sp));
    printf("Stack empty: %d\n", isEmpty(sp));

    free(sp->arr);
    free(sp);

    return 0;
}

