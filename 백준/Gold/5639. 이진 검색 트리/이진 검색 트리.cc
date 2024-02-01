// 5639 - 트리
// 후위 순위 함수를 만들고 돌리자
// 왼쪽부터 루트전까지 오른쪽부터 루트전까지 + 루트
#include<iostream>
#include<queue>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int value) : data(value), left(nullptr), right(nullptr) {} // 초기화를 효율적으로 진행 가능.
};

Node* makeNode(Node* root, int value) {
	if (root == nullptr) {
		return new Node(value);
	}

	if (value < root->data) {
		root->left = makeNode(root->left, value);
	}
	else if (value > root->data) {
		root->right = makeNode(root->right, value);
	}

	return root;
}
void postOrder(Node* root) {
	if (root == nullptr) return;

	postOrder(root->left);

	postOrder(root->right);

	cout << root->data << " ";
}

int main() {
	Node* root = nullptr;
	int x;
	while (cin >> x) {
		root = makeNode(root, x);
	}

	postOrder(root);
	return 0;
}