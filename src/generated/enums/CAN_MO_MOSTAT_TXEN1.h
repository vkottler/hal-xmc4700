/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_TXEN1 : uint8_t
{
    not_enabled_frame_transmission /*!< Message object n is not enabled for
                                      frame transmission. */
        ,
    enabled_frame_transmission =
        1 /*!< Message object n is enabled for frame transmission. */
};
static_assert(sizeof(CAN_MO_MOSTAT_TXEN1) == 1);

/**
 * Converts CAN_MO_MOSTAT_TXEN1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_TXEN1 instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_TXEN1";

    switch (instance)
    {
    case CAN_MO_MOSTAT_TXEN1::not_enabled_frame_transmission:
        result = "not_enabled_frame_transmission";
        break;
    case CAN_MO_MOSTAT_TXEN1::enabled_frame_transmission:
        result = "enabled_frame_transmission";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_TXEN1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_TXEN1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_enabled_frame_transmission", 30)))
    {
        output = CAN_MO_MOSTAT_TXEN1::not_enabled_frame_transmission;
    }
    else if ((result = !strncmp(data, "enabled_frame_transmission", 26)))
    {
        output = CAN_MO_MOSTAT_TXEN1::enabled_frame_transmission;
    }

    return result;
}

}; // namespace XMC4700
