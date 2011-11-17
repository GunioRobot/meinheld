# -*- coding: utf-8 -*-

import util

def test_simple():
    path = "/"
    env, data = util.run_client(path=path)
    assert(path == env["PATH_INFO"])

def test_encode():
    path = "/あいうえお"
    env, data = util.run_client(path=path)
    assert(path == env["PATH_INFO"])



