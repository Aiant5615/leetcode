<h2><a href="https://leetcode.com/problems/regular-expression-matching">10. Regular Expression Matching</a></h2><h3>Hard</h3><hr><p>문자열 <code>s</code>와 패턴 <code>p</code>가 주어질 때, 패턴이 문자열 <strong>전체</strong>와 일치하는지 판단하세요. <code>'.'</code>은 임의의 한 문자와, <code>'*'</code>은 바로 앞 원소가 0번 이상 반복되는 것과 일치합니다.</p>
<p><strong>예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "aa", p = "a"
<strong>출력:</strong> false
</pre>
<p><strong>예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "aa", p = "a*"
<strong>출력:</strong> true
</pre>
<p><strong>예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "ab", p = ".*"
<strong>출력:</strong> true
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 20</code>, <code>1 &lt;= p.length &lt;= 20</code>. <code>s</code>는 소문자만, <code>p</code>는 소문자와 <code>'.'</code>, <code>'*'</code>로 이루어지며, 모든 <code>'*'</code> 앞에는 유효한 문자가 있습니다.</p>
