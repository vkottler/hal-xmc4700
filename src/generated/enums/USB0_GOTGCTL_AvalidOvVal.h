/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_AvalidOvVal : uint8_t
{
    value1 /*!< Avalid value is 0# when GOTGCTL.AvalidOvEn = 1 */,
    value2 = 1 /*!< Avalid value is 1# when GOTGCTL.AvalidOvEn = 1 */
};
static_assert(sizeof(USB0_GOTGCTL_AvalidOvVal) == 1);

/**
 * Converts USB0_GOTGCTL_AvalidOvVal to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_AvalidOvVal instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_AvalidOvVal";

    switch (instance)
    {
    case USB0_GOTGCTL_AvalidOvVal::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_AvalidOvVal::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_AvalidOvVal.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_AvalidOvVal &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_AvalidOvVal::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_AvalidOvVal::value2;
    }

    return result;
}

}; // namespace XMC4700
