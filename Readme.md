# LANG

## Operators

itemOperators defined but have as much as operator that is needed..

- `+`
- `+=`
- `-`
- `--`
- `*`
- `*=`
- `/`
- `?`
- `:` 
- `()` lambda
- `*` reference
- `>` bit-shift 
- `<`
- `<<` freeOperator
- `>>`

## Variables

### Usage

- name : int 

### Types

#### Basics

- Void `void`
- Bool `bool`
- Char `string`
- Int `int`
- Float `float`

- Function `func`

- Array.. `[]`
- Pointer `*`


- String `string`

#### Constant

- const

#### class & interface

In progress

#### Acces

- public
    - *can be call inside, outside the class & inside is child* 
        - `class.publicVar` 
        - `this(ineritance).protectedVar`
        - `this(Parent).protectedVar`
- protected
    - *can be use inside the class & inside is child.*
        - `this(ineritance).protectedVar`
        - `this(Parent).protectedVar`

- private 
    - *can't be use outside the class*
        - `this(Parent).protectedVar`

## Function

### Argument & Returns

func name :: int, char : string {

}

### Template

func name[T]:: int, T : string {

}

func name[T, A]:: A, T : [T,A] {

}
###

Filemanager:
**pro & cons**:

- include
- import < shorter


func<template>