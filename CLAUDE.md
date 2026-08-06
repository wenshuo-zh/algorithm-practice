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
│       ├── 入门2_分支结构/        # ✅ 18/18 done
│       ├── 入门3_循环结构/        # 🔄 in progress (5/21)
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

Chapter directories use the pattern `入门N_<中文名称>` (e.g., `入门3_循环结构`). The VS projects exist inside these chapter directories.

## Build & Run

### Via Visual Studio 2022 (primary)

Open the chapter's `.sln` (e.g., `入门3_循环结构/入门3_循环结构.sln`), build with **Ctrl+Shift+B**, run with **Ctrl+F5**.

### Via command line (MSVC)

```
cl /EHsc /std:c++17 /Fe:out.exe <path-to-cpp>
```

Note: Chinese-character paths may cause issues with `cl`; when in doubt, use VS or run from within the chapter directory.

## The single-file constraint — CRITICAL

Each vcxproj contains **exactly one** `<ClCompile Include="...">` entry because every problem defines its own `main()`. Two `.cpp` files in the same project = linker error.

**When adding a new problem or switching which problem to compile:**

1. In `<chapter>.vcxproj`, replace the `<ClCompile Include="...">` line:
   ```xml
   <ClCompile Include="P1234题目名.cpp" />
   ```
2. In `<chapter>.vcxproj.filters`, replace the entire `<ClCompile>` block (the `<Filter>` child element must be included):
   ```xml
   <ClCompile Include="P1234题目名.cpp">
     <Filter>源文件</Filter>
   </ClCompile>
   ```

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

## Known Problem Issues

Some problems have known limitations noted with `// TODO` comments:

- **P1009 阶乘之和**: n≤50 requires big-integer arithmetic (高精度). Current solution uses `int` and will overflow for larger n. Marked `// TODO: 待完善 — n≤50需要高精度，等刷到算法1-1再补`.

When a solution is incomplete or only passes partial test cases, mark it clearly with a `// TODO` comment at the top of the file explaining what's missing.

## Commit Workflow

After solving a problem:
1. Add the `.cpp` file
2. Update the vcxproj and vcxproj.filters to point to it (see single-file constraint above)
3. Update `README.md` progress counter — update both:
   - The chapter row in the progress table (e.g., `5 / 21` → `6 / 21`)
   - The overall progress line: `**洛谷进度：38 / 271**` and the percentage
4. Stage all changed files: `git add <cpp-file> <vcxproj> <vcxproj.filters> README.md`
5. Commit with message format: `完成：<章节> +N题 (<题号列表>)，进度<current>/271`

Example commit message:
```
完成：入门3循环结构 +1题 (P1980)，进度38/271
```
