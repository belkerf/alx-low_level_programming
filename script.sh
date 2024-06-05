#!/bin/bash
git log | grep  "commit" | head -n 5 | tr  -d "commit"
