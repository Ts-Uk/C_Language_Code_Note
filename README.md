# C Practice Solutions 🧠

A personal collection of C programming exercises — solved one problem at a time while practicing for contests and building core problem-solving skills.

This repo is a **work in progress**. Problems are added and solved incrementally as I work through each set, rather than all at once.

---

## 📁 Structure

Each problem lives in its own `.c` file, named by section and number, so it's easy to find and compile individually.

```
c-solutions/
├── loop-logic/            # Loop & Logic exercises (numbers, digits, primes, GCD/LCM, etc.)
├── string-exercises/      # String manipulation (length, palindrome, reverse, count, etc.)
├── array-exercises/       # Array operations (sorting, duplicates, merging, searching, etc.)
├── pattern-exercises/     # Pattern printing (triangles, pyramids, diamonds, etc.)
└── README.md
```

### Naming convention

```
<section>_<number>_<short-description>.c
```

Examples:
```
loop-logic/loop_08_proper_divisors.c
string-exercises/string_11_palindrome_check.c
array-exercises/array_22_sort_ascending.c
pattern-exercises/pattern_23_star_pyramid.c
```

---

## ⚙️ Compiling & Running

Each file is a standalone, self-contained C program (`int main()` included). Compile with `gcc`:

```bash
gcc -std=c17 -O2 -Wall -Wextra -o solution loop-logic/loop_08_proper_divisors.c
./solution
```

Or compile everything in a folder at once:

```bash
for f in loop-logic/*.c; do gcc -O2 -o "${f%.c}" "$f"; done
```

---

## 📌 Notes

- Solutions favor **clarity over cleverness** — readable code with `scanf`/`printf` I/O, matching typical judge/contest input formats.
- Edge cases (zero, negative numbers, empty input) are handled where relevant.
- This is a learning log, not a polished library — expect the style to improve over time as more problems get added.

---

## ✅ Progress

| Section | Status |
|---|---|
| Loop & Logic | 🚧 In progress |
| String Exercises | 🚧 In progress |
| Array Exercises | 🚧 In progress |
| Pattern Exercises | 🚧 In progress |

---

*Solving one problem at a time. Updated as new solutions are added.*
