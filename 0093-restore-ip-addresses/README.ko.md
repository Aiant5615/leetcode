<h2><a href="https://leetcode.com/problems/restore-ip-addresses">93. Restore IP Addresses</a></h2><h3>Medium</h3><hr><p>숫자 문자열 <code>s</code>에 점 세 개를 넣어 만들 수 있는 올바른 IPv4 주소를 모두 반환하세요. 네 부분 각각은 <code>0</code>~<code>255</code>이고 (0 자체를 제외하면) 앞자리 0이 없어야 합니다. 순서는 상관없습니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> s = "25525511135"
<strong>출력:</strong> ["255.255.11.135","255.255.111.35"]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> s = "0000"
<strong>출력:</strong> ["0.0.0.0"]
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> s = "101023"
<strong>출력:</strong> ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= s.length &lt;= 20</code>, 숫자만 있습니다.</p>
