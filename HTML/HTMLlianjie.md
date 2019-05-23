<!-- HTMLlianjie.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 18:52:24 2017 (+0800)
;; Last-Updated: 五 6月 16 19:24:25 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# HTML 链接

HTML 链接是通过 \<a\> 标签进行定义的。

```html
<a href="http://www.w3school.com.cn">This is a link</a>
```

注释：在 href 属性中指定链接的地址。

开始标签和结束标签之间的文字被作为超级链接来显示。

提示："链接文本" 不必一定是文本。图片或其他 HTML 元素都可以成为链接。

## HTML 超链接（链接）

超链接可以是一个字，一个词，或者一组词，也可以是一幅图像，您可以点击这些内容来跳转到新的文档或者当前文档中的某个部分。

当您把鼠标指针移动到网页中的某个链接上时，箭头会变为一只小手。

我们通过使用 \<a\> 标签在 HTML 中创建链接。

有两种使用 \<a\> 标签的方式：  
- 通过使用 href 属性 - 创建指向另一个文档的链接
- 通过使用 name 属性 - 创建文档内的书签

## target 属性

使用 Target 属性，你可以定义被链接的文档在何处显示。  
下面的这行会在新窗口打开文档：

```html
<a href="http://www.w3school.com.cn/" target="_blank">Visit W3School!</a>
```


## name 属性

name 属性规定锚（anchor）的名称。  
您可以使用 name 属性创建 HTML 页面中的书签。  
书签不会以任何特殊方式显示，它对读者是不可见的。  
当使用命名锚（named anchors）时，我们可以创建直接跳至该命名锚（比如页面中某个小节）的链接，这样使用者就无需不停地滚动页面来寻找他们需要的信息了。  
命名锚的语法：
```html
<a name="label">锚（显示在页面上的文本）</a>
```
提示：锚的名称可以是任何你喜欢的名字。  
提示：您可以使用 id 属性来替代 name 属性，命名锚同样有效。


首先，我们在 HTML 文档中对锚进行命名（创建一个书签）：
```html
<a name="tips">基本的注意事项 - 有用的提示</a>
```
然后，我们在同一个文档中创建指向该锚的链接：
```html
<a href="#tips">有用的提示</a>
```
您也可以在其他页面中创建指向该锚的链接：
```html
<a href="http://www.w3school.com.cn/html/html_links.asp#tips">有用的提示</a>
```
在上面的代码中，我们将 # 符号和锚名称添加到 URL 的末端，就可以直接链接到 tips 这个命名锚了。

----







<!-- HTMLlianjie.md ends here -->
