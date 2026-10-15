<h2><a href="https://leetcode.com/problems/median-of-two-sorted-arrays">4. Median of Two Sorted Arrays</a></h2><h3>Hard</h3><hr><p>크기가 각각 <code>m</code>, <code>n</code>인 정렬된 배열 <code>nums1</code>, <code>nums2</code>가 주어질 때, 두 배열을 합친 전체의 중앙값을 반환하세요. 전체 시간 복잡도는 <code>O(log (m+n))</code>이어야 합니다.</p>
<p><strong>예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums1 = [1,3], nums2 = [2]
<strong>출력:</strong> 2.00000
<strong>설명:</strong> 합친 배열은 [1,2,3]이고 중앙값은 2입니다.
</pre>
<p><strong>예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums1 = [1,2], nums2 = [3,4]
<strong>출력:</strong> 2.50000
<strong>설명:</strong> 합친 배열은 [1,2,3,4]이고 중앙값은 (2 + 3) / 2 = 2.5입니다.
</pre>
<p><strong>제약 조건:</strong> <code>0 &lt;= m, n &lt;= 1000</code>, <code>1 &lt;= m + n</code>, 값의 범위는 <code>[-10<sup>6</sup>, 10<sup>6</sup>]</code>입니다.</p>
