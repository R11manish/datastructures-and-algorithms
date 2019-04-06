- Object based decomposition: Ordering the data based on its value and shape of how you're organising the said data.
- Balancing a BST, roughly log(n) to O(n).
- Range of key = max. number of levels.
- Keys determine position. Using this we can define the structure of the tree.
- Data is always stored in the leaves.
- Trie? Example below.
- |Name    |Age    |
   Amy		36
   Anne		24
   Emma     25

-       Root
	    /   \
	   A - N \
	   |   |  \
	   M   N   E - M - M - A - \0 -> 25
	   |   |
	   Y   E-\0->24
	   |
	  \0->36 

- The order of insertion of elements into Trie doesn't matter.
- Data clumping. Sucks.
- In binary trie, the key is a binary value.