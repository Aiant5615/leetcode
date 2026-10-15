<h2><a href="https://leetcode.com/problems/string-to-integer-atoi">8. String to Integer (atoi)</a></h2><h3>Medium</h3><hr><p>C의 <code>atoi</code>처럼 문자열을 32비트 부호 있는 정수로 변환하세요.</p>
<ol>
<li>앞쪽 공백은 건너뜁니다.</li>
<li><code>'-'</code> 또는 <code>'+'</code> 부호가 있으면 읽습니다.</li>
<li>숫자가 아닌 문자나 문자열 끝을 만날 때까지 숫자를 읽습니다. 앞자리 0은 무시하고, 숫자가 하나도 없으면 0입니다.</li>
<li>결과를 <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code> 범위로 잘라 반환합니다.</li>
</ol>
<p><strong>예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "42"
<strong>출력:</strong> 42
</pre>
<p><strong>예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "   -042"
<strong>출력:</strong> -42
</pre>
<p><strong>예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "1337c0d3"
<strong>출력:</strong> 1337
</pre>
<p><strong>예시 4:</strong></p>
<pre>
<strong>입력:</strong> s = "0-1"
<strong>출력:</strong> 0
</pre>
<p><strong>예시 5:</strong></p>
<pre>
<strong>입력:</strong> s = "words and 987"
<strong>출력:</strong> 0
</pre>
