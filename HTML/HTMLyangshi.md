<!-- HTMLyangshi.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 17:10:36 2017 (+0800)
;; Last-Updated: 五 6月 16 17:17:54 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 2
;; URL: http://wuhongyi.cn -->

# HTML 样式

style 属性的作用：  
提供了一种改变所有 HTML 元素的样式的通用方法。  
样式是 HTML 4 引入的，它是一种新的首选的改变 HTML 元素样式的方式。通过 HTML 样式，能够通过使用 style 属性直接将样式添加到 HTML 元素，或者间接地在独立的样式表中（CSS 文件）进行定义。

在 HTML 4 中，有若干的标签和属性是被废弃的。被废弃（Deprecated）的意思是在未来版本的 HTML 和 XHTML 中将不支持这些标签和属性。应该避免使用下面这些标签和属性：

- \<center\>	定义居中的内容。
- \<font\> 和 \<basefont\>	定义 HTML 字体。
- \<s\> 和 \<strike\>	定义删除线文本
- \<u\>	定义下划线文本
- align	定义文本的对齐方式
- bgcolor	定义背景颜色
- color	定义文本颜色

对于以上这些标签和属性：请使用样式代替！

HTML 样式实例 - 背景颜色  
background-color 属性为元素定义了背景颜色：

```html
<html>

<body style="background-color:yellow">
<h2 style="background-color:red">This is a heading</h2>
<p style="background-color:green">This is a paragraph.</p>
</body>

</html>
````

HTML 样式实例 - 字体、颜色和尺寸  
font-family、color 以及 font-size 属性分别定义元素中文本的字体系列、颜色和字体尺寸：
```html
<html>

<body>
<h1 style="font-family:verdana">A heading</h1>
<p style="font-family:arial;color:red;font-size:20px;">A paragraph.</p>
</body>

</html>
```

HTML 样式实例 - 文本对齐  
text-align 属性规定了元素中文本的水平对齐方式：
```html
<html>

<body>
<h1 style="text-align:center">This is a heading</h1>
<p>The heading above is aligned to the center of this page.</p>
</body>

</html>
```


<!-- HTMLyangshi.md ends here -->
