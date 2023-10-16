/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCTL_IgnrFrmNum : uint8_t
{
    value1 /*!< Scatter/Gather enabled: The core transmits the packets only in the frame number in which they are intended to be transmitted. Scatter/Gather disabled: Periodic transfer interrupt feature is disabled; the application must program transfers for periodic endpoints every frame */,
    value2 = 1 /*!< Scatter/Gather enabled: The core ignores the frame number, sending packets immediately as the packets are ready. Scatter/Gather disabled: Periodic transfer interrupt feature is enabled; the application can program transfers for multiple frames for periodic endpoints. */
};
static_assert(sizeof(USB0_DCTL_IgnrFrmNum) == 1);

/**
 * Converts USB0_DCTL_IgnrFrmNum to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCTL_IgnrFrmNum instance)
{
    const char *result = "UNKNOWN USB0_DCTL_IgnrFrmNum";

    switch (instance)
    {
    case USB0_DCTL_IgnrFrmNum::value1:
        result = "value1";
        break;
    case USB0_DCTL_IgnrFrmNum::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCTL_IgnrFrmNum.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCTL_IgnrFrmNum &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_DCTL_IgnrFrmNum::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_DCTL_IgnrFrmNum::value2;
    }

    return result;
}

}; // namespace XMC4700
