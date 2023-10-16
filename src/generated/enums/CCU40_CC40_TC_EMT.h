/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_EMT : uint8_t
{
    value1 /*!< External Modulation functionality is clearing the CC4yST bit. */,
    value2 = 1 /*!< External Modulation functionality is gating the outputs. */
};
static_assert(sizeof(CCU40_CC40_TC_EMT) == 1);

/**
 * Converts CCU40_CC40_TC_EMT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_EMT instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_EMT";

    switch (instance)
    {
    case CCU40_CC40_TC_EMT::value1:
        result = "value1";
        break;
    case CCU40_CC40_TC_EMT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_EMT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_EMT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_TC_EMT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_TC_EMT::value2;
    }

    return result;
}

}; // namespace XMC4700
