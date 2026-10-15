<h2><a href="https://leetcode.com/problems/valid-sudoku">36. Valid Sudoku</a></h2><h3>Medium</h3><hr><p>Decide whether a partially filled 9 x 9 Sudoku board is valid: digits <code>1-9</code> must not repeat in any row, any column, or any of the nine 3 x 3 boxes. Empty cells are <code>'.'</code>. The board need not be solvable.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> the board from LeetCode's example 1
<strong>Output:</strong> true
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> the same board with board[0][0] = '8'
<strong>Output:</strong> false
<strong>Explanation:</strong> Two 8s in the top-left box.
</pre>
<p><strong>Constraints:</strong> <code>board.length == board[i].length == 9</code>.</p>
