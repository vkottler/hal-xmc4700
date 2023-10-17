/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_DevHNPEn : uint8_t
{
    not_enabled_application /*!< HNP is not enabled in the application */,
    enabled_application = 1 /*!< HNP is enabled in the application */
};
static_assert(sizeof(USB0_GOTGCTL_DevHNPEn) == 1);

/**
 * Converts USB0_GOTGCTL_DevHNPEn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_DevHNPEn instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_DevHNPEn";

    switch (instance)
    {
    case USB0_GOTGCTL_DevHNPEn::not_enabled_application:
        result = "not_enabled_application";
        break;
    case USB0_GOTGCTL_DevHNPEn::enabled_application:
        result = "enabled_application";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_DevHNPEn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_DevHNPEn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_enabled_application", 23)))
    {
        output = USB0_GOTGCTL_DevHNPEn::not_enabled_application;
    }
    else if ((result = !strncmp(data, "enabled_application", 19)))
    {
        output = USB0_GOTGCTL_DevHNPEn::enabled_application;
    }

    return result;
}

}; // namespace XMC4700
