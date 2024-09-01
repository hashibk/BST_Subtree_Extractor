# Binary Search Tree with Subtree Extraction

This C++ program implements a binary search tree (BST) and extracts a subtree containing nodes with values within a specified range. The extracted subtree is then displayed using in-order traversal.

## Features

- **Binary Search Tree (BST) Implementation**: Insert values into a BST.
- **Subtree Extraction**: Extract a subtree from the BST based on a given range of values (inclusive).
- **In-order Traversal**: Display the nodes of the extracted subtree in in-order traversal.

## Usage

1. **Insert Nodes**: The program inserts nodes with predefined values into the BST.
2. **Define Range**: A range of values (`low` and `high`) is defined to specify the subtree extraction.
3. **Extract Subtree**: The subtree containing nodes within the specified range is extracted.
4. **Print Subtree**: The extracted subtree is printed using in-order traversal.

### Example

In the given code:

- The values inserted into the BST are `50, 30, 20, 40, 70, 60, 80`.
- The range defined for subtree extraction is `[20, 40]`.

**Output**:
```bash
Subtree extracted based on range [20, 40]:
20 30 40
