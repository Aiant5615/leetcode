<h2><a href="https://leetcode.com/problems/valid-number">65. Valid Number</a></h2><h3>Hard</h3><hr><p>Decide whether a string is a valid number: an optional sign, then digits with at most one <code>'.'</code> (at least one digit overall), optionally followed by <code>'e'</code> or <code>'E'</code> and an integer (optional sign, at least one digit).</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "0"
<strong>Output:</strong> true
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "e"
<strong>Output:</strong> false
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s = "."
<strong>Output:</strong> false
</pre>
<p><strong class="example">Example 4:</strong></p>
<pre>
<strong>Input:</strong> s = "-123.456e789"
<strong>Output:</strong> true
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= s.length &lt;= 20</code>; letters, digits, <code>+ - .</code> only.</p>
