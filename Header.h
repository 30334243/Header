#pragma once
#pragma warning(disable : 5105)

#if defined __has_include && __has_include ("QtCore/QCoreApplication")
#include <QtCore/QCoreApplication>
#endif
#if defined __has_include && __has_include ("QRegExpValidator")
#include <QRegExpValidator>
#endif
#if defined __has_include && __has_include ("QTextCodec")
#include <QTextCodec>
#endif
#if defined __has_include && __has_include ("QTime")
#include <QTime>
#endif
#if defined __has_include && __has_include ("QDate")
#include <QDate>
#endif
#if defined __has_include && __has_include ("QProcess")
#include <QProcess>
#endif

#if defined __has_include && __has_include ("QMessageBox")
#include <QMessageBox>
#include <QTableView>
#include <QTableWidget>
#include <QColorDialog>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QShortcut>
#include <QGraphicsSceneMouseEvent>
#endif

#if defined __has_include && __has_include ("QSql")
#include <QSql>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#endif

#if defined __has_include && __has_include ("QMediaPlayer")
#include <QMediaPlayer>
#include <QMediaPlaylist>
#endif

#if defined __has_include && __has_include ("QSettings")
#include <QSettings>
#endif
#if defined __has_include && __has_include ("QSharedMemory")
#include <QSharedMemory>
#endif
#if defined __has_include && __has_include ("QTimer")
#include <QTimer>
#endif
#if defined __has_include && __has_include ("QResizeEvent")
#include <QResizeEvent>
#endif
#if defined __has_include && __has_include ("QFileDialog")
#include <QFileDialog>
#endif
#if defined __has_include && __has_include ("QlineEdit")
#include <QlineEdit>
#endif
#if defined __has_include && __has_include ("QPainter")
#include <QPainter>
#endif
#if defined __has_include && __has_include ("qt_windows.h")
#include <qt_windows.h>
#endif

#include <string>
#include <concepts>
#include <type_traits>
#include <fstream>
#include <execution>
#include <iostream>
#include <utility>
#include <filesystem>
#include <unordered_map>
#include <mutex>
#include <chrono>
#include <random>
#include <atomic>
#include <functional>
#include <vector>
#include <variant>
#include <execution>
#include <optional>
#include <tuple>
#include <cuchar>



//#if defined __has_include && __has_include ("benchmark.h")
//#include <benchmark.h>
//#endif

//#include <opencv2/opencv.hpp>
#include <range/v3/all.hpp>

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

//template<typename ...Ts> struct overload : Ts...{using Ts::operator()...; };
//template<typename ...Ts> overload(Ts...) -> overload<Ts...>;
