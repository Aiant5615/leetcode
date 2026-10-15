<h2><a href="https://leetcode.com/problems/integer-to-roman">12. Integer to Roman</a></h2><h3>Medium</h3><hr><p>정수를 로마 숫자로 바꾸세요. 기호는 <code>I</code> 1, <code>V</code> 5, <code>X</code> 10, <code>L</code> 50, <code>C</code> 100, <code>D</code> 500, <code>M</code> 1000입니다. 큰 값부터 차례로 쓰되, 빼는 형태 여섯 가지 <code>IV</code> 4, <code>IX</code> 9, <code>XL</code> 40, <code>XC</code> 90, <code>CD</code> 400, <code>CM</code> 900은 예외입니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> num = 3749
<strong>출력:</strong> "MMMDCCXLIX"
<strong>설명:</strong> 3000 = MMM, 700 = DCC, 40 = XL, 9 = IX.
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> num = 58
<strong>출력:</strong> "LVIII"
<strong>설명:</strong> 50 = L, 8 = VIII.
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> num = 1994
<strong>출력:</strong> "MCMXCIV"
<strong>설명:</strong> 1000 = M, 900 = CM, 90 = XC, 4 = IV.
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= num &lt;= 3999</code>.</p>
