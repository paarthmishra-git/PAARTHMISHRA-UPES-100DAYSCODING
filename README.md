<a name="readme-top"></a>

<div align="center">

<img src="docs/banner.svg" alt="Terminal running the challenge program: 45 of 100 days complete" width="900">

<br>

[`about`](#about) · [`progress`](#progress) · [`puzzles`](#puzzles) · [`day_log`](#day-log) · [`next`](#next) · [`run`](#run) · [`faq`](#faq) · [`stats`](#stats) · [`connect`](#connect)

<br>

<a href="https://github.com/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING/stargazers"><img src="https://img.shields.io/github/stars/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING?style=social" alt="Star" /></a>
&nbsp;
<a href="https://github.com/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING/fork"><img src="https://img.shields.io/github/forks/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING?style=social" alt="Fork" /></a>
&nbsp;
<a href="https://github.com/paarthmishra-git"><img src="https://img.shields.io/github/followers/paarthmishra-git?style=social" alt="Follow" /></a>

</div>

---

<a name="about"></a>
## `#include "about.h"`

A **100-day coding challenge** from my B.Tech in Computer Science and Engineering at **UPES Dehradun**. One idea: show up every day, and do the work in public.

```c
#include <stdio.h>

typedef struct {
    const char *name, *college, *course;
    int days_total, days_done;
} Challenge;

const Challenge me = {
    .name       = "Paarth Mishra",
    .college    = "UPES Dehradun",
    .course     = "B.Tech CSE",
    .days_total = 100,
    .days_done  = 45,
};

#define MIN_HOURS_PER_DAY  1   // at least an hour, every day
#define COMMITS_PER_DAY    1   // one commit per day
#define DAYS_SKIPPED       0   // keep it this way

// focus: problem solving, strings and arrays, clean commented code
```

<details>
<summary><b>The daily loop (click to open)</b></summary>

```c
while (day <= 100) {
    problem = pick();

    do {
        write_code();
        if (!works()) debug();
    } while (!works());

    add_comments();
    commit();
    push();

    day++;   // see you tomorrow
}
```

</details>

<div align="right"><a href="#readme-top">⬆ back to top</a></div>

---

<a name="progress"></a>
## `int days[100];`

<div align="center">
<img src="docs/grid.svg" alt="Grid of 100 days: 45 written, 55 uninitialized" width="860">
</div>

<br>

```c
for (int day = 1; day <= 100; day++) {
    if (day <= 45) commit("done");
    else           /* not written yet */ ;
}
```

**Milestones**

- [x] **Day 1** · `printf("hello, world\n");`
- [x] **Day 10** · first 10 days done
- [x] **Day 25** · a quarter of the way
- [ ] **Day 50** · halfway point
- [ ] **Day 75** · final stretch
- [ ] **Day 100** · `return 0;`

<div align="right"><a href="#readme-top">⬆ back to top</a></div>

---

<a name="puzzles"></a>
## `// guess the output`

Work it out in your head first, then click to reveal the answer.

<details>
<summary><b>Puzzle 1 · Easy 🟢</b></summary>

```c
char s[] = "hello";
s[0] = 'J';
printf("%s\n", s);
```

<details>
<summary>👀 Reveal answer</summary>

**`Jello`**. Because `s` is a `char` array (a modifiable copy), you can change its characters. With `char *s = "hello";` the same edit would be undefined behaviour.

</details>
</details>

<details>
<summary><b>Puzzle 2 · Medium 🟡</b></summary>

```c
printf("%zu\n", sizeof("abc"));
```

<details>
<summary>👀 Reveal answer</summary>

**`4`**. A string literal includes the hidden `'\0'` terminator, so `"abc"` takes 4 bytes.

</details>
</details>

<details>
<summary><b>Puzzle 3 · Medium 🟡</b></summary>

```c
int a[] = {10, 20, 30};
printf("%d\n", *(a + 1));
```

<details>
<summary>👀 Reveal answer</summary>

**`20`**. `a + 1` points at the second element, and `*` reads its value. In other words, `*(a + 1)` is the same as `a[1]`.

</details>
</details>

<div align="right"><a href="#readme-top">⬆ back to top</a></div>

---

<a name="day-log"></a>
## `printf("%s", day_log);`

> Built automatically from the `dayNqM.c` files in this repo. Click a block to expand it. 👇

<!-- DAYLOG:START -->
<details open>
<summary><b>🟢 Days 41 – 45 (latest)</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 45 | [`day45q1.c`](./day45q1.c) | Find the first repeating lowercase alphabet in a string. |
| 44 | [`day44q1.c`](./day44q1.c) | Count how many times a given character appears in a string. |
| 44 | [`day44q2.c`](./day44q2.c) | Count how many times a given character appears in a string. |
| 43 | [`day43q1.c`](./day43q1.c) | Count the number of spaces, digits, and special characters in a… |
| 43 | [`day43q2.c`](./day43q2.c) | Replace all spaces in a string with hyphens. |
| 42 | [`day42q1.c`](./day42q1.c) | Reverse a string. |
| 42 | [`day42q2.c`](./day42q2.c) | Check whether a string is a palindrome. |
| 41 | [`day41a.c`](./day41a.c) | Bubble Sort |
| 41 | [`day41b.c`](./day41b.c) | Find Missing Number (1 to N) |
| 41 | [`day41c.c`](./day41c.c) | Frequency of Each Element |
| 41 | [`day41q1.c`](./day41q1.c) | Count the number of vowels and consonants in a string. |
| 41 | [`day41q2.c`](./day41q2.c) | Convert a lowercase string to uppercase without using toupper(). |

</details>

<details>
<summary><b>🔵 Days 31 – 40</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 40 | [`day40a.c`](./day40a.c) | Spiral Matrix Traversal |
| 40 | [`day40b.c`](./day40b.c) | Rotate Matrix In-Place (90° clockwise) |
| 40 | [`day40c.c`](./day40c.c) | Search in a Sorted 2D Matrix |
| 40 | [`day40d.c`](./day40d.c) | Saddle Point in a Matrix |
| 40 | [`day40q1.c`](./day40q1.c) | Count the number of characters in a string without using strlen… |
| 40 | [`day40q2.c`](./day40q2.c) | Print each character of a string on a new line. |
| 39 | [`day39q1.c`](./day39q1.c) | Find the sum of main diagonal elements for a square matrix. |
| 39 | [`day39q2.c`](./day39q2.c) | Multiply two matrices. |
| 38 | [`day38q1.c`](./day38q1.c) | — |
| 38 | [`day38q2.c`](./day38q2.c) | Check if the elements on the diagonal of a matrix are distinct. |
| 37 | [`day37q1.c`](./day37q1.c) | Find the transpose of a matrix. |
| 37 | [`day37q2.c`](./day37q2.c) | Add two matrices. |
| 36 | [`day36q1.c`](./day36q1.c) | Find the sum of all elements in a matrix. |
| 36 | [`day36q2.c`](./day36q2.c) | Find the sum of all elements in a matrix. |
| 35 | [`day35q1.c`](./day35q1.c) | Rotate an array to the right by k positions. |
| 35 | [`day35q2.c`](./day35q2.c) | Read and print a matrix. |
| 34 | [`day34q1.c`](./day34q1.c) | Delete an element from an array. |
| 34 | [`day34q2.c`](./day34q2.c) | Find the second largest element in an array. |
| 33 | [`day33q1.c`](./day33q1.c) | Insert an element in a sorted array at the appropriate position. |
| 33 | [`day33q2.c`](./day33q2.c) | Insert an element in an array at a given position. |
| 32 | [`day32q1.c`](./day32q1.c) | Find the digit that occurs the most times in an integer number. |
| 32 | [`day32q2.c`](./day32q2.c) | Search in a sorted array using binary search. |
| 31 | [`day31q1.c`](./day31q1.c) | Reverse an array without taking extra space. |
| 31 | [`day31q2.c`](./day31q2.c) | Merge two arrays. |

</details>

<details>
<summary><b>🟣 Days 21 – 30</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 30 | [`day30q1.c`](./day30q1.c) | Count positive, negative, and zero elements in an array. |
| 30 | [`day30q2.c`](./day30q2.c) | Search for an element in an array using linear search. |
| 29 | [`day29q1.c`](./day29q1.c) | Find the maximum and minimum element in an array. |
| 29 | [`day29q2.c`](./day29q2.c) | Count even and odd numbers in an array. |
| 28 | [`day28q1.c`](./day28q1.c) | Read and print elements of a one-dimensional array. |
| 28 | [`day28q2.c`](./day28q2.c) | Find the sum of array elements. |
| 27 | [`day27q1.c`](./day27q1.c) | — |
| 27 | [`day27q2.c`](./day27q2.c) | — |
| 26 | [`day26q1.c`](./day26q1.c) | — |
| 26 | [`day26q2.c`](./day26q2.c) | — |
| 25 | [`day25q1.c`](./day25q1.c) | Write a program to print the following pattern: |
| 25 | [`day25q2.c`](./day25q2.c) | — |
| 24 | [`day24q1.c`](./day24q1.c) | Write a program to print the following pattern: |
| 24 | [`day24q2.c`](./day24q2.c) | Write a program to print the following pattern: |
| 23 | [`day23q1.c`](./day23q1.c) | Write a program to find the sum of the series: 2/3 + 4/7 + 6/11… |
| 23 | [`day23q2.c`](./day23q2.c) | Write a program to print the following pattern: |
| 22 | [`day22q1.c`](./day22q1.c) | Write a program to check if a number is a perfect number. |
| 22 | [`day22q2.c`](./day22q2.c) | Write a program to find the sum of the series: 1 + 3/4 + 5/6 +… |
| 21 | [`day21q1.c`](./day21q1.c) | Write a program to find the 1’s complement of a binary number a… |
| 21 | [`day21q2.c`](./day21q2.c) | Write a program to swap the first and last digit of a number. |

</details>

<details>
<summary><b>🟠 Days 11 – 20</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 20 | [`day20q1.c`](./day20q1.c) | Write a program to find the sum of digits of a number. |
| 20 | [`day20q2.c`](./day20q2.c) | Write a program to find the product of odd digits of a number. |
| 19 | [`day19q1.c`](./day19q1.c) | Write a program to find the HCF (GCD) of two numbers. |
| 19 | [`day19q2.c`](./day19q2.c) | Write a program to find the LCM of two numbers. |
| 18 | [`day18q1.c`](./day18q1.c) | Write a program to check if a number is prime. |
| 18 | [`day18q2.c`](./day18q2.c) | Write a program to print all factors of a given number. |
| 17 | [`day17q1.c`](./day17q1.c) | Write a program to check if a number is a palindrome. |
| 17 | [`day17q2.c`](./day17q2.c) | Write a program to check if a number is an Armstrong number. |
| 16 | [`day16q1.c`](./day16q1.c) | Write a program to reverse a given number. |
| 16 | [`day16q2.c`](./day16q2.c) | Write a program to take a number as input and print its equival… |
| 15 | [`day15q1.c`](./day15q1.c) | Write a program to print the product of even numbers from 1 to… |
| 15 | [`day15q2.c`](./day15q2.c) | Write a program to calculate the factorial of a number. |
| 14 | [`day14q1.c`](./day14q1.c) | Write a program to print numbers from 1 to n. |
| 14 | [`day14q2.c`](./day14q2.c) | Write a program to print the sum of the first n odd numbers. |
| 13 | [`day13q1.c`](./day13q1.c) | Write a program to calculate electricity bill based on units co… |
| 13 | [`day13q2.c`](./day13q2.c) | Write a program to implement a basic calculator using switch-ca… |
| 12 | [`day12q1.c`](./day12q1.c) | Write a program to find profit or loss percentage given cost pr… |
| 12 | [`day12q2.c`](./day12q2.c) | Write a program to calculate library fine based on late days as… |
| 11 | [`day11q1.c`](./day11q1.c) | Write a program to display the day of the week based on a numbe… |
| 11 | [`day11q2.c`](./day11q2.c) | Write a program to display the month name and number of days us… |

</details>

<details>
<summary><b>🟡 Days 1 – 10</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 10 | [`day10q1.c`](./day10q1.c) | Write a program that accepts a percentage (0-100) and assigns a… |
| 10 | [`day10q2.c`](./day10q2.c) | Write a program to classify a triangle as Equilateral, Isoscele… |
| 9 | [`day9q1.c`](./day9q1.c) | Write a program to input three numbers and find the largest amo… |
| 9 | [`day9q2.c`](./day9q2.c) | Write a program to find the roots of a quadratic equation and c… |
| 8 | [`day8q1.c`](./day8q1.c) | Write a program to input a character and check whether it is a… |
| 8 | [`day8q2.c`](./day8q2.c) | Write a program to input a character and check whether it is an… |
| 7 | [`day7q1.c`](./day7q1.c) | Write a program to input an integer and check whether it is pos… |
| 7 | [`day7q2.c`](./day7q2.c) | Write a program to input a year and check whether it is a leap… |
| 6 | [`day6q1.c`](./day6q1.c) | Write a program to calculate simple and compound interest for g… |
| 6 | [`day6q2.c`](./day6q2.c) | Write a program to input time in seconds and convert it to hour… |
| 5 | [`day5q1.c`](./day5q1.c) | Write a program to swap two numbers using third variable. |
| 5 | [`day5q2.c`](./day5q2.c) | Q8: Write a program to find and display the sum of the first n… |
| 4 | [`day4q1.c`](./day4q1.c) | Write a program to calculate the area and circumference of a ci… |
| 4 | [`day4q2.c`](./day4q2.c) | Write a program to convert temperature from celsius to fahrenhe… |
| 3 | [`day3q1.c`](./day3q1.c) | — |
| 3 | [`day3q2.c`](./day3q2.c) | — |
| 2 | [`day2q1.c`](./day2q1.c) | — |
| 2 | [`day2q2.c`](./day2q2.c) | — |
| 1 | [`day1q1.c`](./day1q1.c) | — |
| 1 | [`day1q2.c`](./day1q2.c) | — |

</details>

<!-- DAYLOG:END -->

<details>
<summary><b>💡 Featured snippet: Day 43 (character counter)</b></summary>

```c
//Count the number of spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '\r') {
            continue;  // ignore newline from fgets
        }

        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit((unsigned char)str[i])) {
            digits++;
        } else if (!isalpha((unsigned char)str[i])) {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}
```

</details>

<div align="right"><a href="#readme-top">⬆ back to top</a></div>

---

<a name="next"></a>
## `// declared, not yet defined`

What I've written so far, and what is still just a prototype:

```c
// defined ✔
void variables(void);
void conditions(void);
void loops(void);
void arrays(void);
void strings(void);       // fgets, ctype.h, character counting

// declared, definition coming soon
void functions(void);
void pointers(void);
void structures(void);
void file_handling(void);
```

<div align="right"><a href="#readme-top">⬆ back to top</a></div>

---

<a name="run"></a>
## `$ gcc && ./run`

<details>
<summary><b>Compile and run steps</b></summary>

```bash
# 1. Clone the repo
git clone https://github.com/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING.git
cd PAARTHMISHRA-UPES-100DAYSCODING

# 2. Compile any file
gcc day43q1.c -o day43q1

# 3. Run it
./day43q1          # Linux / macOS
day43q1.exe        # Windows
```

</details>

<details>
<summary><b>No compiler? Try it online</b></summary>

Copy any `.c` file into [OnlineGDB](https://www.onlinegdb.com/online_c_compiler) or [Compiler Explorer](https://godbolt.org/) and run it in your browser.

</details>

---

<a name="faq"></a>
## `// faq`

<details>
<summary><b>What does <code>day43q1.c</code> mean?</b></summary>

`day<N>q<M>.c` means Day **N**, Question **M**. So `day43q1.c` is Day 43, Question 1.

</details>

<details>
<summary><b>Can I use this code?</b></summary>

Yes. Feel free to read, run, and learn from it. If it helps, a ⭐ is appreciated.

</details>

<details>
<summary><b>Want to join the challenge?</b></summary>

Fork this repo, rename it with your name, and start your own 100 days. Open an issue and tell me when you begin.

</details>

<details>
<summary><b>Found a bug or a better solution?</b></summary>

[Open an issue](https://github.com/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING/issues/new) or send a pull request.

</details>

---

<a name="stats"></a>
## `// telemetry`

<details>
<summary><b>GitHub stats (click to open)</b></summary>

<div align="center">

<img height="170" src="https://github-readme-stats.vercel.app/api?username=paarthmishra-git&show_icons=true&theme=github_dark&hide_border=true" alt="stats" />
<img height="170" src="https://github-readme-stats.vercel.app/api/top-langs/?username=paarthmishra-git&layout=compact&theme=github_dark&hide_border=true" alt="top languages" />

<br/>

<img src="https://streak-stats.demolab.com?user=paarthmishra-git&theme=github-dark-blue&hide_border=true" alt="streak" />

<br/>

<img src="https://github-readme-activity-graph.vercel.app/graph?username=paarthmishra-git&theme=github-compact&hide_border=true" alt="activity graph" />

<br/><br/>

<!-- Needs the snake workflow (.github/workflows/snake.yml). Run it once to generate the image. -->
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://raw.githubusercontent.com/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING/output/github-snake-dark.svg" />
  <img alt="Contribution snake" src="https://raw.githubusercontent.com/paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING/output/github-snake.svg" />
</picture>

</div>

</details>

---

<a name="connect"></a>
## `// connect`

<div align="center">

[![GitHub](https://img.shields.io/badge/GitHub-paarthmishra--git-181717?style=for-the-badge&logo=github)](https://github.com/paarthmishra-git)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-your--name-0A66C2?style=for-the-badge&logo=linkedin)](https://www.linkedin.com/in/your-profile)

<br/>

<a href="https://star-history.com/#paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING&Date">
  <img src="https://api.star-history.com/svg?repos=paarthmishra-git/PAARTHMISHRA-UPES-100DAYSCODING&type=Date" alt="Star history" width="500" />
</a>

<br/><br/>

```c
    // if this repo motivates you, drop a star and start your own 100 days
    return 0;   // see you on day 46
}
```

<a href="#readme-top">⬆ back to top</a>

</div>
