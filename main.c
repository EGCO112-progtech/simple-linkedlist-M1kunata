//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,ba,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    b.next=&d;
    d.value=11;
    d.next=NULL;
    printf("%d\n",head->next->next->value);
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    ba.next=&a;
    head=&ba;
    ba.value=2;
    printf("%d\n", head ->value ); //what value for 2 ba
    printf("%d\n", head ->next->value ); //what value for 5 a
    printf("%d\n",head->next->next->value);//8 b
    printf("%d\n",head->next->next->next->value);//11 d
    typedef struct node* NodePtr;
    typedef struct node Node;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything*/
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d",tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
    
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
       tmp=head;
       printf("\n\n");
         while(1){
            printf("%3d", tmp->value); 
            tmp=tmp->next;
            if(tmp==NULL)break;
           // What is missing???
        }
    //v = (struct node *)malloc(sizeof(struct node));    
    //v=(NodePtr)malloc(sizeof(struct node));
    
    //
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!*/
         //use a loop to help
        head =(NodePtr)malloc(sizeof(Node));
        tmp=head;
        for(i=0;i<3;i++)
        {
            tmp->value=i+3;
            tmp->next=(NodePtr)malloc(sizeof(Node));
            tmp=tmp->next;
            
        }
        tmp->value=i+3;
        tmp->next=NULL;
        tmp=head;
       printf("\n\n");
        while(1){
            printf("%3d", tmp->value); 
            tmp=tmp->next;
            if(tmp==NULL)break;
           // What is missing???
        }
    /*  Exercise VI Free all node !!*/
         //use a loop to help
           tmp=head;
       printf("\n\n");
        while(tmp!=NULL){
            head=head->next;
            printf("Free %d\n",tmp->value);
            free(tmp);
            tmp=head;
        }
    
    return 0;
}
