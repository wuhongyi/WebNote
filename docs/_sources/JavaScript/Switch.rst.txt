.. Switch.rst --- 
.. 
.. Description: 
.. Author: Hongyi Wu(吴鸿毅)
.. Email: wuhongyi@qq.com 
.. Created: 五 8月  2 19:38:06 2019 (+0800)
.. Last-Updated: 五 8月  2 21:05:14 2019 (+0800)
..           By: Hongyi Wu(吴鸿毅)
..     Update #: 3
.. URL: http://wuhongyi.cn 

##################################################
Switch 语句
##################################################

https://www.w3school.com.cn/js/js_switch.asp

使用 switch 语句来选择多个需被执行的代码块之一。

.. code-block:: JavaScript

  switch(表达式) {
       case n:
          代码块
          break;
       case n:
          代码块
          break;
       default:
          默认代码块
  } 


如果 JavaScript 遇到 break 关键词，它会跳出 switch 代码块。此举将停止代码块中更多代码的执行以及 case 测试。如果找到匹配，并完成任务，则随机中断执行（break）。无需更多测试。break 能够节省大量执行时间，因为它会“忽略” switch 代码块中的其他代码的执行。不必中断 switch 代码块中的最后一个 case。代码块在此处会自然结束。

default 关键词规定不存在 case 匹配时所运行的代码



.. code-block:: JavaScript

  switch (new Date().getDay()) {
      case 4:
      case 5:
          text = "周末快到了：）";
          break; 
      case 0:
      case 6:
          text = "今天是周末~";
           break;
      default: 
          text = "期待周末！";
  } 


.. 
.. Switch.rst ends here
