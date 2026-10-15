<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array">33. Search in Rotated Sorted Array</a></h2><h3>Medium</h3><hr><p>서로 다른 정수로 된 오름차순 배열이 알 수 없는 지점에서 회전되어 있습니다(예: <code>[0,1,2,4,5,6,7]</code> → <code>[4,5,6,7,0,1,2]</code>). <code>target</code>의 인덱스를 <code>O(log n)</code> 시간에 찾고, 없으면 <code>-1</code>을 반환하세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>출력:</strong> 4
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>출력:</strong> -1
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> nums = [1], target = 0
<strong>출력:</strong> -1
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= nums.length &lt;= 5000</code>.</p>
