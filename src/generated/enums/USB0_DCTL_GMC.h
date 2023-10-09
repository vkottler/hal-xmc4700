/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCTL_GMC : uint8_t
{
    value1 /*!< Invalid. */,
    value2 = 1 /*!< 1 packet. */,
    value3 = 2 /*!< 2 packets. */,
    value4 = 3 /*!< 3 packets. */
};
static_assert(sizeof(USB0_DCTL_GMC) == 1);

static constexpr uint16_t USB0_DCTL_GMC_id = 366;

/**
 * Converts USB0_DCTL_GMC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCTL_GMC instance)
{
    const char *result = "UNKNOWN USB0_DCTL_GMC";

    switch (instance)
    {
    case USB0_DCTL_GMC::value1:
        result = "value1";
        break;
    case USB0_DCTL_GMC::value2:
        result = "value2";
        break;
    case USB0_DCTL_GMC::value3:
        result = "value3";
        break;
    case USB0_DCTL_GMC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCTL_GMC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCTL_GMC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_DCTL_GMC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_DCTL_GMC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_DCTL_GMC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USB0_DCTL_GMC::value4;
    }

    return result;
}

}; // namespace XMC4700
