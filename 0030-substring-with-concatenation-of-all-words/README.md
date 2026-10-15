<h2><a href="https://leetcode.com/problems/substring-with-concatenation-of-all-words">30. Substring with Concatenation of All Words</a></h2><h3>Hard</h3><hr><p>You are given a string <code>s</code> and an array <code>words</code> of strings that all have the same length. Return the starting indices of every substring of <code>s</code> that is a concatenation of all the words, each used exactly once, in any order.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> s = "barfoothefoobarman", words = ["foo","bar"]
<strong>Output:</strong> [0,9]
<strong>Explanation:</strong> "barfoo" at 0 and "foobar" at 9.
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]
<strong>Output:</strong> []
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= s.length &lt;= 10<sup>4</sup></code>, <code>1 &lt;= words.length &lt;= 5000</code>, <code>1 &lt;= words[i].length &lt;= 30</code>.</p>
