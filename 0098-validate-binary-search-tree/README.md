<h2><a href="https://leetcode.com/problems/validate-binary-search-tree">98. Validate Binary Search Tree</a></h2><h3>Medium</h3><hr><p>Return whether a binary tree is a valid binary search tree: every node's left subtree holds only smaller values, its right subtree only larger values, and both subtrees are valid BSTs.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> root = [2,1,3]
<strong>Output:</strong> true
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> root = [5,1,4,null,null,3,6]
<strong>Output:</strong> false
<strong>Explanation:</strong> The root is 5 but its right child is 4.
</pre>
<p><strong>Constraints:</strong> 1 to 10<sup>4</sup> nodes, values in <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>.</p>
