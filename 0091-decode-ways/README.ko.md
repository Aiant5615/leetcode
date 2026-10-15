<h2><a href="https://leetcode.com/problems/decode-ways">91. Decode Ways</a></h2><h3>Medium</h3><hr><p>문자는 <code>'A' → "1"</code>, …, <code>'Z' → "26"</code>으로 인코딩됩니다. 숫자 문자열 <code>s</code>를 디코딩하는 방법의 수를 반환하세요. <code>"06"</code>처럼 0으로 시작하는 코드는 올바르지 않습니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "12"
<strong>출력:</strong> 2
<strong>설명:</strong> "AB"(1 2) 또는 "L"(12).
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "226"
<strong>출력:</strong> 3
<strong>설명:</strong> "BZ", "VF", "BBF".
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "06"
<strong>출력:</strong> 0
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 100</code>.</p>
