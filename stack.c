#include<stdio.h>
int s[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main(){
    printf("Ener the number of elements in the stack ");
    scanf("%d",&n);
    while (choice !=1)
    {
        printf("push 2 pop 3 show 4 exit");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                  push();
                  break;
            case 2:
                  pop();
                  break;
            case 3: 
                  show();
                  break;
            case 4:
                  printf("exit");
            default:
                  printf("Invalid code");
                  break;
        }
        void show()
        {
            for (i=top;i>=0;i--)
            printf("%d",s[i]);
            if (top==-1);
            printf("Stack is Empty");
            }
            void(push())
            int element =10
            if (top==n)
            printf("overflow");
            break;
            else
            (top =top++);
            s[top]=element
            void(pop){
                int element
                if (top==-1)
                printf("overflow")
                break;
                else
                
            }
    }
}
