Description
Gegeben ist ein String s. Finde die kleinste, nichtnegative Ganzzahl k, sodass der MD5-Hash von s + str(k) prim ist. Wäre zum Beispiel der String ucZ6gD1IRADXWbSk gegeben, wäre das kleinste 
k, für das diese Bedingung erfüllt ist, gleich 156156. Um zu überprüfen, ob ein MD5-Hash prim ist, wird dieser zunächst in vier gleich lange Teile aufgeteilt. Der Hash von ucZ6gD1IRADXWbSk156 (b44d1cd3c2463dd88eeda1365dd4cf7c) würde in die Teile b44d1cd3, c2463dd8, 8eeda136 und 5dd4cf7c aufgeteilt werden. Nun werden alle vier Teile je in eine Dezimalzahl umgewandelt und schließlich aufsummiert: 
3024952531 + 3259383256 + 2397937974 + 1574227836 = 10256501597
3024952531+3259383256+2397937974+1574227836=10256501597. Der Hash ist genau dann prim, wenn diese resultierende Summe eine Primzahl ist, die Quersumme ebenfalls eine Primzahl ist, die Quersumme dieser Zahl auch, und so weiter. In diesem Fall ist 
10256501597
10256501597 eine Primzahl, ihre Quersumme (4141) ist ebenfalls eine Primzahl und die Quersumme davon (55) auch.

Eingabe:

Zeile 1: Eine einzelne Zahl k ≥ 1
t≥1, die die Anzahl der Testfälle angibt.
Die einzige Zeile eines jeden Testfalls enthält den String s, bestehend aus Buchstaben und Ziffern.
Ausgabe:

Für jeden Testfall ist eine Zeile auszugeben: Die kleinste nichtnegative Ganzzahl k, für die der MD5-Hash von s + str(k) prim ist.