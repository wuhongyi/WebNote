.. Functions.rst --- 
.. 
.. Description: 
.. Author: Hongyi Wu(吴鸿毅)
.. Email: wuhongyi@qq.com 
.. Created: 三 7月 31 23:15:56 2019 (+0800)
.. Last-Updated: 三 7月 31 23:52:19 2019 (+0800)
..           By: Hongyi Wu(吴鸿毅)
..     Update #: 2
.. URL: http://wuhongyi.cn 

##################################################
函数
##################################################

https://www.w3school.com.cn/js/js_functions.asp


.. code-block:: JavaScript
		
  function myFunction(p1, p2) {
      return p1 * p2;
      // 该函数返回 p1 和 p2 的乘积
  }


`arguments.length` 会返回函数被调用时收到的参数数目：

.. code-block:: JavaScript

  function myFunction(a, b) {
      return arguments.length;
  }

如果函数调用的参数太多（超过声明），则可以使用 arguments 对象来达到这些参数。

JavaScript 函数有一个名为 arguments 对象的内置对象。arguments 对象包含函数调用时使用的参数数组。这样，就可以简单地使用函数来查找（例如）数字列表中的最高值：

.. code-block:: JavaScript

  x = findMax(1, 123, 500, 115, 44, 88);
   
  function findMax() {
      var i;
      var max = -Infinity;
      for (i = 0; i < arguments.length; i++) {
          if (arguments[i] > max) {
              max = arguments[i];
          }
      }
      return max;
  }


============================================================
JavaScript 函数语法
============================================================

JavaScript 函数通过 `function` 关键词进行定义，其后是函数名和括号 ()。函数名可包含字母、数字、下划线和美元符号（规则与变量名相同）。

圆括号可包括由逗号分隔的参数：
.. code-block:: JavaScript
		
  (参数 1, 参数 2, ...)

由函数执行的代码被放置在花括号中：{}

.. code-block:: JavaScript
		
  function name(参数 1, 参数 2, 参数 3) {
      要执行的代码
  }

- 函数参数（Function parameters）是在函数定义中所列的名称。
- 函数参数（Function arguments）是当调用函数时由函数接收的真实的值。
- 在函数中，参数是局部变量。
- 在其他编程语言中，函数近似程序（Procedure）或子程序（Subroutine）。

============================================================
函数调用
============================================================

函数中的代码将在其他代码调用该函数时执行：

- 当事件发生时（当用户点击按钮时）
- 当 JavaScript 代码调用时
- 自动的（自调用）


============================================================
函数返回
============================================================

- 当 JavaScript 到达 return 语句，函数将停止执行。
- 如果函数被某条语句调用，JavaScript 将在调用语句之后“返回”执行代码。
- 函数通常会计算出返回值。这个返回值会返回给调用者：


============================================================
()运算符调用函数
============================================================

访问没有 () 的函数将返回函数定义


  
.. 
.. Functions.rst ends here
