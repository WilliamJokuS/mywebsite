#include <bits/stdc++.h> 
using namespace std; 
struct Node { 
	int data; 
	Node *left, *right; 
}; 
struct Node* getNode(int data) 
{ 
	struct Node* newNode = new Node; 
	newNode->data = data; 
	newNode->left = newNode->right = NULL; 
	return newNode; 
} 

void postorderTraversal(Node*); 
void inorderTraversal(Node* root, vector<int>& arr) { 
	if (root == NULL) 
		return; 
	inorderTraversal(root->left, arr); 
	arr.push_back(root->data); 
	inorderTraversal(root->right, arr); 
} 

void BSTToMaxHeap(Node* root, vector<int> arr, int* i) 
{ 
	if (root == NULL) 
		return; 

	// recur on left subtree 
	BSTToMaxHeap(root->left, arr, i); 

	// recur on right subtree 
	BSTToMaxHeap(root->right, arr, i); 

	// copy data at index 'i' of 'arr' to 
	// the node 
	root->data = arr[++*i]; 
} 

// Utility function to convert the given BST to 
// MAX HEAP 
void convertToMaxHeapUtil(Node* root) 
{ 
	// vector to store the data of all the 
	// nodes of the BST 
	vector<int> arr; 
	int i = -1; 

	// inorder traversal to populate 'arr' 
	inorderTraversal(root, arr); 

	// BST to MAX HEAP conversion 
	BSTToMaxHeap(root, arr, &i); 
} 

// Function to Print Postorder Traversal of the tree 
void postorderTraversal(Node* root) 
{ 
	if (!root) 
		return; 

	// recur on left subtree 
	postorderTraversal(root->left); 

	// then recur on right subtree 
	postorderTraversal(root->right); 

	// print the root's data 
	cout << root->data << " "; 
} 
/*						8
                    /      	  \
                  /            \    
                4               12
              /   \          /     \
             2     6       10       14
           /  \   /  \    /  \    /  \
          1   3  5    7  9   11  13   15
		      
			  			15
                    /      	   \
                  /             \    
                7               14
              /   \          /     \
             3     6       10       13
           /  \   /  \    /  \    /  \
          1   2  4    5  8   9  11   12 */
int main(){
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
	convertToMaxHeapUtil(root); 
	cout << "Postorder Traversal of Tree:" << endl; 
	postorderTraversal(root); 

	return 0; 
} 

