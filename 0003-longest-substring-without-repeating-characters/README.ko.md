<h2><a href="https://leetcode.com/problems/longest-substring-without-repeating-characters">3. Longest Substring Without Repeating Characters</a></h2><h3>Medium</h3><hr><p>문자열 <code>s</code>가 주어질 때, 같은 문자가 반복되지 않는 가장 긴 <strong>부분 문자열</strong>의 길이를 구하세요.</p>
<p><strong>예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "abcabcbb"
<strong>출력:</strong> 3
<strong>설명:</strong> 가장 긴 부분 문자열은 "abc"입니다.
</pre>
<p><strong>예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "bbbbb"
<strong>출력:</strong> 1
</pre>
<p><strong>예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "pwwkew"
<strong>출력:</strong> 3
<strong>설명:</strong> "wke"입니다. "pwke"는 연속하지 않으므로 부분 문자열이 아니라 부분 수열입니다.
</pre>
<p><strong>제약 조건:</strong> <code>0 &lt;= s.length &lt;= 5 * 10<sup>4</sup></code>, <code>s</code>는 영문자·숫자·기호·공백으로 이루어집니다.</p>
