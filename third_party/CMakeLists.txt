# 关闭第三方库测试 / 示例（很重要！）
set(FMT_TEST OFF CACHE BOOL "" FORCE)
set(SPDLOG_BUILD_TESTS OFF CACHE BOOL "" FORCE)

# 添加子模块
add_subdirectory(fmt)
add_subdirectory(hical)
add_subdirectory(cxxopts)
