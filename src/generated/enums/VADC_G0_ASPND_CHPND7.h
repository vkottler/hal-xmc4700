/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ASPND_CHPND7 : uint8_t
{
    ignore_this_channel /*!< Ignore this channel */,
    request_conversion_this_channel =
        1 /*!< Request conversion of this channel */
};
static_assert(sizeof(VADC_G0_ASPND_CHPND7) == 1);

/**
 * Converts VADC_G0_ASPND_CHPND7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ASPND_CHPND7 instance)
{
    const char *result = "UNKNOWN VADC_G0_ASPND_CHPND7";

    switch (instance)
    {
    case VADC_G0_ASPND_CHPND7::ignore_this_channel:
        result = "ignore_this_channel";
        break;
    case VADC_G0_ASPND_CHPND7::request_conversion_this_channel:
        result = "request_conversion_this_channel";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ASPND_CHPND7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ASPND_CHPND7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ignore_this_channel", 19)))
    {
        output = VADC_G0_ASPND_CHPND7::ignore_this_channel;
    }
    else if ((result = !strncmp(data, "request_conversion_this_channel", 31)))
    {
        output = VADC_G0_ASPND_CHPND7::request_conversion_this_channel;
    }

    return result;
}

}; // namespace XMC4700
