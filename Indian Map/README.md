<h1>Using obfuscated code in C to make a map of India. 
<h2>The map doesn't look exactly like the map of India, but seriously this is the best I could do!!

<h4>Obfuscated code is the code that is difficult for humans to understand.
<h3>Working:
<h4>Basically, the string is a run-length encoding of the map of India. Alternating characters in the string stores how many times to draw a space, and how many times to draw an exclamation mark consecutively.
<h4>Focusing on the encoded string:
"- FIGURE?, UMKC,XYZHello Folks,"
"TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL"
"OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";

<h4>The first 31 characters of this string are ignored and do not contribute to anything. The encoded string contain instructions for drawing the map. The individual characters determine how many spaces or exclamation marks to draw consecutively.
<h4>Outer for loop:

This loop goes over the characters in the string. Each iteration increases the value of b by one, and assigns the next character in the string to a.

Inner for loop:

This loop draws individual characters, and a newline whenever it reaches the end of line. Consider this putchar statement


