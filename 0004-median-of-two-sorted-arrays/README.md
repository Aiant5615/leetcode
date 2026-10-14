<h2><a href="https://leetcode.com/problems/median-of-two-sorted-arrays">4. Median of Two Sorted Arrays</a></h2><h3>Hard</h3><hr><p>Given two sorted arrays <code>nums1</code> and <code>nums2</code> of sizes <code>m</code> and <code>n</code>, return the median of the two arrays combined. The overall run time should be <code>O(log (m+n))</code>.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums1 = [1,3], nums2 = [2]
<strong>Output:</strong> 2.00000
<strong>Explanation:</strong> merged = [1,2,3], median is 2.
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums1 = [1,2], nums2 = [3,4]
<strong>Output:</strong> 2.50000
<strong>Explanation:</strong> merged = [1,2,3,4], median is (2 + 3) / 2 = 2.5.
</pre>
<p><strong>Constraints:</strong> <code>0 &lt;= m, n &lt;= 1000</code>, <code>1 &lt;= m + n</code>, values in <code>[-10<sup>6</sup>, 10<sup>6</sup>]</code>.</p>
