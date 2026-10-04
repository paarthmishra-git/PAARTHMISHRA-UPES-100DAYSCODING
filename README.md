<a name="readme-top"></a>

<div align="center">

<img src="docs/banner.svg" alt="Terminal running the challenge program: 43 of 100 days complete" width="900">

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
    .days_done  = 43,
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
<img src="docs/grid.svg" alt="Grid of 100 days: 43 written, 57 uninitialized" width="860">
</div>

<br>

```c
for (int day = 1; day <= 100; day++) {
    if (day <= 43) commit("done");
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

> Click a block to expand it. 👇

<details open>
<summary><b>🟢 Days 41 – 43 · Strings (latest)</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 43 | [`day43q1.c`](./day43q1.c) | Count spaces, digits and special characters in a string |
| 43 | [`day43q2.c`](./day43q2.c) | String practice |
| 42 | [`day42q1.c`](./day42q1.c) · [`day42q2.c`](./day42q2.c) | String practice |
| 41 | [`day41a.c`](./day41a.c) · [`day41b.c`](./day41b.c) · [`day41c.c`](./day41c.c) | String practice |
| 41 | [`day41q1.c`](./day41q1.c) · [`day41q2.c`](./day41q2.c) | String practice |

</details>

<details>
<summary><b>🔵 Days 31 – 40</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 40 | [`day40q2.c`](./day40q2.c) | _add topic_ |
| … | … | … |

</details>

<details>
<summary><b>🟣 Days 1 – 30</b></summary>
<br/>

| Day | Program | Concept |
|:---:|:--------|:--------|
| 7 | [`day7q1.c`](./day7q1.c) · [`day7q2.c`](./day7q2.c) | _add topic_ |
| 6 | [`day6q1.c`](./day6q1.c) · [`day6q2.c`](./day6q2.c) | _add topic_ |
| 5 | [`day5q1.c`](./day5q1.c) · [`day5q2.c`](./day5q2.c) | _add topic_ |
| 4 | [`day4q1.c`](./day4q1.c) · [`day4q2.c`](./day4q2.c) | _add topic_ |
| … | … | … |

</details>

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
    return 0;   // see you on day 44
}
```

<a href="#readme-top">⬆ back to top</a>

</div>
