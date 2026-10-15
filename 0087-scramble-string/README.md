<h2><a href="https://leetcode.com/problems/scramble-string">87. Scramble String</a></h2><h3>Hard</h3><hr><p>A string is scrambled by splitting it into two non-empty parts at any index, optionally swapping the parts, and scrambling each part recursively. Given strings <code>s1</code> and <code>s2</code> of equal length, return whether <code>s2</code> is a scramble of <code>s1</code>.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s1 = "great", s2 = "rgeat"
<strong>Output:</strong> true
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s1 = "abcde", s2 = "caebd"
<strong>Output:</strong> false
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s1 = "a", s2 = "a"
<strong>Output:</strong> true
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= s1.length &lt;= 30</code>, lowercase letters.</p>
