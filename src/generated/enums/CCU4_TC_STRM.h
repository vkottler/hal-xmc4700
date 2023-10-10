/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU4_TC_STRM : uint8_t
{
    value1 /*!< Sets run bit only (default start) */,
    value2 = 1 /*!< Clears the timer and sets run bit (flush/start) */
};
static_assert(sizeof(CCU4_TC_STRM) == 1);

static constexpr uint16_t CCU4_TC_STRM_id = 65;

/**
 * Converts CCU4_TC_STRM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU4_TC_STRM instance)
{
    const char *result = "UNKNOWN CCU4_TC_STRM";

    switch (instance)
    {
    case CCU4_TC_STRM::value1:
        result = "value1";
        break;
    case CCU4_TC_STRM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU4_TC_STRM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU4_TC_STRM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU4_TC_STRM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU4_TC_STRM::value2;
    }

    return result;
}

}; // namespace XMC4700
