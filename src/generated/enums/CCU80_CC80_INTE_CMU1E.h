/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_INTE_CMU1E : uint8_t
{
    value1 /*!< Compare Match while counting up interrupt is disabled */,
    value2 = 1 /*!< Compare Match while counting up interrupt is enabled */
};
static_assert(sizeof(CCU80_CC80_INTE_CMU1E) == 1);

/**
 * Converts CCU80_CC80_INTE_CMU1E to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_INTE_CMU1E instance)
{
    const char *result = "UNKNOWN CCU80_CC80_INTE_CMU1E";

    switch (instance)
    {
    case CCU80_CC80_INTE_CMU1E::value1:
        result = "value1";
        break;
    case CCU80_CC80_INTE_CMU1E::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_INTE_CMU1E.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_INTE_CMU1E &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_INTE_CMU1E::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_INTE_CMU1E::value2;
    }

    return result;
}

}; // namespace XMC4700
