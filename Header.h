#pragma once
#pragma warning(disable : 5105)

#include <QtCore/QCoreApplication>

#include <QDate>
#include <QRegExpValidator>
#include <QTextCodec>
#include <QTime>
#include <QDebug>

#if defined __has_include && __has_include("QMessageBox")
#include <QColorDialog>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QMessageBox>
#include <QShortcut>
#include <QTableView>
#include <QTableWidget>
#endif

#if defined __has_include && __has_include("QSql")
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>
#endif

#if defined __has_include && __has_include("QMediaPlayer")
#include <QMediaPlayer>
#include <QMediaPlaylist>
#endif

#include <QFileDialog>
#include <QResizeEvent>
#include <QSettings>
#include <QSharedMemory>
#include <QTimer>
#include <QlineEdit>

#include <QPainter>

#include <qt_windows.h>

#include <atomic>
#include <chrono>
#include <concepts>
#include <execution>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iostream>
#include <mutex>
#include <optional>
#include <random>
#include <string>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <utility>
#include <variant>
#include <vector>

//#if defined __has_include && __has_include ("benchmark.h")
//#include <benchmark.h>
//#endif

//#include <opencv2/opencv.hpp>
#include <range/v3/all.hpp>
#include <gtest/gtest.h>

namespace fs = std::filesystem;
using namespace std::chrono_literals;
using namespace ranges;

using i8 = char;
using u8 = unsigned char;
using i16 = short;
using u16 = unsigned short;
using i32 = int;
using u32 = unsigned int;
using i64 = long;
using u64 = unsigned long;

// template<typename ...Ts> struct overload : Ts...{using Ts::operator()...; };
// template<typename ...Ts> overload(Ts...) -> overload<Ts...>;
