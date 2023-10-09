/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_VbvalidOvEn : uint8_t
{
    value1 /*!< Override is disabled and vbus valid signal from the PHY is used
              internally by the core. */
        ,
    value2 = 1 /*!< Internally vbus valid received from the PHY is overridden
                  with GOTGCTL.VbvalidOvVal. */
};
static_assert(sizeof(USB0_GOTGCTL_VbvalidOvEn) == 1);

static constexpr uint16_t USB0_GOTGCTL_VbvalidOvEn_id = 316;

/**
 * Converts USB0_GOTGCTL_VbvalidOvEn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_VbvalidOvEn instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_VbvalidOvEn";

    switch (instance)
    {
    case USB0_GOTGCTL_VbvalidOvEn::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_VbvalidOvEn::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_VbvalidOvEn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_VbvalidOvEn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_VbvalidOvEn::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_VbvalidOvEn::value2;
    }

    return result;
}

}; // namespace XMC4700
