/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Override is disabled and Avalid signal from the PHY is used internally by the core.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Internally Avalid received from the PHY is overridden with GOTGCTL.AvalidOvVal.",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_AvalidOvEn : uint8_t
{
    value1 /*!< Override is disabled and Avalid signal from the PHY is used internally by the core. */,
    value2 = 1 /*!< Internally Avalid received from the PHY is overridden with GOTGCTL.AvalidOvVal. */
};
static_assert(sizeof(USB0_GOTGCTL_AvalidOvEn) == 1);

static constexpr uint16_t USB0_GOTGCTL_AvalidOvEn_id = 314;

/**
 * Converts USB0_GOTGCTL_AvalidOvEn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_AvalidOvEn instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_AvalidOvEn";

    switch (instance)
    {
    case USB0_GOTGCTL_AvalidOvEn::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_AvalidOvEn::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_AvalidOvEn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_AvalidOvEn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_AvalidOvEn::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_AvalidOvEn::value2;
    }

    return result;
}

}; // namespace XMC4700
