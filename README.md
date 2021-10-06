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
### Full tests
```bash
make tester
```
Launches the full tester: 

c s d i u p x X % conversions.

Displays an "interface" showing in green what the official printf prints, and in red what your ft_printf prints. As well as a green "OK" if the differential output count is 0, a red "KO" otherwise.

### Small tests
```bash
make main
```
Edit main.c as pleased to test a specific 

### Leak tests
```bash
make leaks
```
This will make an infinite loop, causing the program to get "stuck", allowing us to detect memory leaks within our program.

One has to open another terminal, in the same directory and run the command:
```bash
leaks a.out
```

## Support
Slack: abeznik

Email: abeznik@student.codam.nl

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.