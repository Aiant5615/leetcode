<h2><a href="https://leetcode.com/problems/regular-expression-matching">10. Regular Expression Matching</a></h2><h3>Hard</h3><hr><p>Given a string <code>s</code> and a pattern <code>p</code>, decide whether <code>p</code> matches the <strong>entire</strong> string, where <code>'.'</code> matches any single character and <code>'*'</code> matches zero or more of the preceding element.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "aa", p = "a"
<strong>Output:</strong> false
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "aa", p = "a*"
<strong>Output:</strong> true
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s = "ab", p = ".*"
<strong>Output:</strong> true
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= s.length &lt;= 20</code>, <code>1 &lt;= p.length &lt;= 20</code>; <code>s</code> has only lowercase letters, <code>p</code> lowercase letters, <code>'.'</code> and <code>'*'</code>, and every <code>'*'</code> has a previous valid character.</p>
