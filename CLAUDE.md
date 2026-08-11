# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

C++ algorithm practice (刷题) on [洛谷 (Luogu)](https://www.luogu.com.cn/). Goal: complete all **271 problems** in Luogu's "深入浅出基础篇" series. Each chapter is its own Visual Studio project.

Progress is tracked in `README.md` — keep it in sync when problems are completed. **README.md is the authoritative progress source**; CLAUDE.md intentionally omits live counts to avoid staleness.

## Repo Structure

```
刷题/
├── 洛谷/
│   └── 深入浅出基础篇/
│       ├── 入门1_顺序结构/
│       ├── 入门2_分支结构/
│       ├── 入门3_循环结构/
│       ├── 入门4_数组/
│       └── ...
├── 力扣/
├── README.md
├── CLAUDE.md
└── .gitignore
```

Each chapter directory contains:
- `<chapter>.sln` / `<chapter>.vcxproj` / `<chapter>.vcxproj.filters` — VS project files
- `<chapter>/` subdirectory — VS-generated project metadata (ignore)
- `x64/` — build output (gitignored)
- `P<id><name>.cpp` / `B<id><name>.cpp` — one file per problem
- `README.md` — chapter problem-index table (see Chapter README Convention below)

Chapter directories use the pattern `入门N_<中文名称>` (e.g., `入门3_循环结构`). The VS projects exist inside these chapter directories.

**GitHub remote:** `wenshuo-zh/algorithm-practice` on branch `main`.

### Creating a new chapter

When starting a fresh chapter (e.g., 入门5), scaffold in Visual Studio 2022:

1. **Create project:** File → New → Project → "Empty Project" (C++, Windows, Console). Name it exactly `<chapter>.sln` (e.g., `入门5_字符串.sln`), place inside `洛谷/深入浅出基础篇/<chapter>/`.
2. **Add chapter README.md:** Copy the table template from an existing chapter, set progress to `0 / N`, and add a "返回总览" link.
3. **Update main README.md:** Add a new row in the 进度总览 table with the chapter's Luogu 题单 link.
4. **Commit:** `git add` the new directory + main README, commit with message `初始化：<chapter>框架（0/N），进度<X>/271`.

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

1. In `<chapter>.vcxproj`, find the `<ItemGroup>` containing `<ClCompile Include="...">` and replace the `Include` value (or add the whole `<ClCompile>` + `<ItemGroup>` block if none exists):
   ```xml
   <ItemGroup>
     <ClCompile Include="P1234题目名.cpp" />
   </ItemGroup>
   ```
2. In `<chapter>.vcxproj.filters`, do the same — find the `<ClCompile>` inside an `<ItemGroup>` and replace it, or add the block if none exists:
   ```xml
   <ItemGroup>
     <ClCompile Include="P1234题目名.cpp">
       <Filter>源文件</Filter>
     </ClCompile>
   </ItemGroup>
   ```

Both files must be updated. The vcxproj controls compilation; the filters file controls IDE display. **Never include more than one `<ClCompile>`** — two `.cpp` files in one project = linker error (duplicate `main`).

The `Include` attribute uses the **literal filesystem filename** (spaces written as spaces, not `%20`). URL-encoding (`%20`) is only for GitHub links in README files.

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

## Chapter README Convention

Each chapter directory MUST have a `README.md` containing a problem-index table. Each row links to the source file on GitHub:

```markdown
## 入门N_章节名（X/Y 状态）

| 题号 | 题目 | 技巧/考点 | 注意点/踩坑 |
|------|------|-----------|------|
| P1001 | [A+B Problem](https://github.com/wenshuo-zh/algorithm-practice/blob/main/洛谷/.../P1001A+Bproblem.cpp) | 基本输入输出 | - |
```

Rules:
- **After solving each problem**, add its row to the chapter README with technique + pitfall notes
- Link to GitHub blob URL (not raw), so the file renders in the browser
- **URL-encode spaces as `%20`** in filenames — e.g., `P4956%20Davor.cpp` not `P4956 Davor.cpp`. This applies ONLY to GitHub URLs; vcxproj `Include` attributes use literal filenames (spaces as-is)
- Update the progress counter in the heading when the chapter's count changes
- Every chapter README has a "返回总览" link back to the main `README.md`

**注意点/踩坑 column — symbol conventions:**

| Symbol | Meaning | When to use |
|--------|---------|-------------|
| `-` | No issues | Clean solution, nothing noteworthy |
| `🔧` | Bug / pitfall | You hit a real bug (wrong approach, off-by-one, overflow, logic error) and fixed it |
| `⚠️` | Known limitation | Solution is incomplete, passes only partial tests, or has a caveat the reader should know |

Keep notes concise. Examples:
- `🔧 j<=i 导致自匹配，改 j<i 删 /2（待修）`
- `⚠️ 待完善：n≤50需高精度，当前int必溢出`
- `🔧 minn 初值 101 太小，改 1e9`

**Known-bug protocol:** If a README marks a solution with `🔧` and "（待修）" or `⚠️` "待完善", the corresponding `.cpp` file MUST have a `// TODO` comment at the top explaining the issue.

## Main README.md Format

The root `README.md` is the **authoritative progress source** (CLAUDE.md intentionally omits live counts to avoid staleness). It contains:

- **Progress table:** one row per chapter with the Luogu 题单 link, chapter README link, progress fraction, and status
- **Overall line:** `**洛谷进度：X / 271**` followed by a 10-segment progress bar and percentage
- **Status values:** `✅ 完成` (completed), `🔄 进行中` (in progress) with optional notes in parentheses

**Progress bar format:** 10 filled/unfilled squares — `🟩` = filled, `⬜` = empty. Calculate: `floor(percentage / 10)` green squares, rest white. Example at 24.4%: `🟩🟩⬜⬜⬜⬜⬜⬜⬜⬜ (24.4%)`

**When updating:** after each commit, update the chapter's row in the 进度总览 table AND the overall `**洛谷进度：X / 271**` line with recalculated bar + percentage.

## Known Problem Issues

Some problems have known limitations noted with `// TODO` comments:

- **P1009 阶乘之和**: n≤50 requires big-integer arithmetic (高精度). Current solution uses `int` and will overflow for larger n. Marked `// TODO: 待完善 — n≤50需要高精度，等刷到算法1-1再补`.

When a solution is incomplete or only passes partial test cases, mark it clearly with a `// TODO` comment at the top of the file explaining what's missing.

## Permissions

The following are pre-approved in `.claude/settings.local.json` — no permission prompts needed:
- `git add/commit/push/pull/remote/branch` operations
- `WebSearch` (for looking up problem hints)
- `WebFetch` from `www.luogu.com.cn` (for reading problem statements)

## Commit Workflow

After solving a problem:
1. Add the `.cpp` file
2. Update the vcxproj and vcxproj.filters to point to it (see single-file constraint above)
3. Update **both** README files:
   - **Chapter README**: add a row with 题号, 题目 (GitHub link), 技巧/考点, 注意点/踩坑; update the (X/Y) counter
   - **Main `README.md`**: update the chapter row (e.g., `5 / 21` → `6 / 21`) and the overall line `**洛谷进度：X / 271**` + percentage
4. Stage all changed files: `git add <cpp-file> <vcxproj> <vcxproj.filters> <chapter>/README.md README.md`
5. Commit with message format: `完成：<章节> +N题 (<题号列表>)，进度<current>/271`
6. Push: `git push origin main`

Example commit message:
```
完成：入门3循环结构 +1题 (P1980)，进度38/271
```
