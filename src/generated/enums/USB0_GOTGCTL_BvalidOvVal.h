/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_BvalidOvVal : uint8_t
{
    _0_when_gotgctlbvalidoven_1 /*!< Bvalid value is 0# when GOTGCTL.BvalidOvEn
                                   = 1 */
        ,
    _1_when_gotgctlbvalidoven_1 =
        1 /*!< Bvalid value is 1# when GOTGCTL.BvalidOvEn = 1 */
};
static_assert(sizeof(USB0_GOTGCTL_BvalidOvVal) == 1);

/**
 * Converts USB0_GOTGCTL_BvalidOvVal to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_BvalidOvVal instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_BvalidOvVal";

    switch (instance)
    {
    case USB0_GOTGCTL_BvalidOvVal::_0_when_gotgctlbvalidoven_1:
        result = "_0_when_gotgctlbvalidoven_1";
        break;
    case USB0_GOTGCTL_BvalidOvVal::_1_when_gotgctlbvalidoven_1:
        result = "_1_when_gotgctlbvalidoven_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_BvalidOvVal.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_BvalidOvVal &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_when_gotgctlbvalidoven_1", 27)))
    {
        output = USB0_GOTGCTL_BvalidOvVal::_0_when_gotgctlbvalidoven_1;
    }
    else if ((result = !strncmp(data, "_1_when_gotgctlbvalidoven_1", 27)))
    {
        output = USB0_GOTGCTL_BvalidOvVal::_1_when_gotgctlbvalidoven_1;
    }

    return result;
}

}; // namespace XMC4700
