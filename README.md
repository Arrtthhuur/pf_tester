# pf_tester - The (un)official ft_printf Tester 

This repository contains a makefile with different rules to test your ft_printf project.
The makefile will do the following tests :

- Check thoroughly c s d u i p x X % conversions
- Check for memory leaks
- Simple checks

:warning:All the tests made are not the official tests:warning:

## Installation

```bash
git clone git@github.com:Arrtthhuur/pf_tester.git
```
### Path

Make sure to have the following path and folders:
```
|
|__ ft_printf/
|__ pf_tester/
```

## Usage

(NB: the header file causes `-Wformat` errors, ignore them)

Go to the directory where you cloned and run one of the following commands:

### Full tests

Tests c s d i u p x X % conversions against the official printf.

```bash
make tester
```

Displays an "interface" showing in green what the official printf prints, and in red what your ft_printf prints. As well as a green "OK" if the differential output count is 0, a red "KO" otherwise.

In the `pf_tester.c`, you can comment the `#define TEST_` to remove a specific conversion from the tests.

#### "Edge" cases covered

`c` : All printable and control characters, extended ASCII and null character.

`s` : Empty and null string.

`d` : INT_MAX and INT_MIN.

`i` : INT_MAX and INT_MIN.

`u` : Negatives and UINT_MAX.

`x` : UINT_MAX.

`X` : UINT_MAX.

`p` : Negative, null, UINT_MAX and ULLONG_MAX.

### Small tests

Edit `main.c` as pleased to test a specific conversion.

```bash
make main
```

### Leak tests

Detects memory leaks.

```bash
make leaks
```
This will make an infinite loop, causing the program to get "stuck".

One has to open another terminal in the same directory and run the command:

```bash
leaks a.out
```

## Contributing
Any suggestions, contributions or bugs reporting ? Contact abeznik@student.codam.nl
