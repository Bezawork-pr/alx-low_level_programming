#!/usr/bin/python3
# uncompyle6 version 3.8.0
# Python bytecode 3.4 (3310)
# Decompiled from: Python 3.8.10 (default, Mar 15 2022, 12:22:08) 
# [GCC 9.4.0]
# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-05 16:44:37
# Size of source mod 2**32: 195 bytes
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
print("{}".format(ok))
# okay decompiling crackme4.pyc
