/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_STOS : uint8_t
{
    _1_forward_ccu8xsty /*!< CC8yST1 forward to CCU8x.STy */,
    _2_forward_ccu8xsty = 1 /*!< CC8yST2 forward to CCU8x.STy */,
    _1_cc8yst2_forward_ccu8xsty =
        2 /*!< CC8yST1 AND CC8yST2 forward to CCU8x.STy */,
    _1_or_cc8yst2_forward_ccu8xsty =
        3 /*!< CC8yST1 OR CC8yST2 forward to CCU8x.STy */
};
static_assert(sizeof(CCU80_CC80_TC_STOS) == 1);

/**
 * Converts CCU80_CC80_TC_STOS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_STOS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_STOS";

    switch (instance)
    {
    case CCU80_CC80_TC_STOS::_1_forward_ccu8xsty:
        result = "_1_forward_ccu8xsty";
        break;
    case CCU80_CC80_TC_STOS::_2_forward_ccu8xsty:
        result = "_2_forward_ccu8xsty";
        break;
    case CCU80_CC80_TC_STOS::_1_cc8yst2_forward_ccu8xsty:
        result = "_1_cc8yst2_forward_ccu8xsty";
        break;
    case CCU80_CC80_TC_STOS::_1_or_cc8yst2_forward_ccu8xsty:
        result = "_1_or_cc8yst2_forward_ccu8xsty";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_STOS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_STOS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1_forward_ccu8xsty", 19)))
    {
        output = CCU80_CC80_TC_STOS::_1_forward_ccu8xsty;
    }
    else if ((result = !strncmp(data, "_2_forward_ccu8xsty", 19)))
    {
        output = CCU80_CC80_TC_STOS::_2_forward_ccu8xsty;
    }
    else if ((result = !strncmp(data, "_1_cc8yst2_forward_ccu8xsty", 27)))
    {
        output = CCU80_CC80_TC_STOS::_1_cc8yst2_forward_ccu8xsty;
    }
    else if ((result = !strncmp(data, "_1_or_cc8yst2_forward_ccu8xsty", 30)))
    {
        output = CCU80_CC80_TC_STOS::_1_or_cc8yst2_forward_ccu8xsty;
    }

    return result;
}

}; // namespace XMC4700
