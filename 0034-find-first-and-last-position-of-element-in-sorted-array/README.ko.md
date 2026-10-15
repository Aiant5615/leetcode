<h2><a href="https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array">34. Find First and Last Position of Element in Sorted Array</a></h2><h3>Medium</h3><hr><p>오름차순 배열 <code>nums</code>에서 <code>target</code>이 처음과 마지막으로 나오는 인덱스를 <code>[start, end]</code>로 반환하세요. 없으면 <code>[-1, -1]</code>입니다. <code>O(log n)</code>이어야 합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums = [5,7,7,8,8,10], target = 8
<strong>출력:</strong> [3,4]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums = [5,7,7,8,8,10], target = 6
<strong>출력:</strong> [-1,-1]
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> nums = [], target = 0
<strong>출력:</strong> [-1,-1]
</pre>
<p><strong>제약 조건:</strong> <code>0 &lt;= nums.length &lt;= 10<sup>5</sup></code>.</p>
