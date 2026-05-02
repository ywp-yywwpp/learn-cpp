# AGENTS.md

## Build System

- **CMake 4.0+** with **Ninja** generator on **MSYS2 MINGW64** (g++ via `C:/msys64/ucrt64/bin/g++.exe`)
- C++ standard: **C++20**
- Presets defined in `CMakeUserPresets.json`

### Setup (first time)

```bash
git submodule update --init --recursive
```

External system deps must be installed via MSYS2 before building:
- `Boost` (>= 1.78)
- `spdlog`

### Build commands

```bash
# Configure + build (Debug)
cmake --preset default
cmake --build --preset default

# Configure + build (Release)
cmake --preset release
cmake --build --preset release

# Run the app
./build/src/my_app.exe
```

### Tests

Tests are not yet implemented. The `tests/CMakeLists.txt` is a placeholder.

## Code Style

- **4-space indent**, LF line endings, UTF-8, trailing whitespace trimmed — see `.editorconfig`
- **clang-format**: Microsoft-based style with **left pointer alignment** (`int* p`), see `.clang-format`
- `.gitattributes` forces LF line endings for all files

## Dependencies

| Dependency | Type       |
| ---------- | ---------- |
| fmt        | submodule  |
| cxxopts    | submodule  |
| hical      | submodule  |
| Boost      | system (MSYS2) |
| spdlog     | system (MSYS2) |

## Architecture

- **`src/main.cpp`** — single-file application entrypoint, currently a trivial "hello world"-style program using `spdlog` and `fmt`
- **`third_party/`** — git submodules, their tests/examples are disabled in `third_party/CMakeLists.txt`
- Build output goes to `build/` (gitignored)

## Plan Mode

When exiting Plan mode, auto-save the plan to `.opencode/plans/<YYYY-MM-DD>-<short-title>.md`.
Create the `.opencode/plans/` directory if it does not exist. The plan file should contain the
goal, approach, and steps planned, suitable for resuming the task later.
