<!-- HTMLyinyong.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 18:35:16 2017 (+0800)
;; Last-Updated: 五 6月 16 18:51:01 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# HTML 引用

*HTML \<q\> 用于短的引用*

HTML \<q\> 元素定义短的引用。  
浏览器通常会为 \<q\> 元素包围引号。

```html
<p>WWF 的目标是：<q>构建人与自然和谐共存的世界。</q></p>
```


*用于长引用的 HTML \<blockquote\>*

HTML \<blockquote\> 元素定义被引用的节。  
浏览器通常会对 \<blockquote\> 元素进行缩进处理。

```html
<p>以下内容引用自 WWF 的网站：</p>
<blockquote cite="http://www.worldwildlife.org/who/index.html">
五十年来，WWF 一直致力于保护自然界的未来。
世界领先的环保组织，WWF 工作于 100 个国家，
并得到美国一百二十万会员及全球近五百万会员的支持。
</blockquote>
```


*用于缩略词的 HTML \<abbr\>*

HTML \<abbr\> 元素定义缩写或首字母缩略语。  
对缩写进行标记能够为浏览器、翻译系统以及搜索引擎提供有用的信息。

```html
<p><abbr title="World Health Organization">WHO</abbr> 成立于 1948 年。</p>
```


*用于定义的 HTML \<dfn\>*

HTML \<dfn\> 元素定义项目或缩写的定义。  
\<dfn\> 的用法，按照 HTML5 标准中的描述，有点复杂：

1. 如果设置了 \<dfn\> 元素的 title 属性，则定义项目：
	```html
	<p><dfn title="World Health Organization">WHO</dfn> 成立于 1948 年。</p>
	```
2. 如果 \<dfn\> 元素包含具有标题的 \<abbr\> 元素，则 title 定义项目：
   ```html
   <p><dfn><abbr title="World Health Organization">WHO</abbr></dfn> 成立于 1948 年。</p>
   ```
3. 否则，\<dfn\> 文本内容即是项目，并且父元素包含定义。
   ```html
   <p><dfn>WHO</dfn> World Health Organization 成立于 1948 年。</p>
   ```


*用于联系信息的 HTML \<address\>*

HTML \<address\> 元素定义文档或文章的联系信息（作者/拥有者）。  
此元素通常以斜体显示。大多数浏览器会在此元素前后添加折行。

```html
<address>
Written by Donald Duck.<br> 
Visit us at:<br>
Example.com<br>
Box 564, Disneyland<br>
USA
</address>
```


*用于著作标题的 HTML \<cite\>*

HTML \<cite\> 元素定义著作的标题。  
浏览器通常会以斜体显示 \<cite\> 元素。

```html
<p><cite>The Scream</cite> by Edward Munch. Painted in 1893.</p>
```

*用于双向重写的 HTML \<bdo\>*

HTML \<bdo\> 元素定义双流向覆盖（bi-directional override）。  
\<bdo\> 元素用于覆盖当前文本方向：

```html
<bdo dir="rtl">This text will be written from right to left</bdo>
```

## HTML 引文、引用和定义元素

- <abbr\>	定义缩写或首字母缩略语。
- <<address\>	定义文档作者或拥有者的联系信息。
- <<bdo\>	定义文本方向。
- <<blockquote\>	定义从其他来源引用的节。
- <<dfn\>	定义项目或缩略词的定义。
- <<q\>	定义短的行内引用。
- <<cite\>	定义著作的标题。



<!-- HTMLyinyong.md ends here -->
