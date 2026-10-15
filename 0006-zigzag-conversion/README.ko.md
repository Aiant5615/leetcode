<h2><a href="https://leetcode.com/problems/zigzag-conversion">6. Zigzag Conversion</a></h2><h3>Medium</h3><hr><p>문자열 <code>s</code>를 <code>numRows</code>개의 행에 지그재그로 씁니다. 첫 열은 위에서 아래로, 이어서 대각선으로 맨 위까지 올라가고, 다시 아래로 내려가기를 반복합니다. 그런 다음 한 행씩 읽은 문자열을 반환하세요.</p>
<pre>
P   A   H   N
A P L S I I G
Y   I   R
</pre>
<p><strong>예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "PAYPALISHIRING", numRows = 3
<strong>출력:</strong> "PAHNAPLSIIGYIR"
</pre>
<p><strong>예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "PAYPALISHIRING", numRows = 4
<strong>출력:</strong> "PINALSIGYAHRPI"
</pre>
<p><strong>예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "A", numRows = 1
<strong>출력:</strong> "A"
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 1000</code>, <code>1 &lt;= numRows &lt;= 1000</code>.</p>
