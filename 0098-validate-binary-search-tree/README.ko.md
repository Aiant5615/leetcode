<h2><a href="https://leetcode.com/problems/validate-binary-search-tree">98. Validate Binary Search Tree</a></h2><h3>Medium</h3><hr><p>이진 트리가 올바른 이진 탐색 트리인지 반환하세요. 모든 노드의 왼쪽 서브트리에는 더 작은 값만, 오른쪽 서브트리에는 더 큰 값만 있어야 하며 두 서브트리도 올바른 BST여야 합니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> root = [2,1,3]
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> root = [5,1,4,null,null,3,6]
<strong>출력:</strong> false
<strong>설명:</strong> 루트는 5인데 오른쪽 자식이 4입니다.
</pre>
<p><strong>제약 조건:</strong> 노드 수 1~10<sup>4</sup>, 값은 <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>.</p>
