@echo off

if not exist .\\out mkdir .\\out
call gcc .\\main.c -o .\\out\\main.out
call .\\out\main.out
call del .\\out\\main.out