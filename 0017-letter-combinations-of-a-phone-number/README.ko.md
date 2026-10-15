<h2><a href="https://leetcode.com/problems/letter-combinations-of-a-phone-number">17. Letter Combinations of a Phone Number</a></h2><h3>Medium</h3><hr><p>전화 키패드에서 숫자 <code>2-9</code>는 각각 문자에 대응합니다(2: abc, 3: def, 4: ghi, 5: jkl, 6: mno, 7: pqrs, 8: tuv, 9: wxyz). 문자열 <code>digits</code>가 나타낼 수 있는 모든 문자 조합을 순서와 상관없이 반환하세요. 입력이 비어 있으면 빈 목록을 반환합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> digits = "23"
<strong>출력:</strong> ["ad","ae","af","bd","be","bf","cd","ce","cf"]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> digits = ""
<strong>출력:</strong> []
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> digits = "2"
<strong>출력:</strong> ["a","b","c"]
</pre>
<p><strong>제약 조건:</strong> <code>0 &lt;= digits.length &lt;= 4</code>, 각 숫자는 <code>['2', '9']</code> 범위입니다.</p>
