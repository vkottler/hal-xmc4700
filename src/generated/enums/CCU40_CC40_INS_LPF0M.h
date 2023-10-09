/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_INS_LPF0M : uint8_t
{
    value1 /*!< LPF is disabled */,
    value2 = 1 /*!< 3 clock cycles of fCCU4 */,
    value3 = 2 /*!< 5 clock cycles of fCCU4 */,
    value4 = 3 /*!< 7 clock cycles of fCCU4 */
};
static_assert(sizeof(CCU40_CC40_INS_LPF0M) == 1);

static constexpr uint16_t CCU40_CC40_INS_LPF0M_id = 1362;

/**
 * Converts CCU40_CC40_INS_LPF0M to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INS_LPF0M instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INS_LPF0M";

    switch (instance)
    {
    case CCU40_CC40_INS_LPF0M::value1:
        result = "value1";
        break;
    case CCU40_CC40_INS_LPF0M::value2:
        result = "value2";
        break;
    case CCU40_CC40_INS_LPF0M::value3:
        result = "value3";
        break;
    case CCU40_CC40_INS_LPF0M::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INS_LPF0M.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INS_LPF0M &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INS_LPF0M::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INS_LPF0M::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_INS_LPF0M::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_INS_LPF0M::value4;
    }

    return result;
}

}; // namespace XMC4700
