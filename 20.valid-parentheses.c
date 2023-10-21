/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */

// @lc code=start

//def '(' = 1, '[' = 2, '{' = 3
struct stack{
    struct stack *pointer;
    int size;
};
typedef struct stack stack;


bool isValid(char * s){
    int i = 0;

    stack *last = (stack*)malloc(1*sizeof(stack));
    last->pointer = NULL;
    last->size = 0;

    while(s[i] != '\0'){
        if(s[i] == '('){
            stack *new = (stack*)malloc(1*sizeof(stack));
            new -> pointer = last;
            new -> size = 1;
            last = new;
        }
        if(s[i] == '['){
            stack *new = (stack*)malloc(1*sizeof(stack));
            new -> pointer = last;
            new -> size = 2;
            last = new;
        }
        if(s[i] == '{'){
            stack *new = (stack*)malloc(1*sizeof(stack));
            new -> pointer = last;
            new -> size = 3;
            last = new;
        }

        if((s[i] == ')') && (last -> size == 1)){
            stack *free_stack = last;
            last = last->pointer;
            free(free_stack);
        }
        else if((s[i] == ')') && (last -> size != 1)){
            while(last != NULL){
                stack *free_stack = last;
                last = last->pointer;
                free(free_stack);
            }
            return false;
        }
        if((s[i] == ']') && (last -> size == 2)){
            stack *free_stack = last;
            last = last->pointer;
            free(free_stack);
        }
        else if((s[i] == ']') && (last -> size != 2)){
            while(last != NULL){
                stack *free_stack = last;
                last = last->pointer;
                free(free_stack);
            }
            return false;
        }
        
        if((s[i] == '}') && (last -> size == 3)){
            stack *free_stack = last;
            last = last->pointer;
            free(free_stack);
        }
        else if((s[i] == '}') && (last -> size != 3)){
            while(last != NULL){
                stack *free_stack = last;
                last = last->pointer;
                free(free_stack);
            }
            return false;
        }
        i++;
    }

    if(last -> size != 0){
            while(last != NULL){
                stack *free_stack = last;
                last = last->pointer;
                free(free_stack);
            }
            return false;
        }

    return true;
}
// @lc code=end

