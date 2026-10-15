<h2><a href="https://leetcode.com/problems/combination-sum">39. Combination Sum</a></h2><h3>Medium</h3><hr><p>서로 다른 양의 정수 배열 <code>candidates</code>와 <code>target</code>이 주어질 때, 합이 <code>target</code>이 되는 고유한 조합을 모두 반환하세요. 같은 수를 여러 번 써도 되며, 어떤 수의 사용 횟수가 다르면 다른 조합입니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> candidates = [2,3,6,7], target = 7
<strong>출력:</strong> [[2,2,3],[7]]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> candidates = [2,3,5], target = 8
<strong>출력:</strong> [[2,2,2,2],[2,3,3],[3,5]]
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> candidates = [2], target = 1
<strong>출력:</strong> []
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= candidates.length &lt;= 30</code>, <code>2 &lt;= candidates[i] &lt;= 40</code>, <code>1 &lt;= target &lt;= 40</code>.</p>
