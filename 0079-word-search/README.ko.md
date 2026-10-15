<h2><a href="https://leetcode.com/problems/word-search">79. Word Search</a></h2><h3>Medium</h3><hr><p><code>m x n</code> 문자 격자에서 가로나 세로로 인접한 칸을 따라 이동하며(각 칸은 최대 한 번) <code>word</code>를 만들 수 있는지 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> 같은 판, word = "SEE"
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> 같은 판, word = "ABCB"
<strong>출력:</strong> false
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= m, n &lt;= 6</code>, <code>1 &lt;= word.length &lt;= 15</code>.</p>
