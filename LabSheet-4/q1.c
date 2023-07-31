#include&lt;stdio.h&gt;
int main(){
char name[30],address[30];
puts(&quot;Enter your name:&quot;); //Output string
gets(name); //Input string
puts(&quot;Enter your address&quot;);
gets(address);
puts(&quot;Your name is&quot;);
puts(name);
puts(&quot;Your address is&quot;);
puts(address);
return 0;
}