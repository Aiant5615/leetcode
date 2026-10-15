<h2><a href="https://leetcode.com/problems/simplify-path">71. Simplify Path</a></h2><h3>Medium</h3><hr><p>Convert an absolute Unix-style path into its canonical form: one leading <code>'/'</code>, single slashes between directory names, no trailing slash, with <code>'.'</code> (current directory) removed and <code>'..'</code> going up one level (never above the root). Any other name, such as <code>'...'</code>, is an ordinary directory.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> path = "/home/"
<strong>Output:</strong> "/home"
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> path = "/home//foo/"
<strong>Output:</strong> "/home/foo"
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> path = "/a/./b/../../c/"
<strong>Output:</strong> "/c"
</pre>
<p><strong class="example">Example 4:</strong></p>
<pre>
<strong>Input:</strong> path = "/../"
<strong>Output:</strong> "/"
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= path.length &lt;= 3000</code>.</p>
