<h2><a href="https://leetcode.com/problems/restore-ip-addresses">93. Restore IP Addresses</a></h2><h3>Medium</h3><hr><p>Insert three dots into the digit string <code>s</code> to form every possible valid IPv4 address: four parts, each between <code>0</code> and <code>255</code>, with no leading zeros (except <code>0</code> itself). Return them in any order.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "25525511135"
<strong>Output:</strong> ["255.255.11.135","255.255.111.35"]
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "0000"
<strong>Output:</strong> ["0.0.0.0"]
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s = "101023"
<strong>Output:</strong> ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= s.length &lt;= 20</code>, digits only.</p>
