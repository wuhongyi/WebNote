.. variables.rst --- 
.. 
.. Description: 
.. Author: Hongyi Wu(吴鸿毅)
.. Email: wuhongyi@qq.com 
.. Created: 二 7月 23 21:52:07 2019 (+0800)
.. Last-Updated: 六 7月 27 17:41:26 2019 (+0800)
..           By: Hongyi Wu(吴鸿毅)
..     Update #: 8
.. URL: http://wuhongyi.cn 

##################################################
变量
##################################################

在脚本的开头声明所有变量是个好习惯！

JavaScript 变量是存储数据值的容器。

============================================================
变量定义
============================================================

所有 JavaScript 变量必须以唯一的名称的标识。这些唯一的名称称为标识符。

构造变量名称（唯一标识符）的通用规则是：
- 名称可包含字母、数字、下划线和美元符号
- 名称必须以字母开头
- 名称也可以 $ 和 _ 开头
- 名称对大小写敏感（y 和 Y 是不同的变量）
- 保留字（比如 JavaScript 的关键词）无法用作变量名称

**保留词**

.. code:: javascript
	  
  abstract 	arguments 	await 	boolean
  break 	byte 	case 	catch
  char 	class 	const 	continue
  debugger 	default 	delete 	do
  double 	else 	enum 	eval
  export 	extends 	false 	final
  finally 	float 	for 	function
  goto 	if 	implements 	import
  in 	instanceof 	int 	interface
  let 	long 	native 	new
  null 	package 	private 	protected
  public 	return 	short 	static
  super 	switch 	synchronized 	this
  throw 	throws 	transient 	true
  try 	typeof 	var 	void
  volatile 	while 	with 	yield

**内建对象的名称、属性和方法**

.. code:: javascript
	  
  Array 	Date 	eval 	function
  hasOwnProperty 	Infinity 	isFinite 	isNaN
  isPrototypeOf 	length 	Math 	NaN
  name 	Number 	Object 	prototype
  String 	toString 	undefined 	valueOf



通过 var 关键词来声明 JavaScript 变量：

.. code:: javascript

   var name;
   name = "zxcvbnm";

   var num = 123;
   var nnn = "qwsazx", mmm = 789;

============================================================
数据类型
============================================================

JavaScript 变量能够保存多种数据类型：数值、字符串值、数组、对象等等：

.. code:: javascript

  var length = 7;			      // 数字
  var lastName = "Gates";		       // 字符串
  var cars = ["Porsche", "Volvo", "BMW"];	  // 数组
  var x = {firstName:"Bill", lastName:"Gates"};	   // 对象 


JavaScript 拥有动态类型。这意味着相同变量可用作不同类型：

.. code:: javascript
	  
  var x;               // 现在 x 是 undefined
  var x = 7;           // 现在 x 是数值
  var x = "Bill";      // 现在 x 是字符串值


字符串（或文本字符串）是一串字符（比如 "zxcvbnm"）。字符串被引号包围。可使用单引号或双引号。可以在字符串内使用引号，只要这些引号与包围字符串的引号不匹配：

.. code:: javascript

  var answer = "It's alright";             // 双引号内的单引号
  var answer = "He is called 'Bill'";    // 双引号内的单引号
  var answer = 'He is called "Bill"';    // 单引号内的双引号


JavaScript 只有一种数值类型。写数值时用不用小数点均可：
  
.. code:: javascript

  var x1 = 34.00;     // 带小数点
  var x2 = 34;        // 不带小数点

超大或超小的数值可以用科学计数法来写：


.. code:: javascript

  var y = 123e5;      // 12300000
  var z = 123e-5;     // 0.00123


布尔值只有两个值：true 或 false。

.. code:: javascript  

  var x = true;
  var y = false;


JavaScript 数组用方括号书写。数组的项目由逗号分隔。下面的代码声明（创建）了名为 cars 的数组，包含三个项目（汽车品牌）：

.. code:: javascript  

  var cars = ["Porsche", "Volvo", "BMW"];


JavaScript 对象用花括号来书写。对象属性是 name:value 对，由逗号分隔。

.. code:: javascript  

  var person = {firstName:"Bill", lastName:"Gates", age:62, eyeColor:"blue"};


- 在 JavaScript 中，没有值的变量，其值是 undefined。typeof 也返回 undefined。
- 任何变量均可通过设置值为 undefined 进行清空。其类型也将是 undefined。
- 空值与 undefined 不是一回事。空的字符串变量既有值也有类型。
- 在 JavaScript 中，null 是 "nothing"。它被看做不存在的事物。
- 不幸的是，在 JavaScript 中，null 的数据类型是对象。
- 可以把 null 在 JavaScript 中是对象理解为一个 bug。它本应是 null。
- 可以通过设置值为 null 清空对象：
- 也可以通过设置值为 undefined 清空对象：


typeof 运算符可返回以下原始类型之一：

- string
- number
- boolean
- undefined



============================================================
数值
============================================================

**JavaScript 只有一种数值类型。书写数值时带不带小数点均可。**

超大或超小的数可通过科学计数法来写：

.. code:: javascript  

  var x = 123e5;    // 12300000
  var y = 123e-5;   // 0.00123

**JavaScript 数值始终是 64 位的浮点数**

- 与许多其他编程语言不同，JavaScript 不会定义不同类型的数，比如整数、短的、长的、浮点的等等。
- JavaScript 数值始终以双精度浮点数来存储，根据国际 IEEE 754 标准。
- 此格式用 64 位存储数值，其中 0 到 51 存储数字（片段），52 到 62 存储指数，63 位存储符号


Infinity （或 -Infinity）是 JavaScript 在计算数时超出最大可能数范围时返回的值。

.. code:: javascript  

  var myNumber = 2;
   
  while (myNumber != Infinity) {          // 执行直到 Infinity
      myNumber = myNumber * myNumber;
  }

  
JavaScript 会把前缀为 0x 的数值常量解释为十六进制。

.. code:: javascript  

  var x = 0xFF;             // x 将是 255


绝不要用前导零写数字（比如 07）。一些 JavaScript 版本会把带有前导零的数解释为八进制。
默认地，Javascript 把数显示为十进制小数。但是能够使用 toString() 方法把数输出为十六进制、八进制或二进制。

.. code:: javascript  
  
  var myNumber = 128;
  myNumber.toString(16);     // 返回 80
  myNumber.toString(8);      // 返回 200
  myNumber.toString(2);      // 返回 10000000




  
============================================================
字符串
============================================================

**JavaScript 字符串用于存储和操作文本。**

您可以在字符串中使用引号，只要不匹配围绕字符串的引号即可：

.. code:: javascript  
  
  var answer = "It's good to see you again!";
  var answer = "He is called 'Bill'";
  var answer = 'He is called "Bill"';


内建属性 `length` 可返回字符串的长度：

.. code:: javascript  
  
  var txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  var sln = txt.length;

`indexOf()` 方法返回字符串中指定文本首次出现的索引（位置）：

.. code:: javascript  
  
  var str = "The full name of China is the People's Republic of China.";
  var pos = str.indexOf("China");

`lastIndexOf()` 方法返回指定文本在字符串中最后一次出现的索引：

.. code:: javascript  
  
  var str = "The full name of China is the People's Republic of China.";
  var pos = str.lastIndexOf("China");

- 如果未找到文本， indexOf() 和 lastIndexOf() 均返回 -1。
- 两种方法都接受作为检索起始位置的第二个参数。
- lastIndexOf() 方法向后进行检索（从尾到头），这意味着：假如第二个参数是 50，则从位置 50 开始检索，直到字符串的起点。

`search()` 方法搜索特定值的字符串，并返回匹配的位置：

.. code:: javascript  
  
  var str = "The full name of China is the People's Republic of China.";
  var pos = str.search("locate");



**提取部分字符串**

有三种提取部分字符串的方法：

- slice(start, end)
- substring(start, end)
- substr(start, length)

`slice()` 提取字符串的某个部分并在新字符串中返回被提取的部分。该方法设置两个参数：起始索引（开始位置），终止索引（结束位置）。

这个例子裁剪字符串中位置 7 到位置 13 的片段：

.. code:: javascript  

  var str = "Apple, Banana, Mango";
  var res = str.slice(7,13);

如果某个参数为负，则从字符串的结尾开始计数。

这个例子裁剪字符串中位置 -12 到位置 -6 的片段：	  

.. code:: javascript  

  var str = "Apple, Banana, Mango";
  var res = str.slice(-13,-7);

如果省略第二个参数，则该方法将裁剪字符串的剩余部分：

.. code:: javascript  

  var res = str.slice(7);
  
或者从结尾计数：

.. code:: javascript  

  var res = str.slice(-13);


`substring()` 类似于 slice()。不同之处在于 substring() 无法接受负的索引。

.. code:: javascript  

  var str = "Apple, Banana, Mango";
  var res = str.substring(7,13);

如果省略第二个参数，则该 substring() 将裁剪字符串的剩余部分。


`substr()` 类似于 slice()。不同之处在于第二个参数规定被提取部分的长度。

.. code:: javascript  

  var str = "Apple, Banana, Mango";
  var res = str.substr(7,6);	  

如果省略第二个参数，则该 substr() 将裁剪字符串的剩余部分。

.. code:: javascript  

  var str = "Apple, Banana, Mango";
  var res = str.substr(7);

如果首个参数为负，则从字符串的结尾计算位置。

.. code:: javascript  

  var str = "Apple, Banana, Mango";
  var res = str.substr(-5);

第二个参数不能为负，因为它定义的是长度。


`replace()` 方法用另一个值替换在字符串中指定的值：

.. code:: javascript  

  str = "Please visit Microsoft!";
  var n = str.replace("Microsoft", "W3School");  

- replace() 方法不会改变调用它的字符串。它返回的是新字符串。
- 默认地，replace() 只替换首个匹配。
- 默认地，replace() 对大小写敏感。

  
http://www.w3school.com.cn/js/js_string_methods.asp
  
============================================================
类型转换
============================================================

**Number() 转换数值，String() 转换字符串，Boolean() 转换布尔值。**

JavaScript 中有五种可包含值的数据类型：

- 字符串（string）
- 数字（number）
- 布尔（boolean）
- 对象（object）
- 函数（function）

有三种对象类型：

- 对象（Object）
- 日期（Date）
- 数组（Array）

同时有两种不能包含值的数据类型：

- null
- undefined


可以使用 typeof 运算符来确定 JavaScript 变量的数据类型。

.. code:: javascript  
  
  typeof "Bill"                 // 返回 "string"
  typeof 3.14                   // 返回 "number"
  typeof NaN                    // 返回 "number"
  typeof false                  // 返回 "boolean"
  typeof [1,2,3,4]              // 返回 "object"
  typeof {name:'Bill', age:62}  // 返回 "object"
  typeof new Date()             // 返回 "object"
  typeof function () {}         // 返回 "function"
  typeof myCar                  // 返回 "undefined" *
  typeof null                   // 返回 "object"

请注意：

- NaN 的数据类型是数值
- 数组的数据类型是对象
- 日期的数据类型是对象
- null 的数据类型是对象
- 未定义变量的数据类型是 undefined
- 尚未赋值的变量的数据类型也是 undefined
- 无法使用 typeof 去判断 JavaScript 对象是否是数组（或日期）。
	  

============================================================
常量
============================================================

。。。



   
.. 
.. variables.rst ends here
