/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_INTE_PME : uint8_t
{
    value1 /*!< Period Match interrupt is disabled */,
    value2 = 1 /*!< Period Match interrupt is enabled */
};
static_assert(sizeof(CCU40_CC40_INTE_PME) == 1);

/**
 * Converts CCU40_CC40_INTE_PME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INTE_PME instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INTE_PME";

    switch (instance)
    {
    case CCU40_CC40_INTE_PME::value1:
        result = "value1";
        break;
    case CCU40_CC40_INTE_PME::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INTE_PME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INTE_PME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INTE_PME::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INTE_PME::value2;
    }

    return result;
}

}; // namespace XMC4700
