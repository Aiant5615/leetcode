<h2><a href="https://leetcode.com/problems/string-to-integer-atoi">8. String to Integer (atoi)</a></h2><h3>Medium</h3><hr><p>Convert a string to a 32-bit signed integer the way C's <code>atoi</code> does:</p>
<ol>
<li>Skip leading whitespace.</li>
<li>Read an optional <code>'-'</code> or <code>'+'</code>.</li>
<li>Read digits until a non-digit or the end of the string; leading zeros are ignored. No digits means 0.</li>
<li>Clamp the result to <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>.</li>
</ol>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "42"
<strong>Output:</strong> 42
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "   -042"
<strong>Output:</strong> -42
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> s = "1337c0d3"
<strong>Output:</strong> 1337
</pre>
<p><strong class="example">Example 4:</strong></p>
<pre>
<strong>Input:</strong> s = "0-1"
<strong>Output:</strong> 0
</pre>
<p><strong class="example">Example 5:</strong></p>
<pre>
<strong>Input:</strong> s = "words and 987"
<strong>Output:</strong> 0
</pre>
