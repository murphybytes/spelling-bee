# spelling-bee

A program to solve New York Times Spelling Bee puzzles. The objective of the puzzle is given seven different letters, you are to find as many word as you can using those letters.  One of the letters must be included in all the words, the words must be four or more characters in length and you may not use proper nouns.

The program requires a text file containing dictionary words. You can find such a file
[here](https://github.com/dwyl/english-words/raw/master/words.txt)

```bash
$ ./spelling-bee --help
Allowed options:
  --help                  show help message
    -d [ --dictionary ] arg file containing dictionary
    -r [ --required ] arg   required letter
    -o [ --optionals ] arg  optional letters

```

The program requires Boost to build.  You'll need to define two environment variables
`BOOST_INCLUDEDS` and `BOOST_LIBS` to tell the Makefile where to find Boost libraries and header files on your system. 