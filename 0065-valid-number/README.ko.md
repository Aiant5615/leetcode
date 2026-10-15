<h2><a href="https://leetcode.com/problems/valid-number">65. Valid Number</a></h2><h3>Hard</h3><hr><p>문자열이 올바른 수인지 판단하세요. 부호(선택) 다음에 <code>'.'</code>을 최대 하나 포함한 숫자(전체에 숫자가 하나 이상)가 오고, 선택적으로 <code>'e'</code>나 <code>'E'</code> 뒤에 정수(부호 선택, 숫자 하나 이상)가 올 수 있습니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "0"
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "e"
<strong>출력:</strong> false
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "."
<strong>출력:</strong> false
</pre>
<p><strong class="example">예시 4:</strong></p>
<pre>
<strong>입력:</strong> s = "-123.456e789"
<strong>출력:</strong> true
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 20</code>, 영문자·숫자·<code>+ - .</code>만 사용합니다.</p>
