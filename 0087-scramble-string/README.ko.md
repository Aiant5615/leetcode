<h2><a href="https://leetcode.com/problems/scramble-string">87. Scramble String</a></h2><h3>Hard</h3><hr><p>문자열을 임의의 위치에서 비어 있지 않은 두 부분으로 나누고, 원하면 두 부분을 바꾼 뒤, 각 부분을 재귀적으로 같은 방식으로 섞는 것을 scramble이라 합니다. 길이가 같은 <code>s1</code>, <code>s2</code>가 주어질 때 <code>s2</code>가 <code>s1</code>의 scramble인지 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s1 = "great", s2 = "rgeat"
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s1 = "abcde", s2 = "caebd"
<strong>출력:</strong> false
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> s1 = "a", s2 = "a"
<strong>출력:</strong> true
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s1.length &lt;= 30</code>, 영어 소문자입니다.</p>
