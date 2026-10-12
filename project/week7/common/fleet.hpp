/**
 * @file fleet.hpp
 * @brief The fleet manager's types, shared by every file of week 7.
 * @author Zeid Kootbally
 *
 * @details Position and RobotStatus are the structs from Lecture 6, unchanged.
 */
#pragma once

/**
 * @brief A point on the warehouse floor.
 *
 * Meters, in the warehouse frame: the origin is the charging dock, x points
 * along the aisles and y across them.
 */
struct Position {
  double x{0.0};  ///< meters along the aisles
  double y{0.0};  ///< meters across the aisles
};

/**
 * @brief What one robot reports to the dispatcher.
 */
struct RobotStatus {
  int id{0};                  ///< unique, positive
  double battery_pct{100.0};  ///< 0 to 100; a new robot starts charged
  Position position{};        ///< where the robot is now
  bool busy{false};           ///< true while it carries out a task
};
