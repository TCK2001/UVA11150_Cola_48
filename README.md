## UVA11150_Cola_48
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2091
-----
```c++
cola=cola+in/3; //콜라는 빈병3개에 온전한 한병으로 바꿀수 있으니 나누기3 한 값을 더함; 
in=in/3+in%3
```
-----
+ 8 Cola -> empty bottles 8 / 3 = 2 .... 2 -> 10 cola (already)
+ (empty cola) in = 2 + 2 = 4
+ 4 / 3 = 1....1 -> 11 cola (already)
+ (empty cola) in = 1 + 1 = 2
+ (friend give one empty cola) 2 + 1 = 3
+ 3 / 3 = 1 -> 12 cola (already)
