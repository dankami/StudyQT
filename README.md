# StudyQT
## 简介

演示github中的Qt项目，使用CI持续集成(Github actions)

## status
| [Windows][win-link]| [Ubuntu][ubuntu-link]|[MacOS][macos-link]|[Android][android-link]|[IOS][ios-link]|
|---------------|---------------|-----------------|-----------------|----------------|
| ![win-badge]  | ![ubuntu-badge]      | ![macos-badge] |![android-badge]   |![ios-badge]   |


|[License][license-link]| [Release][release-link]|[Download][download-link]|[Issues][issues-link]|[Wiki][wiki-links]|
|-----------------|-----------------|-----------------|-----------------|-----------------|
|![license-badge] |![release-badge] | ![download-badge]|![issues-badge]|![wiki-badge]|

[win-link]: https://github.com/JaredTao/HelloActions-Qt/actions?query=workflow%3AWindows "WindowsAction"
[win-badge]: https://github.com/JaredTao/HelloActions-Qt/workflows/Windows/badge.svg  "Windows"

[ubuntu-link]: https://github.com/JaredTao/HelloActions-Qt/actions?query=workflow%3AUbuntu "UbuntuAction"
[ubuntu-badge]: https://github.com/JaredTao/HelloActions-Qt/workflows/Ubuntu/badge.svg "Ubuntu"

[macos-link]: https://github.com/JaredTao/HelloActions-Qt/actions?query=workflow%3AMacOS "MacOSAction"
[macos-badge]: https://github.com/JaredTao/HelloActions-Qt/workflows/MacOS/badge.svg "MacOS"

[android-link]: https://github.com/JaredTao/HelloActions-Qt/actions?query=workflow%3AAndroid "AndroidAction"
[android-badge]: https://github.com/JaredTao/HelloActions-Qt/workflows/Android/badge.svg "Android"

[ios-link]: https://github.com/JaredTao/HelloActions-Qt/actions?query=workflow%3AIOS "IOSAction"
[ios-badge]: https://github.com/JaredTao/HelloActions-Qt/workflows/IOS/badge.svg "IOS"

[release-link]: https://github.com/jaredtao/HelloActions-Qt/releases "Release status"
[release-badge]: https://img.shields.io/github/release/jaredtao/HelloActions-Qt.svg?style=flat-square "Release status"

[download-link]: https://github.com/jaredtao/HelloActions-Qt/releases/latest "Download status"
[download-badge]: https://img.shields.io/github/downloads/jaredtao/HelloActions-Qt/total.svg?style=flat-square "Download status"

[license-link]: https://github.com/jaredtao/HelloActions-Qt/blob/master/LICENSE "LICENSE"
[license-badge]: https://img.shields.io/badge/license-MIT-blue.svg "MIT"


[issues-link]: https://github.com/jaredtao/HelloActions-Qt/issues "Issues"
[issues-badge]: https://img.shields.io/badge/github-issues-red.svg?maxAge=60 "Issues"

[wiki-links]: https://github.com/jaredtao/HelloActions-Qt/wiki "wiki"
[wiki-badge]: https://img.shields.io/badge/github-wiki-181717.svg?maxAge=60 "wiki"

## 项目进度

|Tag|功能|
|--|--|
|0.1.0|五个平台都能够自动编译|
|0.1.1|配置文件拆分|
|0.1.2|Windows可以自动打包、发布|
|0.1.3|Windows和MacOS可以同时自动打包、发布|

## 原理



### Qt项目的编译流程

1. 安装Qt环境

这一步用Actions模板：jurplel/install-qt-action

2. 获取项目代码

这一步用Actions官方核心模板：actions/checkout@v1

3. 执行qmake、make

这一步用自定义脚本，可以换成qbs、cmake、gn、ninja等构建工具

4. 执行test

这一步可以引入单元测试、自动化UI测试等。(暂不提供方案)

5. 执行deployment

这一步执行发布流程，可以参考博客教程

