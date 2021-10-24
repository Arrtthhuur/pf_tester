# pf_tester - The (un)Official ft_printf Tester 

This repository contains a makefile with different rules to test your ft_printf project.
The makefile will do the following tests :

- Check thoroughly `c s d i u x X p %` conversions

:warning: All the tests made are not the official tests :warning:

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

Tests `c s d i u x X p %` conversions against the official printf.

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

## Contributing
Any suggestions, contributions or bugs reporting ? Contact abeznik@student.codam.nl
