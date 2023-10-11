/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_INTS_PMUS : uint8_t
{
    value1 /*!< Period match while counting up not detected */,
    value2 = 1 /*!< Period match while counting up detected */
};
static_assert(sizeof(CCU40_CC40_INTS_PMUS) == 1);

static constexpr uint16_t CCU40_CC40_INTS_PMUS_id = 135;

/**
 * Converts CCU40_CC40_INTS_PMUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INTS_PMUS instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INTS_PMUS";

    switch (instance)
    {
    case CCU40_CC40_INTS_PMUS::value1:
        result = "value1";
        break;
    case CCU40_CC40_INTS_PMUS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INTS_PMUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INTS_PMUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INTS_PMUS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INTS_PMUS::value2;
    }

    return result;
}

}; // namespace XMC4700
