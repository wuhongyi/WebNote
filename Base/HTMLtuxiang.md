<!-- HTMLtuxiang.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 五 6月 16 19:26:44 2017 (+0800)
;; Last-Updated: 五 6月 16 19:49:43 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 2
;; URL: http://wuhongyi.cn -->

# HTML 图像

HTML 图像是通过 \<img\> 标签进行定义的。

```html
<img src="w3school.jpg" width="104" height="142" />
```

注释：图像的名称和尺寸是以属性的形式提供的。

\<img\> 是空标签，意思是说，它只包含属性，并且没有闭合标签。

要在页面上显示图像，你需要使用源属性（src）。src 指 "source"。源属性的值是图像的 URL 地址。  
定义图像的语法是：
```html
<img src="url" />
```

URL 指存储图像的位置。如果名为 "boat.gif" 的图像位于 www.w3school.com.cn 的 images 目录中，那么其 URL 为 http://www.w3school.com.cn/images/boat.gif。

浏览器将图像显示在文档中图像标签出现的地方。如果你将图像标签置于两个段落之间，那么浏览器会首先显示第一个段落，然后显示图片，最后显示第二段。


## 替换文本属性（Alt）

alt 属性用来为图像定义一串预备的可替换的文本。替换文本属性的值是用户定义的。

```html
<img src="boat.gif" alt="Big Boat">
```

在浏览器无法载入图像时，替换文本属性告诉读者她们失去的信息。此时，浏览器将显示这个替代性的文本而不是图像。为页面上的图像都加上替换文本属性是个好习惯，这样有助于更好的显示信息，并且对于那些使用纯文本浏览器的人来说是非常有用的。


----

本例演示如何向 HTML 页面添加背景图片
```html
<html>

<body background="/i/eg_background.jpg">

<h3>图像背景</h3>

<p>gif 和 jpg 文件均可用作 HTML 背景。</p>

<p>如果图像小于页面，图像会进行重复。</p>

</body>
</html>
```

本例演示如何在文字中排列图像
```html
<html>

<body>

<h2>未设置对齐方式的图像：</h2>

<p>图像 <img src ="/i/eg_cute.gif"> 在文本中</p>

<h2>已设置对齐方式的图像：</h2>

<p>图像 <img src="/i/eg_cute.gif" align="bottom"> 在文本中</p>

<p>图像 <img src ="/i/eg_cute.gif" align="middle"> 在文本中</p>

<p>图像 <img src ="/i/eg_cute.gif" align="top"> 在文本中</p>

<p>请注意，bottom 对齐方式是默认的对齐方式。</p>

</body>
</html>
```

本例演示如何使图片浮动至段落的左边或右边
```html
<html>

<body>

<p>
<img src ="/i/eg_cute.gif" align ="left"> 
带有图像的一个段落。图像的 align 属性设置为 "left"。图像将浮动到文本的左侧。
</p>

<p>
<img src ="/i/eg_cute.gif" align ="right"> 
带有图像的一个段落。图像的 align 属性设置为 "right"。图像将浮动到文本的右侧。
</p>

</body>
</html>
```

本例演示如何将图片调整到不同的尺寸

```html
<html>

<body>

<img src="/i/eg_mouse.jpg" width="50" height="50">

<br />

<img src="/i/eg_mouse.jpg" width="100" height="100">

<br />

<img src="/i/eg_mouse.jpg" width="200" height="200">

<p>通过改变 img 标签的 "height" 和 "width" 属性的值，您可以放大或缩小图像。</p>

</body>
</html>
```

本例演示如何为图片显示替换文本。在浏览器无法载入图像时，替换文本属性告诉读者们失去的信息。为页面上的图像都加上替换文本属性是个好习惯

```html
<html>

<body>


<p>仅支持文本的浏览器无法显示图像，仅仅能够显示在图像的 "alt" 属性中指定的文本。在这里，"alt" 的文本是“向左转”。</p>

<p>请注意，如果您把鼠标指针移动到图像上，大多数浏览器会显示 "alt" 文本。</p>

<img src="/i/eg_goleft.gif" alt="向左转" />

<p>如果无法显示图像，将显示 "alt" 属性中的文本：</p>

<img src="/i/eg_goleft123.gif" alt="向左转" />

</body>
</html>
```

本例演示如何将图像作为一个链接使用

```html
<html>

<body>
<p>
您也可以把图像作为链接来使用：
<a href="/example/html/lastpage.html">
<img border="0" src="/i/eg_buttonnext.gif" />
</a>
</p>

</body>
</html>
```

本例显示如何创建带有可供点击区域的图像地图。其中的每个区域都是一个超级链接

```html
<html>
<body>

<p>请点击图像上的星球，把它们放大。</p>

<img
src="/i/eg_planets.jpg"
border="0" usemap="#planetmap"
alt="Planets" />

<map name="planetmap" id="planetmap">

<area
shape="circle"
coords="180,139,14"
href ="/example/html/venus.html"
target ="_blank"
alt="Venus" />

<area
shape="circle"
coords="129,161,10"
href ="/example/html/mercur.html"
target ="_blank"
alt="Mercury" />

<area
shape="rect"
coords="0,0,110,260"
href ="/example/html/sun.html"
target ="_blank"
alt="Sun" />

</map>

<p><b>注释：</b>img 元素中的 "usemap" 属性引用 map 元素中的 "id" 或 "name" 属性（根据浏览器），所以我们同时向 map 元素添加了 "id" 和 "name" 属性。</p>

</body>
</html>
```

本例显示如何把一幅普通的图像设置为图像映射

```html
<!DOCTYPE html>
<html>

<body>

<p>请把鼠标移动到图像上，看一下状态栏的坐标如何变化。</p>

<a href="/example/html/html_ismap.html">
<img src="/i/eg_planets.jpg" ismap />
</a>

</body>
</html>
```

<!-- HTMLtuxiang.md ends here -->
