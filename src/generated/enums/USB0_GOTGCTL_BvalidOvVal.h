/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_BvalidOvVal : uint8_t
{
    value1 /*!< Bvalid value is 0# when GOTGCTL.BvalidOvEn = 1 */,
    value2 = 1 /*!< Bvalid value is 1# when GOTGCTL.BvalidOvEn = 1 */
};
static_assert(sizeof(USB0_GOTGCTL_BvalidOvVal) == 1);

static constexpr uint16_t USB0_GOTGCTL_BvalidOvVal_id = 3104;

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
    case USB0_GOTGCTL_BvalidOvVal::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_BvalidOvVal::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_BvalidOvVal::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_BvalidOvVal::value2;
    }

    return result;
}

}; // namespace XMC4700
