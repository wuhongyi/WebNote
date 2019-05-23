<!-- HTMLduanluo.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 17:09:39 2017 (+0800)
;; Last-Updated: 五 6月 16 17:09:56 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# HTML 段落

HTML 段落是通过 \<p\> 标签进行定义的。

```html
<p>This is a paragraph.</p>
<p>This is another paragraph.</p>
```

注释：浏览器会自动地在段落的前后添加空行。（\<p\> 是块级元素）  
提示：使用空的段落标记 \<p\>\</p\> 去插入一个空行是个坏习惯。用 \<br /\> 标签代替它！（但是不要用 \<br /\> 标签去创建列表。）


*HTML 折行*  
如果您希望在不产生一个新段落的情况下进行换行（新行），请使用 \<br /\> 标签：

```html
<p>This is<br />a para<br />graph with line breaks</p>
```

\<br /\> 元素是一个空的 HTML 元素。由于关闭标签没有任何意义，因此它没有结束标签。

<!-- HTMLduanluo.md ends here -->
