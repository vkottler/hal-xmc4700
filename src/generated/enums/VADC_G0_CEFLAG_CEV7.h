/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CEFLAG_CEV7 : uint8_t
{
    no_channel_event /*!< No channel event */,
    channel_event_has_occurred = 1 /*!< A channel event has occurred */
};
static_assert(sizeof(VADC_G0_CEFLAG_CEV7) == 1);

/**
 * Converts VADC_G0_CEFLAG_CEV7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CEFLAG_CEV7 instance)
{
    const char *result = "UNKNOWN VADC_G0_CEFLAG_CEV7";

    switch (instance)
    {
    case VADC_G0_CEFLAG_CEV7::no_channel_event:
        result = "no_channel_event";
        break;
    case VADC_G0_CEFLAG_CEV7::channel_event_has_occurred:
        result = "channel_event_has_occurred";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CEFLAG_CEV7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CEFLAG_CEV7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_channel_event", 16)))
    {
        output = VADC_G0_CEFLAG_CEV7::no_channel_event;
    }
    else if ((result = !strncmp(data, "channel_event_has_occurred", 26)))
    {
        output = VADC_G0_CEFLAG_CEV7::channel_event_has_occurred;
    }

    return result;
}

}; // namespace XMC4700
