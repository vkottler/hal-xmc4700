/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_POWER_PWRCLR_USBPUWQ : uint8_t
{
    no_effect /*!< No effect */,
    pull_up_active = 1 /*!< Pull-up active */
};
static_assert(sizeof(SCU_POWER_PWRCLR_USBPUWQ) == 1);

/**
 * Converts SCU_POWER_PWRCLR_USBPUWQ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_POWER_PWRCLR_USBPUWQ instance)
{
    const char *result = "UNKNOWN SCU_POWER_PWRCLR_USBPUWQ";

    switch (instance)
    {
    case SCU_POWER_PWRCLR_USBPUWQ::no_effect:
        result = "no_effect";
        break;
    case SCU_POWER_PWRCLR_USBPUWQ::pull_up_active:
        result = "pull_up_active";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_POWER_PWRCLR_USBPUWQ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_POWER_PWRCLR_USBPUWQ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_POWER_PWRCLR_USBPUWQ::no_effect;
    }
    else if ((result = !strncmp(data, "pull_up_active", 14)))
    {
        output = SCU_POWER_PWRCLR_USBPUWQ::pull_up_active;
    }

    return result;
}

}; // namespace XMC4700
