<h2><a href="https://leetcode.com/problems/container-with-most-water">11. Container With Most Water</a></h2><h3>Medium</h3><hr><p>길이가 <code>n</code>인 음이 아닌 정수 배열 <code>height</code>가 주어집니다. <code>i</code>번째 선은 <code>(i, 0)</code>에서 <code>(i, height[i])</code>까지 그어집니다. 두 선을 골라 x축과 함께 물을 가장 많이 담을 때 그 양을 반환하세요. 용기는 기울일 수 없습니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>출력:</strong> 49
<strong>설명:</strong> 인덱스 1과 8의 선: min(8, 7) * (8 - 1) = 49.
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> height = [1,1]
<strong>출력:</strong> 1
</pre>
<p><strong>제약 조건:</strong> <code>2 &lt;= n &lt;= 10<sup>5</sup></code>, <code>0 &lt;= height[i] &lt;= 10<sup>4</sup></code>.</p>
