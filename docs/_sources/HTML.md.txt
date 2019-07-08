<!-- HTML.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 16:14:43 2017 (+0800)
;; Last-Updated: 日 7月  7 21:04:25 2019 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 14
;; URL: http://wuhongyi.cn -->

# 基础

> http://www.w3school.com.cn/html/index.asp  
> http://www.w3school.com.cn/tags/index.asp  
> http://www.w3school.com.cn/example/html_examples.asp  


HTML 是用来描述网页的一种语言  
- HTML 指的是超文本标记语言 (Hyper Text Markup Language)
- HTML 不是一种编程语言，而是一种标记语言 (markup language)
- 标记语言是一套标记标签 (markup tag)
- HTML 使用标记标签来描述网页


HTML 标记标签通常被称为 HTML 标签 (HTML tag)  
- HTML 标签是由尖括号包围的关键词，比如 \<html\>
- HTML 标签通常是成对出现的，比如 \<b\> 和 \</b\>
- 标签对中的第一个标签是开始标签，第二个标签是结束标签
- 开始和结束标签也被称为开放标签和闭合标签


HTML 文档 = 网页  
- HTML 文档描述网页
- HTML 文档包含 HTML 标签和纯文本
- HTML 文档也被称为网页

Web 浏览器的作用是读取 HTML 文档，并以网页的形式显示出它们。浏览器不会显示 HTML 标签，而是使用标签来解释页面的内容：

```html
<html>
<body>

<h1>My First Heading</h1>

<p>My first paragraph.</p>

</body>
</html>
```

例子解释   
```text
 <html> 与 </html> 之间的文本描述网页
 <body> 与 </body> 之间的文本是可见的页面内容
 <h1> 与 </h1> 之间的文本被显示为标题
 <p> 与 </p> 之间的文本被显示为段落
```

----

## HTML 元素

HTML 元素指的是从开始标签（start tag）到结束标签（end tag）的所有代码。注释：开始标签常被称为开放标签（opening tag），结束标签常称为闭合标签（closing tag）。

HTML 元素语法  
- HTML 元素以开始标签起始
- HTML 元素以结束标签终止
- 元素的内容是开始标签与结束标签之间的内容
- 某些 HTML 元素具有空内容（empty content）
- 空元素在开始标签中进行关闭（以开始标签的结束而结束）
- 大多数 HTML 元素可拥有属性





## HTML 水平线
\<hr /\> 标签在 HTML 页面中创建水平线。hr 元素可用于分隔内容。

```html
<p>This is a paragraph</p>
<hr />
<p>This is a paragraph</p>
<hr />
<p>This is a paragraph</p>
```

提示：使用水平线 (\<hr\> 标签) 来分隔文章中的小节是一个办法（但并不是唯一的办法）。


## HTML 注释
可以将注释插入 HTML 代码中，这样可以提高其可读性，使代码更易被人理解。浏览器会忽略注释，也不会显示它们。

```html
<!-- This is a comment -->
```

注释：开始括号之后（左边的括号）需要紧跟一个叹号，结束括号之前（右边的括号）不需要。   
提示：合理地使用注释可以对未来的代码编辑工作产生帮助。


<!-- HTML.md ends here -->


----

## NOTE

div 横向布局参数 float: left;
消除 div 横向布局的默认设置： clear: both;


width: 200px; height: 300px; background-color: bule; font-size: 28px; 

文字居中
- 横向居中：text-align: center;
- 纵向居中：vertical-align: middle; display: table-cell;

div居中 margin: auto;
- 和文字纵向居中冲突
- 纵向居中使用 line-height: 300px;
- 使用 div 嵌套：外层 div 居中，内层文字居中

如何让页面所有的 div 都居中?
使用 CSS 统一设置，出现了问题，横向布局不生效？

----

关于 div 布局的问题

div => 矩形block => 有长、有高
