.. Errors.rst --- 
.. 
.. Description: 
.. Author: Hongyi Wu(吴鸿毅)
.. Email: wuhongyi@qq.com 
.. Created: 三 7月 31 23:57:00 2019 (+0800)
.. Last-Updated: 五 8月  2 19:29:42 2019 (+0800)
..           By: Hongyi Wu(吴鸿毅)
..     Update #: 3
.. URL: http://wuhongyi.cn 

##################################################
异常
##################################################

https://www.w3school.com.cn/js/js_errors.asp


- try 语句使您能够测试代码块中的错误。
- catch 语句允许您处理错误。
- throw 语句允许您创建自定义错误。
- finally 使您能够执行代码，在 try 和 catch 之后，无论结果如何。

============================================================
try 和 catch
============================================================

- try 语句允许您定义一个代码块，以便在执行时检测错误。
- catch 语句允许你定义一个要执行的代码块，如果 try 代码块中发生错误。

JavaScript 语句 try 和 catch 成对出现：  

.. code-block:: JavaScript
		
  try {
       //供测试的代码块
  }
   catch(err) {
       //处理错误的代码块
  } 

============================================================
抛出错误
============================================================

当发生错误时，JavaScript 通常会停止并产生错误消息。

技术术语是这样描述的：JavaScript 将抛出异常（抛出错误）。

JavaScript 实际上会创建带有两个属性的 Error 对象：name 和 message。

- name	设置或返回错误名
- message	设置或返回错误消息（一条字符串）

error 的 name 属性可返回六个不同的值：

- EvalError	已在 eval() 函数中发生的错误
- RangeError	已发生超出数字范围的错误
- ReferenceError	已发生非法引用
- SyntaxError	已发生语法错误
- TypeError	已发生类型错误
- URIError	在 encodeURI() 中已发生的错误



  
============================================================
throw 语句
============================================================

throw 语句允许您创建自定义错误。从技术上讲您能够抛出异常（抛出错误）。

异常可以是 JavaScript 字符串、数字、布尔或对象：

.. code-block:: JavaScript
	  
  throw "Too big";    // 抛出文本
  throw 500;          //抛出数字

如果把 throw 与 try 和 catch 一同使用，就可以控制程序流并生成自定义错误消息。

本例会检查输入。如果值是错误的，将抛出异常（err）。该异常（err）被 catch 语句捕获并显示一条自定义的错误消息：

.. code-block:: html
   
  <!DOCTYPE html>
  <html>
  <body>
   
  <p>请输入 5 - 10 之间的数字：</p>
   
  <input id="demo" type="text">
  <button type="button" onclick="myFunction()">测试输入</button>
  <p id="message"></p>
   
  <script>
  function myFunction() {
      var message, x;
      message = document.getElementById("message");
      message.innerHTML = "";
      x = document.getElementById("demo").value;
      try { 
          if(x == "") throw "空的";
           if(isNaN(x)) throw "不是数字";
           x = Number(x);
          if(x < 5) throw  "太小";
          if(x > 10) throw "太大";
      }
      catch(err) {
          message.innerHTML = "输入是 " + err;
      }
  }
  </script>
   
  </body>
  </html> 

============================================================
finally 语句
============================================================

finally 语句允许您在 try 和 catch 之后执行代码，无论结果：

.. code-block:: JavaScript

  try {
       //供测试的代码块
  }
   catch(err) {
       //处理错误的代码块
  } 
  finally {
       //无论 try / catch 结果如何都执行的代码块
  }
		

.. code-block:: JavaScript

  function myFunction() {
      var message, x;
      message = document.getElementById("message");
      message.innerHTML = "";
      x = document.getElementById("demo").value;
      try { 
          if(x == "") throw "是空的";
          if(isNaN(x)) throw "不是数字";
           x = Number(x);
          if(x >  10) throw "太大";
          if(x <  5) throw "太小";
      }
      catch(err) {
          message.innerHTML = "错误：" + err + ".";
      }
      finally {
          document.getElementById("demo").value = "";
      }
  }















  
.. 
.. Errors.rst ends here
