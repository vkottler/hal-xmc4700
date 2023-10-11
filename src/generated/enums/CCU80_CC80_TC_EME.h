/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_EME : uint8_t
{
    value1 /*!< External Modulation functionality doesn't affect any channel */,
    value2 = 1 /*!< External Modulation only applied on channel 1 */,
    value3 = 2 /*!< External Modulation only applied on channel 2 */,
    value4 = 3 /*!< External Modulation applied on both channels */
};
static_assert(sizeof(CCU80_CC80_TC_EME) == 1);

static constexpr uint16_t CCU80_CC80_TC_EME_id = 213;

/**
 * Converts CCU80_CC80_TC_EME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_EME instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_EME";

    switch (instance)
    {
    case CCU80_CC80_TC_EME::value1:
        result = "value1";
        break;
    case CCU80_CC80_TC_EME::value2:
        result = "value2";
        break;
    case CCU80_CC80_TC_EME::value3:
        result = "value3";
        break;
    case CCU80_CC80_TC_EME::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_EME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_EME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_TC_EME::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_TC_EME::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU80_CC80_TC_EME::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU80_CC80_TC_EME::value4;
    }

    return result;
}

}; // namespace XMC4700
