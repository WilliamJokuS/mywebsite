// C++ implementation to convert the given 
// BST to Min Heap 
#include <bits/stdc++.h> 
using namespace std; 

// structure of a node of BST 
struct Node 
{ 
	int data; 
	Node *left, *right; 
}; 

/* Helper function that allocates a new node 
with the given data and NULL left and right 
pointers. */
struct Node* getNode(int data) 
{ 
	struct Node *newNode = new Node; 
	newNode->data = data; 
	newNode->left = newNode->right = NULL; 
	return newNode; 
} 

// function prototype for preorder traversal 
// of the given tree 
void preorderTraversal(Node*); 

// function for the inorder traversal of the tree 
// so as to store the node values in 'arr' in 
// sorted order 
void inorderTraversal(Node *root, vector<int>& arr) 
{ 
	if (root == NULL) 
		return; 

	// first recur on left subtree 
	inorderTraversal(root->left, arr); 

	// then copy the data of the node 
	arr.push_back(root->data); 

	// now recur for right subtree 
	inorderTraversal(root->right, arr); 
} 

// function to convert the given BST to MIN HEAP 
// performs preorder traversal of the tree 
void BSTToMinHeap(Node *root, vector<int> arr, int *i) 
{ 
	if (root == NULL) 
		return; 

	// first copy data at index 'i' of 'arr' to 
	// the node 
	root->data = arr[++*i]; 

	// then recur on left subtree 
	BSTToMinHeap(root->left, arr, i); 

	// now recur on right subtree 
	BSTToMinHeap(root->right, arr, i); 
} 

// utility function to convert the given BST to 
// MIN HEAP 
void convertToMinHeapUtil(Node *root) 
{ 
	// vector to store the data of all the 
	// nodes of the BST 
	vector<int> arr; 
	int i = -1; 

	// inorder traversal to populate 'arr' 
	inorderTraversal(root, arr); 

	// BST to MIN HEAP conversion 
	BSTToMinHeap(root, arr, &i); 
} 

// function for the preorder traversal of the tree 
void preorderTraversal(Node *root) 
{ 
	if (!root) 
		return; 

	// first print the root's data 
	cout << root->data << " "; 

	// then recur on left subtree 
	preorderTraversal(root->left); 

	// now recur on right subtree 
	preorderTraversal(root->right); 
} 

// Driver program to test above 
int main() 
{ 
	// BST formation 
	struct Node* root = getNode(8); 
	root->left = getNode(4); 
	root->right = getNode(12); 
	root->left->left = getNode(2); 
	root->left->right = getNode(6); 
	root->right->left = getNode(10); 
	root->right->right = getNode(14); 
    root->left->left->left = getNode(1); 
	root->left->left->right = getNode(3); 
	root->left->right->left = getNode(5); 
	root->left->right->right = getNode(7);
	root->right->left->left = getNode(9); 
	root->right->left->right = getNode(11); 
	root->right->right->left = getNode(13); 
	root->right->right->right = getNode(15);
	convertToMinHeapUtil(root); 
	cout << "Preorder Traversal:\n"; 
	preorderTraversal(root); 
	return 0; 
}
/*					     8
                    /      	   \
                  /             \    
                4               12
              /   \          /     \
             2     6       10       14
           /  \   /  \    /  \    /  \
          1   3  5    7  9   11  13   15	
		               
					    1
                    /      	   \
                  /             \    
                2               9
              /   \          /     \
             3     4       10       11
           /  \   /  \    /  \    /  \
          5   6  7    8  12   13  14   15 */
          
