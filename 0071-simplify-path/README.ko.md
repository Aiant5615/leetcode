<h2><a href="https://leetcode.com/problems/simplify-path">71. Simplify Path</a></h2><h3>Medium</h3><hr><p>절대 경로인 유닉스 스타일 경로를 정규 형태로 바꾸세요. 맨 앞에 <code>'/'</code> 하나, 디렉터리 이름 사이에 슬래시 하나, 끝에는 슬래시가 없어야 하며 <code>'.'</code>(현재 디렉터리)는 없애고 <code>'..'</code>은 한 단계 위로 갑니다(루트 위로는 가지 않음). <code>'...'</code> 같은 다른 이름은 일반 디렉터리입니다.</p>
<p><strong class="example">예시 1:</strong></p>
<pre>
<strong>입력:</strong> path = "/home/"
<strong>출력:</strong> "/home"
</pre>
<p><strong class="example">예시 2:</strong></p>
<pre>
<strong>입력:</strong> path = "/home//foo/"
<strong>출력:</strong> "/home/foo"
</pre>
<p><strong class="example">예시 3:</strong></p>
<pre>
<strong>입력:</strong> path = "/a/./b/../../c/"
<strong>출력:</strong> "/c"
</pre>
<p><strong class="example">예시 4:</strong></p>
<pre>
<strong>입력:</strong> path = "/../"
<strong>출력:</strong> "/"
</pre>
<p><strong>제약 조건:</strong> <code>1 &lt;= path.length &lt;= 3000</code>.</p>
