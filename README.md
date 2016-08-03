# scrambler
A simple Rubik's cube random scrambler. Now featuring multiple implementations and a website!

Check out [the website](http://jlam55555.github.io/scrambler) for a scramble. Screenshot below:

![screenshot of website](http://i.imgur.com/iRhJ4ez.jpg)

### Inspiration
- Created by a restless teenager on a rainy summer day, wanting to do something with some programming languages he doesn't usually use. Had some fun and learned a lot as a result! 

### Features
- Quick and simple: just run and cube!
- Easily run your favorite implementation.

### Specifications
- Returns a 25-move scramble.
- Scramble is formatted in a simple five-row, five-column format.
- Quickly finishes in a tiny fraction of a second.
- Executable files are in the `bin` directory, source files are in the `src` directory.

### How to Run (Main Programs)
#### Website (`index.html` et al.)
- Navigate to the URL: http://jlam55555.github.io/scrambler. No experience required!

#### Main Scrambler (`dist/main`)
- Run `dist/main/ [number]`, where `[number]` is the number of scrambles to generate (as an integer). Default is 0.
- Scrambles will be generated in file `dist/scrambles.txt`.

This main program is the quickest and most versatile. It is a modification of the C implementation, and therefore requires C to run. Creates approximately 100000 scrambles per second.

#### Benchmark Generator (`dist/benchmarks`)
- Run `dist/benchmarks`. Live results from each implementation (in the `bin/` directory) will be printed to the terminal.
- Scrambles will be generated to `dist/bm.txt`. These can be used for quality control.

This program requires Bash to run, as well as every programming language interpreter listed below in the "Prerequisites" section.

### How to Run (Language Specific)
#### Prerequisites
All of the following will require a basic knowledge of the terminal. First, navigate to the `bin` directory, where the executable (runnable) files are located, and then run the language-specific command. Also, each will need a different language-specific interpreter, so make sure the following are installed:
- Java (JDK required for development)
- JavaScript (NodeJS terminal client)
- Python
- Ruby
- PHP (terminal client)
- C

#### JavaScript (`bin/scrambler.js`)
```nodejs scrambler.js```

#### Java (`bin/scrambler.java`)
```java scrambler```

#### Ruby (`bin/scrambler.rb`)
```ruby scrambler.rb```

#### C (`bin/scrambler.c`)
`./scrambler`

#### Python (`bin/scrambler.py`)
```python scrambler.py```

#### PHP (`bin/scrambler.php`)
```php scrambler.php```

### Disclaimer
This is not official competition software; it is only a simple algorithm that I quickly wrote in multiple implementations as an exercise in programming languages. If you notice any bugs, please file it as an issue.
