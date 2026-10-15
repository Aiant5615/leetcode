<h2><a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii">80. Remove Duplicates from Sorted Array II</a></h2><h3>Medium</h3><hr><p>오름차순 배열 <code>nums</code>에서 각 값이 최대 두 번만 나오도록 제자리에서 중복을 제거하세요(순서 유지). 새 길이 <code>k</code>를 반환하고, 앞 <code>k</code>칸에 결과가 있어야 합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums = [1,1,1,2,2,3]
<strong>출력:</strong> 5, nums = [1,1,2,2,3,_]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums = [0,0,1,1,1,1,2,3,3]
<strong>출력:</strong> 7, nums = [0,0,1,1,2,3,3,_,_]
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code>.</p>
