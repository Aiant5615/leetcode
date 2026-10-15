<h2><a href="https://leetcode.com/problems/valid-parentheses">20. Valid Parentheses</a></h2><h3>Easy</h3><hr><p><code>()[]{}</code> 문자로만 이루어진 문자열 <code>s</code>가 올바른지 판단하세요. 여는 괄호는 같은 종류의 닫는 괄호로 올바른 순서에 닫혀야 하고, 모든 닫는 괄호에는 짝이 되는 여는 괄호가 있어야 합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "()"
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "()[]{}"
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "(]"
<strong>출력:</strong> false
</pre>
<p><strong class="example">예시 4:</strong></p>
<pre>
<strong>입력:</strong> s = "([])"
<strong>출력:</strong> true
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 10<sup>4</sup></code>.</p>
