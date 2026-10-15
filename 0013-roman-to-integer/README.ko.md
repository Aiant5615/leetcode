<h2><a href="https://leetcode.com/problems/roman-to-integer">13. Roman to Integer</a></h2><h3>Easy</h3><hr><p>로마 숫자(<code>I V X L C D M</code> = 1, 5, 10, 50, 100, 500, 1000)를 정수로 바꾸세요. 더 큰 기호 앞에 오는 기호는 빼고(<code>IV</code> = 4, <code>XC</code> = 90), 그 밖에는 더합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "III"
<strong>출력:</strong> 3
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "LVIII"
<strong>출력:</strong> 58
<strong>설명:</strong> L = 50, V = 5, III = 3.
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "MCMXCIV"
<strong>출력:</strong> 1994
<strong>설명:</strong> M = 1000, CM = 900, XC = 90, IV = 4.
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 15</code>, <code>s</code>는 <code>[1, 3999]</code> 범위의 올바른 로마 숫자입니다.</p>
