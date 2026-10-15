<h2><a href="https://leetcode.com/problems/text-justification">68. Text Justification</a></h2><h3>Hard</h3><hr><p><code>words</code>를 탐욕적으로 줄마다 채워 각 줄이 정확히 <code>maxWidth</code> 글자가 되게 하세요. 남는 공백은 단어 사이에 최대한 고르게 나누되, 나누어떨어지지 않으면 왼쪽 틈에 더 줍니다. 단어가 하나인 줄과 마지막 줄은 왼쪽 정렬하고 오른쪽을 공백으로 채웁니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> words = ["This","is","an","example","of","text","justification."], maxWidth = 16
<strong>출력:</strong> ["This    is    an","example  of text","justification.  "]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
<strong>출력:</strong> ["What   must   be","acknowledgment  ","shall be        "]
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= words.length &lt;= 300</code>, <code>1 &lt;= words[i].length &lt;= maxWidth &lt;= 100</code>.</p>
