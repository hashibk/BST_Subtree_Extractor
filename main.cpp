#include <iostream>

using namespace std;

// Implementing a Node structure for the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a value into the binary search tree
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to find and extract subtree based on high and low values
Node* extractSubtree(Node* root, int low, int high) {
    if (root == nullptr) return nullptr;

    // If the current node's value is outside the range,
    // recurse on left or right subtree based on the value
    if (root->data < low) {
        return extractSubtree(root->right, low, high);
    } else if (root->data > high) {
        return extractSubtree(root->left, low, high);
    }

    // If the current node's value is within the range,
    // extract subtree recursively from left and right
    root->left = extractSubtree(root->left, low, high);
    root->right = extractSubtree(root->right, low, high);

    return root;
}

// Function to perform in-order traversal
void inOrderTraversal(Node* root) {
    if (root == nullptr) return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    // Insert values into the binary search tree
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Define the range for extracting the subtree
    int low = 20;
    int high = 40;

    // Extract subtree
    root = extractSubtree(root, low, high);

    // Print the extracted subtree (in-order traversal)
    cout << "Subtree extracted based on range [" << low << ", " << high << "]:" << endl;
    inOrderTraversal(root);
    cout << endl;

    return 0;
}

