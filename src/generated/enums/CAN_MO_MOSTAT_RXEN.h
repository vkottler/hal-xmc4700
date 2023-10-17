/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_RXEN : uint8_t
{
    not_enabled_frame_reception /*!< Message object n is not enabled for frame
                                   reception. */
        ,
    enabled_frame_reception =
        1 /*!< Message object n is enabled for frame reception. */
};
static_assert(sizeof(CAN_MO_MOSTAT_RXEN) == 1);

/**
 * Converts CAN_MO_MOSTAT_RXEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_RXEN instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_RXEN";

    switch (instance)
    {
    case CAN_MO_MOSTAT_RXEN::not_enabled_frame_reception:
        result = "not_enabled_frame_reception";
        break;
    case CAN_MO_MOSTAT_RXEN::enabled_frame_reception:
        result = "enabled_frame_reception";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_RXEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_RXEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_enabled_frame_reception", 27)))
    {
        output = CAN_MO_MOSTAT_RXEN::not_enabled_frame_reception;
    }
    else if ((result = !strncmp(data, "enabled_frame_reception", 23)))
    {
        output = CAN_MO_MOSTAT_RXEN::enabled_frame_reception;
    }

    return result;
}

}; // namespace XMC4700
