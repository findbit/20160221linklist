#include"stdio.h"
#include"strings.h"
#include"stdlib.h"

struct node
{
    int data;
    struct node *pNext;

};

struct node * create_node(int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if(NULL == p)
    {
        printf("malloc error!");
        return(NULL);
    }
    /*清理申请到的堆内存*/
    memset(p,0,sizeof(struct node));
    p->data = data;
    p->pNext = NULL;
    p->pNext = NULL;

    return p;
    /******************************/
    /******************************/
}
void insert_tail(struct node *pH,struct node *new)
{
    int cnt = 0;


    struct node *p = pH;
    while(NULL != p->pNext )
    {
        p = p->pNext;
        cnt++;

    }
    p->pNext = new;
    pH->data = cnt + 1;


}
int main(void)
{
    struct node *pHeader = create_node(1);

    insert_tail(pHeader,create_node(2));
    insert_tail(pHeader,create_node(3));
    insert_tail(pHeader,create_node(4));
/*
    pHeader = create_node(1);


    pHeader->pNext = create_node(2567);


    pHeader->pNext->pNext  = create_node(3);
/******************************************/


    printf("Header node data: %d\n",pHeader->data);

    printf("node2 data: %d\n",pHeader->pNext->data);

    printf("node3 data: %d\n",pHeader->pNext->pNext->data);
    printf("node3 data: %d\n",pHeader->pNext->pNext->pNext->data);


    return(0);
}
