.. Dates.rst --- 
.. 
.. Description: 
.. Author: Hongyi Wu(吴鸿毅)
.. Email: wuhongyi@qq.com 
.. Created: 六 8月  3 21:15:57 2019 (+0800)
.. Last-Updated: 六 8月  3 21:33:43 2019 (+0800)
..           By: Hongyi Wu(吴鸿毅)
..     Update #: 1
.. URL: http://wuhongyi.cn 

##################################################
日期
##################################################

https://www.w3school.com.cn/js/js_dates.asp


.. code-block:: JavaScript
		
  var d = new Date();

默认情况下，JavaScript 将使用浏览器的时区并将日期显示为全文本字符串


有 4 种方法创建新的日期对象：

- new Date()
- new Date(year, month, day, hours, minutes, seconds, milliseconds)
   - JavaScript 从 0 到 11 计算月份。一月是 0。十二月是11。
   - 7个数字分别指定年、月、日、小时、分钟、秒和毫秒（按此顺序）
   - 6个数字指定年、月、日、小时、分钟、秒
   - 5个数字指定年、月、日、小时和分钟
   - 4个数字指定年、月、日和小时
   - 3 个数字指定年、月和日
   - 2个数字指定年份和月份
- new Date(milliseconds)
   - 创建一个零时加毫秒的新日期对象
- new Date(date string)
   - 从日期字符串创建一个新的日期对象：
   - var d = new Date("October 13, 2014 11:13:00");
  

JavaScript 将日期存储为自 1970 年 1 月 1 日 00:00:00 UTC（协调世界时）以来的毫秒数。零时间是 1970 年 1 月 1 日 00:00:00 UTC。现在的时间是：1970 年 1 月 1 日之后的 1554166879383 毫秒。


创建 Date 对象时，可以使用许多方法对其进行操作。日期方法允许您使用本地时间或 UTC（通用或 GMT）时间来获取和设置日期对象的年、月、日、小时、分钟、秒和毫秒。


.. code-block:: JavaScript

  d = new Date();
  document.getElementById("demo").innerHTML = d;
   		
  d = new Date();
  document.getElementById("demo").innerHTML = d.toString();
   
  // toUTCString() 方法将日期转换为 UTC 字符串（一种日期显示标准）。
  var d = new Date();
  document.getElementById("demo").innerHTML = d.toUTCString();
   
  // toDateString() 方法将日期转换为更易读的格式：
  var d = new Date();
  document.getElementById("demo").innerHTML = d.toDateString();


============================================================
日期获取方法
============================================================

取方法用于获取日期的某个部分（来自日期对象的信息）。

- getDate()	以数值返回天（1-31）
- getDay()	以数值获取周名（0-6）
- getFullYear()	获取四位的年（yyyy）
- getHours()	获取小时（0-23）
- getMilliseconds()	获取毫秒（0-999）
- getMinutes()	获取分（0-59）
- getMonth()	获取月（0-11）
- getSeconds()	获取秒（0-59）
- getTime()	获取时间（从 1970 年 1 月 1 日至今）


.. code-block:: JavaScript

  var d = new Date();
  document.getElementById("demo").innerHTML = d.getTime();


UTC 日期方法用于处理 UTC 日期（通用时区日期，Univeral Time Zone dates）：
  
- getUTCDate()	等于 getDate()，但返回 UTC 日期
- getUTCDay()	等于 getDay()，但返回 UTC 日
- getUTCFullYear()	等于 getFullYear()，但返回 UTC 年
- getUTCHours()	等于 getHours()，但返回 UTC 小时
- getUTCMilliseconds()	等于 getMilliseconds()，但返回 UTC 毫秒
- getUTCMinutes()	等于 getMinutes()，但返回 UTC 分
- getUTCMonth()	等于 getMonth()，但返回 UTC 月
- getUTCSeconds()	等于 getSeconds()，但返回 UTC 秒  

设置方法用于设置日期的某个部分。

- setDate()	以数值（1-31）设置日
- setFullYear()	设置年（可选月和日）
- setHours()	设置小时（0-23）
- setMilliseconds()	设置毫秒（0-999）
- setMinutes()	设置分（0-59）
- setMonth()	设置月（0-11）
- setSeconds()	设置秒（0-59）
- setTime()	设置时间（从 1970 年 1 月 1 日至今的毫秒数）


  
.. 
.. Dates.rst ends here
