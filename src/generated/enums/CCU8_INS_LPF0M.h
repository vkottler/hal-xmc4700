/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_INS_LPF0M : uint8_t
{
    value1 /*!< LPF is disabled */,
    value2 = 1 /*!< 3 clock cycles of fCCU8 */,
    value3 = 2 /*!< 5 clock cycles of fCCU8 */,
    value4 = 3 /*!< 7 clock cycles of fCCU8 */
};
static_assert(sizeof(CCU8_INS_LPF0M) == 1);

static constexpr uint16_t CCU8_INS_LPF0M_id = 106;

/**
 * Converts CCU8_INS_LPF0M to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_INS_LPF0M instance)
{
    const char *result = "UNKNOWN CCU8_INS_LPF0M";

    switch (instance)
    {
    case CCU8_INS_LPF0M::value1:
        result = "value1";
        break;
    case CCU8_INS_LPF0M::value2:
        result = "value2";
        break;
    case CCU8_INS_LPF0M::value3:
        result = "value3";
        break;
    case CCU8_INS_LPF0M::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_INS_LPF0M.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_INS_LPF0M &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_INS_LPF0M::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_INS_LPF0M::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU8_INS_LPF0M::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU8_INS_LPF0M::value4;
    }

    return result;
}

}; // namespace XMC4700
