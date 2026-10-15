<h2><a href="https://leetcode.com/problems/4sum">18. 4Sum</a></h2><h3>Medium</h3><hr><p>정수 배열 <code>nums</code>와 정수 <code>target</code>이 주어질 때, 서로 다른 네 인덱스의 수를 더해 <code>target</code>이 되는 조합 <code>[nums[a], nums[b], nums[c], nums[d]]</code>를 중복 없이 모두 반환하세요. 순서는 상관없습니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> nums = [1,0,-1,0,-2,2], target = 0
<strong>출력:</strong> [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> nums = [2,2,2,2,2], target = 8
<strong>출력:</strong> [[2,2,2,2]]
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= nums.length &lt;= 200</code>, <code>-10<sup>9</sup> &lt;= nums[i], target &lt;= 10<sup>9</sup></code> (합이 32비트를 넘을 수 있습니다).</p>
