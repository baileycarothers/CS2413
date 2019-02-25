class Node{
public:
	int datum;
	Node *left, *right, *parent;
	Node(int);
};

class BST{
	Node *root;
	void destr_helper(Node*);
public:
	BST();
	~BST();
	void insert(int);
	void rem(int);
	Node* search(int);
};