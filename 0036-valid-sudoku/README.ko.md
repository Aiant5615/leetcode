<h2><a href="https://leetcode.com/problems/valid-sudoku">36. Valid Sudoku</a></h2><h3>Medium</h3><hr><p>일부만 채워진 9 x 9 스도쿠 판이 올바른지 판단하세요. 각 행, 각 열, 아홉 개의 3 x 3 상자 안에서 <code>1-9</code>가 중복되면 안 됩니다. 빈칸은 <code>'.'</code>이며, 풀 수 있는 판일 필요는 없습니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> LeetCode 예시 1의 판
<strong>출력:</strong> true
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> 같은 판에서 board[0][0] = '8'
<strong>출력:</strong> false
<strong>설명:</strong> 왼쪽 위 상자에 8이 두 개입니다.
</pre>
<p><strong>제약 조건:</strong> <code>board.length == board[i].length == 9</code>.</p>
