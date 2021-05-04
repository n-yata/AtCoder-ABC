#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

struct Node{
    int key;
    Node *prev, *next;
};

Node *nil;

void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(int key){
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

Node* listSearch(int key){
    Node *cur = nil->next;
    while(cur != nil && cur->key != key){
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t){
    if(t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteKey(int key){
    deleteNode(listSearch(key));
}

void deleteFirst(){
    deleteNode(nil->next);
}

void deleteLast(){
    deleteNode(nil->prev);
}

int main(){
    init();
    int n, x;
    char c[100];
    cin >> n;
    rep(i,n){
        scanf("%s", c);
        if(c[0] == 'i'){
            scanf("%d", &x);
            insert(x);
        }else if(c[0] == 'd'){
            if(strlen(c) > 6){
                if(c[6] == 'F') deleteFirst();
                if(c[6] == 'L') deleteLast();
            }else{
                scanf("%d", &x);
                deleteKey(x);
            }
        }
    }
    Node *cur = nil->next;
    int i = 0;
    while(1){
        if(cur == nil) break;
        if(i++ > 0) cout << " ";
        cout << cur->key;
        cur = cur->next;
    }
    cout << endl;
    return 0;
}