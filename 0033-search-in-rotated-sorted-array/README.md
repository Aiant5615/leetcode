<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array">33. Search in Rotated Sorted Array</a></h2><h3>Medium</h3><hr><p>An ascending array of distinct integers was rotated at an unknown pivot (for example <code>[0,1,2,4,5,6,7]</code> became <code>[4,5,6,7,0,1,2]</code>). Return the index of <code>target</code>, or <code>-1</code>, in <code>O(log n)</code> time.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= nums.length &lt;= 5000</code>.</p>
