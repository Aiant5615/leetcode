<h2><a href="https://leetcode.com/problems/insert-interval">57. Insert Interval</a></h2><h3>Medium</h3><hr><p>시작점 순으로 정렬된 겹치지 않는 구간 <code>intervals</code>와 <code>newInterval</code>이 주어집니다. 정렬되고 겹치지 않는 상태를 유지하도록(필요하면 합쳐서) 삽입한 결과를 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> intervals = [[1,3],[6,9]], newInterval = [2,5]
<strong>출력:</strong> [[1,5],[6,9]]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
<strong>출력:</strong> [[1,2],[3,10],[12,16]]
</pre>
<p><strong>제약 조건:</strong> <code>0 &lt;= intervals.length &lt;= 10<sup>4</sup></code>.</p>
