<h2><a href="https://leetcode.com/problems/text-justification">68. Text Justification</a></h2><h3>Hard</h3><hr><p>Pack <code>words</code> greedily into lines of exactly <code>maxWidth</code> characters. Spread extra spaces as evenly as possible between words, giving the left gaps more when they do not divide evenly. A line with one word, and the last line, are left-justified and padded with spaces on the right.</p>
<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> words = ["This","is","an","example","of","text","justification."], maxWidth = 16
<strong>Output:</strong> ["This    is    an","example  of text","justification.  "]
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
<strong>Output:</strong> ["What   must   be","acknowledgment  ","shall be        "]
</pre>
<p><strong>Constraints:</strong> <code>1 &lt;= words.length &lt;= 300</code>, <code>1 &lt;= words[i].length &lt;= maxWidth &lt;= 100</code>.</p>
