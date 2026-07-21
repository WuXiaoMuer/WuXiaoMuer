#ifndef SB_H
#define SB_H

// ===================== 1. 关键字拼写错误修复（最高频） =====================
#define mian       main        // main 最常见写错 mian
#define viod       void        // void 写成 viod
#define retun      return
#define retuen     return      // return 各种颠倒拼写
#define Contine    continue
#define contiune   continue    // continue 笔误

// 布尔值写错
#define ture       true
#define flase      false
#define falce      false

// 大小写混用兼容（新手随手大写开头）
#define Int        int
#define Float      float
#define Char       char
#define For        for
#define While      while
#define If         if
#define Else       else
#define Switch     switch
#define Case       case
#define Break      break

// ===================== 2. 输入输出函数笔误 =====================
#define prinf      printf
#define print      printf      // 少打f
#define scnaf      scanf
#define scan       scanf       // 少打f

// ===================== 3. 字符串库函数笔误 =====================
#define strcp      strcpy      // strcpy 简写漏字母反向兼容
#define strlen     strlen

// ===================== 4. 数字与字母混淆（0/O、1/l/I 分不清） =====================
#define O          0
#define I          1
#define l          1

// ===================== 5. 符号冗余兼容（原样传递，防止多加符号报错） =====================
#define ,          ,
#define (          (
#define )          )
#define ;          ;
#define *          *
#define =          =
#define +          +
#define -          -
#define /          /
#define %          %
#define <          <
#define >          >
#define <=         <=
#define >=         >=
#define ==         ==
#define !=         !=

// ===================== 6. 标准头文件容错（写错头文件名称也能匹配） =====================
#define stdio.h    stdio.h
#define stdlib.h   stdlib.h
#define string.h   string.h
#define math.h     math.h

#endif /* SB_H */