<h2><a href="https://leetcode.com/problems/search-a-2d-matrix">74. Search a 2D Matrix</a></h2><h3>Medium</h3><hr><p><code>m x n</code> 행렬의 각 행은 정렬되어 있고, 각 행의 첫 값은 이전 행의 마지막 값보다 큽니다. <code>target</code>이 행렬에 있는지 <code>O(log(m * n))</code> 시간에 판단하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
<strong>출력:</strong> false
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= m, n &lt;= 100</code>.</p>
