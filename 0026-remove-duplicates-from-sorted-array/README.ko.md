<h2><a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array">26. Remove Duplicates from Sorted Array</a></h2><h3>Easy</h3><hr><p>오름차순으로 정렬된 배열 <code>nums</code>에서 중복을 제자리에서 제거해 각 값이 한 번만 나오게 하세요(순서 유지). 고유한 값의 개수 <code>k</code>를 반환하고, <code>nums</code>의 앞 <code>k</code>칸에 그 값들이 있어야 합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums = [1,1,2]
<strong>출력:</strong> 2, nums = [1,2,_]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums = [0,0,1,1,1,2,2,3,3,4]
<strong>출력:</strong> 5, nums = [0,1,2,3,4,_,_,_,_,_]
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code>.</p>
