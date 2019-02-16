/*
 * Copyright (C) 2019 Codership Oy <info@codership.com>
 *
 * This file is part of wsrep-lib.
 *
 * Wsrep-lib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Wsrep-lib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with wsrep-lib.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef WSREP_VERSION_HPP
#define WSREP_VERSION_HPP

/** @file version.hpp
 *
 * Wsrep library version numbers. The versioning follows semantic
 * versioning (https://semver.org/).
 *
 * Minor version will be bumped when there are backwards compatible
 * changes in the public API. This implies that major backwards incompatible
 * cannot not be introduced without a change in wsrep-API.
 *
 * Patch version will be bumped for releases which fix bugs but do not change
 * public API.
 */

/**
 * Major version number.
 */
#define WSREP_LIB_VERSION_MAJOR 1
/**
 * Minor version number.
 */
#define WSREP_LIB_VERSION_MINOR 0
/**
 * Patch version number.
 */
#define WSREP_LIB_VERSION_PATCH 0
/**
 * Lowest supported wsrep-API version.
 */
#define WSREP_LIB_MIN_API_VERSION 26
/**
 * Highest supported wsrep-API version.
 */
#define WSREP_LIB_MAX_API_VERSION 26

#endif // WSREP_VERSION_HPP
