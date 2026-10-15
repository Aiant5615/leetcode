<h2><a href="https://leetcode.com/problems/substring-with-concatenation-of-all-words">30. Substring with Concatenation of All Words</a></h2><h3>Hard</h3><hr><p>문자열 <code>s</code>와 길이가 모두 같은 단어 배열 <code>words</code>가 주어집니다. 모든 단어를 정확히 한 번씩, 순서 상관없이 이어 붙인 것과 같은 <code>s</code>의 부분 문자열의 시작 인덱스를 모두 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "barfoothefoobarman", words = ["foo","bar"]
<strong>출력:</strong> [0,9]
<strong>설명:</strong> 0의 "barfoo"와 9의 "foobar".
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]
<strong>출력:</strong> []
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 10<sup>4</sup></code>, <code>1 &lt;= words.length &lt;= 5000</code>, <code>1 &lt;= words[i].length &lt;= 30</code>.</p>
