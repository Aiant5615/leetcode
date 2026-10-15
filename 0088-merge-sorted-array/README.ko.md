<h2><a href="https://leetcode.com/problems/merge-sorted-array">88. Merge Sorted Array</a></h2><h3>Easy</h3><hr><p><code>nums1</code>의 길이는 <code>m + n</code>이며 앞 <code>m</code>개는 정렬된 값, 나머지는 자리 표시자입니다. 정렬된 배열 <code>nums2</code>(길이 <code>n</code>)를 <code>nums1</code>에 제자리에서 합쳐 정렬된 결과를 만드세요.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
<strong>출력:</strong> [1,2,2,3,5,6]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums1 = [0], m = 0, nums2 = [1], n = 1
<strong>출력:</strong> [1]
</pre>
<p><strong>제약 조건:</strong> <code>0 &lt;= m, n &lt;= 200</code>.</p>
