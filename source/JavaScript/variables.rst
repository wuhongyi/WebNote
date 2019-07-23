.. variables.rst --- 
.. 
.. Description: 
.. Author: Hongyi Wu(吴鸿毅)
.. Email: wuhongyi@qq.com 
.. Created: 二 7月 23 21:52:07 2019 (+0800)
.. Last-Updated: 二 7月 23 23:11:23 2019 (+0800)
..           By: Hongyi Wu(吴鸿毅)
..     Update #: 6
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

。。。  

> http://www.w3school.com.cn/js/js_numbers.asp

  
============================================================
字符串
============================================================

。。。
  

============================================================
类型转换
============================================================

。。。

============================================================
常量
============================================================

。。。


   
.. 
.. variables.rst ends here
