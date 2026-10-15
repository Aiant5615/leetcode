<h2><a href="https://leetcode.com/problems/merge-intervals">56. Merge Intervals</a></h2><h3>Medium</h3><hr><p>구간 배열 <code>intervals</code>(<code>[start, end]</code>)에서 겹치는 구간을 모두 합쳐, 같은 범위를 덮는 겹치지 않는 구간들을 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> intervals = [[1,3],[2,6],[8,10],[15,18]]
<strong>출력:</strong> [[1,6],[8,10],[15,18]]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> intervals = [[1,4],[4,5]]
<strong>출력:</strong> [[1,5]]
<strong>설명:</strong> 끝이 맞닿은 구간도 겹치는 것으로 봅니다.
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= intervals.length &lt;= 10<sup>4</sup></code>.</p>
