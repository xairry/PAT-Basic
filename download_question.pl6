#!/usr/bin/perl6

for 81..85 -> $i {
    mkdir "10$i";
    shell "cd 10$i; wget https://www.patest.cn/contests/pat-b-practise/10$i; mv 10$i 10$i.html";
    sleep 0.5;
}
