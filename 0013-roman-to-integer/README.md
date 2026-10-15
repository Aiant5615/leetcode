<h2><a href="https://leetcode.com/problems/roman-to-integer">13. Roman to Integer</a></h2><h3>Easy</h3><hr><p>Convert a Roman numeral (symbols <code>I V X L C D M</code> = 1, 5, 10, 50, 100, 500, 1000) to an integer. A symbol written before a larger one is subtracted (<code>IV</code> = 4, <code>XC</code> = 90); otherwise values are added.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "III"
<strong>Output:</strong> 3
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "LVIII"
<strong>Output:</strong> 58
<strong>Explanation:</strong> L = 50, V = 5, III = 3.
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s = "MCMXCIV"
<strong>Output:</strong> 1994
<strong>Explanation:</strong> M = 1000, CM = 900, XC = 90, IV = 4.
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= s.length &lt;= 15</code>; <code>s</code> is a valid numeral in <code>[1, 3999]</code>.</p>
