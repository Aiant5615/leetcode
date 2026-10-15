<h2><a href="https://leetcode.com/problems/group-anagrams">49. Group Anagrams</a></h2><h3>Medium</h3><hr><p><code>strs</code>에서 서로 애너그램(같은 글자를 재배열한 것)인 문자열끼리 묶어 순서와 상관없이 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> strs = ["eat","tea","tan","ate","nat","bat"]
<strong>출력:</strong> [["bat"],["nat","tan"],["ate","eat","tea"]]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> strs = [""]
<strong>출력:</strong> [[""]]
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> strs = ["a"]
<strong>출력:</strong> [["a"]]
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= strs.length &lt;= 10<sup>4</sup></code>, <code>0 &lt;= strs[i].length &lt;= 100</code>, 영어 소문자입니다.</p>
