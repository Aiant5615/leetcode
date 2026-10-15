<h2><a href="https://leetcode.com/problems/divide-two-integers">29. Divide Two Integers</a></h2><h3>Medium</h3><hr><p>곱셈, 나눗셈, 나머지 연산 없이 <code>dividend</code>를 <code>divisor</code>로 나눈 몫(0 방향으로 버림)을 구하세요. 결과가 32비트 범위를 벗어나면 <code>2<sup>31</sup> - 1</code>(또는 <code>-2<sup>31</sup></code>)을 반환합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> dividend = 10, divisor = 3
<strong>출력:</strong> 3
<strong>설명:</strong> 10/3 = 3.33… → 3.
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> dividend = 7, divisor = -3
<strong>출력:</strong> -2
</pre>
<p><strong>제약 조건:</strong> <code>-2<sup>31</sup> &lt;= dividend, divisor &lt;= 2<sup>31</sup> - 1</code>, <code>divisor != 0</code>.</p>
