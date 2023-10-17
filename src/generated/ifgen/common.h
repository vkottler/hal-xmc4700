/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <bit>
#include <cstdint>
#include <istream>
#include <ostream>
#include <spanstream>
#include <streambuf>
#include <utility>

namespace XMC4700
{

/* Enforce that this isn't a mixed-endian system. */
static_assert(std::endian::native == std::endian::big or
              std::endian::native == std::endian::little);

/* Create useful aliases for bytes. */
template <std::size_t Extent = std::dynamic_extent>
using byte_span = std::span<std::byte, Extent>;
template <std::size_t size> using byte_array = std::array<std::byte, size>;

/* Abstract byte-stream interfaces. */
using byte_istream = std::basic_istream<std::byte>;
using byte_ostream = std::basic_ostream<std::byte>;

/* Concrete byte-stream interfaces (based on span). */
using byte_spanbuf = std::basic_spanbuf<std::byte>;
using byte_spanstream = std::basic_spanstream<std::byte>;

}; // namespace XMC4700
