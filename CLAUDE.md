# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

C++ algorithm practice (刷题) on [洛谷 (Luogu)](https://www.luogu.com.cn/). Goal: complete all **271 problems** in Luogu's "深入浅出基础篇" series. Each chapter is its own Visual Studio project.

## Repo Structure

```
刷题/
├── 洛谷/
│   └── 深入浅出基础篇/
│       ├── 入门1_顺序结构/        # ✅ 15/15 done
│       ├── 入门2_分支结构/        # 🔄 in progress (3/16)
│       └── ...                    # future chapters
├── 力扣/                          # planned
├── README.md                      # progress tracker
└── .gitignore
```

## Build & Test

- **IDE**: Visual Studio 2022
- **Language**: C++17
- **Toolset**: v143 (VS 2022)
- **Platform**: x64

### Testing a single problem

Each Visual Studio project (`.sln`/`.vcxproj`) corresponds to one chapter. Only **one `.cpp` file is active in the vcxproj at a time** (the `<ClCompile Include="...">` entry), because multiple `main()` functions would cause linker errors.

To test a specific problem:
1. Open the chapter's `.sln` in Visual Studio, OR
2. Edit the `.vcxproj` `<ClCompile Include="...">` entry to point to the target `.cpp` file
3. Build and run (F5 / Ctrl+F5 in VS)

Or compile directly from command line (no VS required):
```
cl /EHsc /std:c++17 /Fe:out.exe <path-to-cpp>
```

When adding a **new problem**, the `.cpp` file must also be added to the `.vcxproj`'s `<ClCompile>` group.

## Problem Naming Convention

Each `.cpp` file is named: **`<题号><题目简称>.cpp`** — e.g., `P1001A+Bproblem.cpp`, `B2002HelloWorld.cpp`, `P5712Apples.cpp`.

Problem IDs with prefix:
- **P####**: Standard problems (e.g., P1001)
- **B####**: Basic problems (e.g., B2002)

## Coding Conventions

- Single-file solutions — no headers, no multi-file compilation
- Minimal boilerplate: `#include<iostream>`, `using namespace std;`, `int main()` → `return 0;`
- Additional headers (e.g., `<cmath>`) only when needed
- Input via `cin`, output via `cout` (occasionally `printf` for formatting)
- No comments in simple solutions; Chinese comments for explanation in complex ones
- Each solution is self-contained and submits directly to the Luogu online judge
