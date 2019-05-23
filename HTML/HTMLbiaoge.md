<!-- HTMLbiaoge.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 19:51:00 2017 (+0800)
;; Last-Updated: 五 6月 16 20:27:11 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# HTML 表格

表格由 \<table\> 标签来定义。每个表格均有若干行（由 \<tr\> 标签定义），每行被分割为若干单元格（由 \<td\> 标签定义）。字母 td 指表格数据（table data），即数据单元格的内容。数据单元格可以包含文本、图片、列表、段落、表单、水平线、表格等等。

```html
<table border="1">
<tr>
<td>row 1, cell 1</td>
<td>row 1, cell 2</td>
</tr>
<tr>
<td>row 2, cell 1</td>
<td>row 2, cell 2</td>
</tr>
</table>
```

## 表格和边框属性

如果不定义边框属性，表格将不显示边框。有时这很有用，但是大多数时候，我们希望显示边框。

使用边框属性来显示一个带有边框的表格：

```html
<table border="1">
<tr>
<td>Row 1, cell 1</td>
<td>Row 1, cell 2</td>
</tr>
</table>
```

## 表格的表头

表格的表头使用 \<th\> 标签进行定义。

大多数浏览器会把表头显示为粗体居中的文本：

```html
<table border="1">
<tr>
<th>Heading</th>
<th>Another Heading</th>
</tr>
<tr>
<td>row 1, cell 1</td>
<td>row 1, cell 2</td>
</tr>
<tr>
<td>row 2, cell 1</td>
<td>row 2, cell 2</td>
</tr>
</table>
```

## 表格中的空单元格

在一些浏览器中，没有内容的表格单元显示得不太好。如果某个单元格是空的（没有内容），浏览器可能无法显示出这个单元格的边框。

```html
<table border="1">
<tr>
<td>row 1, cell 1</td>
<td>row 1, cell 2</td>
</tr>
<tr>
<td></td>
<td>row 2, cell 2</td>
</tr>
</table>
```

注意：这个空的单元格的边框没有被显示出来。为了避免这种情况，在空单元格中添加一个**空格占位符**，就可以将边框显示出来。

```html
<table border="1">
<tr>
<td>row 1, cell 1</td>
<td>row 1, cell 2</td>
</tr>
<tr>
<td>&nbsp;</td>
<td>row 2, cell 2</td>
</tr>
</table>
```

----

表格标签

- \<table\>	定义表格
- \<caption\>	定义表格标题。
- \<th\>	定义表格的表头。
- \<tr\>	定义表格的行。
- \<td\>	定义表格单元。
- \<thead\>	定义表格的页眉。
- \<tbody\>	定义表格的主体。
- \<tfoot\>	定义表格的页脚。
- \<col\>	定义用于表格列的属性。
- \<colgroup\>	定义表格列的组。




<!-- HTMLbiaoge.md ends here -->
