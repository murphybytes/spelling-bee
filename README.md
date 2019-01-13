# spelling-bee

A program to solve New York Times Spelling Bee puzzles. The objective of the puzzle is given seven different letters, you are to find as many word as you can using those letters.  One of the letters must be included in all the words, the words must be four or more characters in length and you may not use proper nouns.

The program requires a text file containing dictionary words. You can find such a file
[here](https://github.com/dwyl/english-words/raw/master/words.txt)

To generate solution words run the program with the path to the dictionary file as the first argument, and the letters from the puzzle as the second argument.  The first letter
is the required letter.  The letters should be lower case. 

```bash
$ ./spelling-bee /Users/jam/english-words/words.txt ytlceno 
```

