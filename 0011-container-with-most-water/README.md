<h2><a href="https://leetcode.com/problems/container-with-most-water">11. Container With Most Water</a></h2><h3>Medium</h3><hr><p>You are given an array <code>height</code> of <code>n</code> non-negative integers. Line <code>i</code> is drawn from <code>(i, 0)</code> to <code>(i, height[i])</code>. Pick two lines that, together with the x-axis, hold the most water, and return that amount. The container cannot be tilted.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>Output:</strong> 49
<strong>Explanation:</strong> Lines at index 1 and 8: min(8, 7) * (8 - 1) = 49.
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> height = [1,1]
<strong>Output:</strong> 1
</pre>
<p><strong>Constraints:</strong> <code>2 &lt;= n &lt;= 10<sup>5</sup></code>, <code>0 &lt;= height[i] &lt;= 10<sup>4</sup></code>.</p>
