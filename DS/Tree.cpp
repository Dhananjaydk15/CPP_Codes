#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node *p;//Creating The Node Pointer :
    p = (struct node*)malloc(sizeof(struct node));//Allocating memory in the heap :
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void preorder(struct node* root){
    if(root != NULL){
        cout<<root->data<<",";
    preorder(root->left);
    preorder(root->right);
    }
}
void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<",";
    }
}
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
                cout<<root->data<<",";
        inorder(root->right);
    }
}
int isBST(struct node* root){
    static struct node* prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
     return 1;
}

struct node* search(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

void insert(struct node* root,int key){
    struct node* prev = NULL;
    while(root!=NULL){
        prev = root;
        if(key==root->data){
            cout<<"* Can Non Insert Data :";
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
            struct node* New = createNode(key);
            if(key < prev->data){
                prev->left = New ;
            }
            else{
                prev->right = New ;
            }
}
struct node* inOrderPredecessor(struct node *root){
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
    
}

struct node* deletNode(struct node *root,int key){
    struct node* ipre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    if(key < root->data){
        root->left = deletNode(root->left,key);
    }
    else if(key > root->data){
        root-> right = deletNode(root->right,key);
    }
    else{
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deletNode(root->left,ipre->data);
    }
    return root;
}

int main(){
     //Root Node :- 
    struct node *p = createNode(8);
    struct node *p1 = createNode(5);
    struct node *p2 = createNode(12);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(6);
    struct node *p5 = createNode(11);
    struct node *p6 = createNode(20);

    // //Linking Node :- 
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

        //Tree Look like This :- 
            //         8
            //       /   \     
            //      5     12
            //     / \   / \
            //    4   6 11   20
 
    // struct node* n = search(p,6);
    // if(n!=NULL){
    //     cout<<"\n* Element Found"<<endl;
    // }
    // else
    // {
    //     cout<<"\n* Element Not Found"<<endl;
    // }

    insert(p,55);
    insert(p,2);
    insert(p,3);
    // insert(p,44);

            //Tree Look like After Insert :- 
            //         8
            //       /   \     
            //      5     12
            //     / \   / \
            //    4   6 11   20
            //   /             \
            //  2               55
            //   \
            //    3

    cout<<"\n* Inorder : ";
    inorder(p);
    cout<<"\n* Postorder : ";
    postorder(p);
    cout<<"\n* Inorder Traversal After Deletion : ";
    deletNode(p,55);
    deletNode(p,5);
    inorder(p);
            //Tree Look like After Deletion of Node '5' and Leaf Node '55' :- 
            //         8
            //       /   \     
            //      6     12
            //     /     / \
            //    4    11   20
            //   /             
            //  2               


    int i = isBST(p);
    if(i){
        printf("\n* Tree is BST :");
    }
    else{
        printf("\n* Tree is Not BST :");
    }
    
return 0;
}