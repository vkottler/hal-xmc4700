/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtSpd : uint8_t
{
    full_speed = 1 /*!< Full speed */
};
static_assert(sizeof(USB0_HPRT_PrtSpd) == 1);

/**
 * Converts USB0_HPRT_PrtSpd to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtSpd instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtSpd";

    switch (instance)
    {
    case USB0_HPRT_PrtSpd::full_speed:
        result = "full_speed";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtSpd.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtSpd &output)
{
    bool result = false;

    if ((result = !strncmp(data, "full_speed", 10)))
    {
        output = USB0_HPRT_PrtSpd::full_speed;
    }

    return result;
}

}; // namespace XMC4700
