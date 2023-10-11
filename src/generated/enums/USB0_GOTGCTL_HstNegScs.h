/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_HstNegScs : uint8_t
{
    value1 /*!< Host negotiation failure */,
    value2 = 1 /*!< Host negotiation success */
};
static_assert(sizeof(USB0_GOTGCTL_HstNegScs) == 1);

static constexpr uint16_t USB0_GOTGCTL_HstNegScs_id = 3103;

/**
 * Converts USB0_GOTGCTL_HstNegScs to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_HstNegScs instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_HstNegScs";

    switch (instance)
    {
    case USB0_GOTGCTL_HstNegScs::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_HstNegScs::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_HstNegScs.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_HstNegScs &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_HstNegScs::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_HstNegScs::value2;
    }

    return result;
}

}; // namespace XMC4700
