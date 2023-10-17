/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_HstNegScs : uint8_t
{
    failure /*!< Host negotiation failure */,
    success = 1 /*!< Host negotiation success */
};
static_assert(sizeof(USB0_GOTGCTL_HstNegScs) == 1);

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
    case USB0_GOTGCTL_HstNegScs::failure:
        result = "failure";
        break;
    case USB0_GOTGCTL_HstNegScs::success:
        result = "success";
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

    if ((result = !strncmp(data, "failure", 7)))
    {
        output = USB0_GOTGCTL_HstNegScs::failure;
    }
    else if ((result = !strncmp(data, "success", 7)))
    {
        output = USB0_GOTGCTL_HstNegScs::success;
    }

    return result;
}

}; // namespace XMC4700
