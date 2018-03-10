/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

namespace consoleColor
{
	constexpr char const* red() { return "\033[1;31m"; }
	constexpr char const* green() { return "\033[1;32m"; }
	constexpr char const* yellow() { return "\033[1;33m"; }
	constexpr char const* cyan() { return "\033[1;36m"; }
	constexpr char const* bold() { return "\033[1m"; }
	constexpr char const* inverse() { return "\033[7m"; }
	constexpr char const* reset() { return "\033[0m"; }
}
