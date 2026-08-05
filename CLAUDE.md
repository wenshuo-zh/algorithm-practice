# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

C++ algorithm practice (刷题) on [洛谷 (Luogu)](https://www.luogu.com.cn/). Goal: complete all **271 problems** in Luogu's "深入浅出基础篇" series. Each chapter is its own Visual Studio project.

Progress is tracked in `README.md` — keep it in sync when problems are completed.

## Repo Structure

```
刷题/
├── 洛谷/
│   └── 深入浅出基础篇/
│       ├── 入门1_顺序结构/        # ✅ 15/15 done
│       ├── 入门2_分支结构/        # 🔄 in progress
│       └── ...                    # future chapters
├── 力扣/                          # planned
├── README.md                      # progress tracker
├── CLAUDE.md
└── .gitignore
```

Each chapter directory contains:
- `<chapter>.sln` / `<chapter>.vcxproj` / `<chapter>.vcxproj.filters` — VS project files
- `<chapter>/` subdirectory — VS-generated project metadata (ignore)
- `x64/` — build output (gitignored)
- `P<id><name>.cpp` / `B<id><name>.cpp` — one file per problem

## Build & Run

### Via Visual Studio 2022

Open the chapter's `.sln`, build with **Ctrl+Shift+B**, run with **Ctrl+F5**.

### Via command line (MSVC)

```
cl /EHsc /std:c++17 /Fe:out.exe <path-to-cpp>
```

### The single-file constraint — CRITICAL

Each vcxproj contains **exactly one** `<ClCompile Include="...">` entry because every problem defines its own `main()`. Two `.cpp` files in the same project = linker error.

**When adding a new problem or switching which problem to compile:**

1. In `<chapter>.vcxproj`, replace the `<ClCompile Include="...">` line with the new filename:
   ```xml
   <ClCompile Include="P1234题目名.cpp" />
   ```
2. Do the same in `<chapter>.vcxproj.filters` (inside the `<ClCompile>` group).

Both files must be updated. The vcxproj controls compilation; the filters file controls IDE display.

## Problem Naming Convention

Each `.cpp` file is named: **`<题号><题目简称>.cpp`**

- **P####**: Standard problems (e.g., `P1001A+Bproblem.cpp`)
- **B####**: Basic problems (e.g., `B2002HelloWorld.cpp`)
- Always include the letter prefix — `P5711闰年判断.cpp`, not `5711闰年判断.cpp`

## Coding Conventions

- Single-file solutions — no headers, no multi-file compilation
- Minimal boilerplate: `#include<iostream>`, `using namespace std;`, `int main()` → `return 0;`
- Additional headers (e.g., `<cmath>`, `<algorithm>` for `swap`) only when needed
- Input via `cin`, output via `cout`; use `printf` for formatted output (e.g., `%02d`)
- Chinese comments for non-obvious logic; simple solutions need no comments

## Commit Workflow

After solving a problem:
1. Add the `.cpp` file
2. Update the vcxproj and vcxproj.filters to point to it
3. Update `README.md` progress counter
4. Commit with message format: `完成：<章节> +N题 (<题号列表>)，进度<current>/271`
