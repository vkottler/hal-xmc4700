/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_DIM : uint8_t
{
    using_own_dither_unit /*!< Slice is using its own dither unit */,
    connected_dither_unit_slice_0 =
        1 /*!< Slice is connected to the dither unit of slice 0. */
};
static_assert(sizeof(CCU40_CC40_TC_DIM) == 1);

/**
 * Converts CCU40_CC40_TC_DIM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_DIM instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_DIM";

    switch (instance)
    {
    case CCU40_CC40_TC_DIM::using_own_dither_unit:
        result = "using_own_dither_unit";
        break;
    case CCU40_CC40_TC_DIM::connected_dither_unit_slice_0:
        result = "connected_dither_unit_slice_0";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_DIM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_DIM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "using_own_dither_unit", 21)))
    {
        output = CCU40_CC40_TC_DIM::using_own_dither_unit;
    }
    else if ((result = !strncmp(data, "connected_dither_unit_slice_0", 29)))
    {
        output = CCU40_CC40_TC_DIM::connected_dither_unit_slice_0;
    }

    return result;
}

}; // namespace XMC4700
