/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_BSesVld : uint8_t
{
    not_valid /*!< B-session is not valid. */,
    valid = 1 /*!< B-session is valid. */
};
static_assert(sizeof(USB0_GOTGCTL_BSesVld) == 1);

/**
 * Converts USB0_GOTGCTL_BSesVld to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_BSesVld instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_BSesVld";

    switch (instance)
    {
    case USB0_GOTGCTL_BSesVld::not_valid:
        result = "not_valid";
        break;
    case USB0_GOTGCTL_BSesVld::valid:
        result = "valid";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_BSesVld.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_BSesVld &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_valid", 9)))
    {
        output = USB0_GOTGCTL_BSesVld::not_valid;
    }
    else if ((result = !strncmp(data, "valid", 5)))
    {
        output = USB0_GOTGCTL_BSesVld::valid;
    }

    return result;
}

}; // namespace XMC4700
