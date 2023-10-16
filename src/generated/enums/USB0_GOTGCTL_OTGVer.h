/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_OTGVer : uint8_t
{
    value1 /*!< OTG Version 1.3. In this version the core supports Data line pulsing and VBus pulsing for SRP. */,
    value2 = 1 /*!< OTG Version 2.0. In this version the core supports only Data line pulsing for SRP. */
};
static_assert(sizeof(USB0_GOTGCTL_OTGVer) == 1);

/**
 * Converts USB0_GOTGCTL_OTGVer to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_OTGVer instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_OTGVer";

    switch (instance)
    {
    case USB0_GOTGCTL_OTGVer::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_OTGVer::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_OTGVer.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_OTGVer &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_OTGVer::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_OTGVer::value2;
    }

    return result;
}

}; // namespace XMC4700