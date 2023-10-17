/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDSET_ULPWDG : uint8_t
{
    no_effect /*!< No effect */,
    set_watchdog_alarm = 1 /*!< Set watchdog alarm */
};
static_assert(sizeof(SCU_HIBERNATE_HDSET_ULPWDG) == 1);

/**
 * Converts SCU_HIBERNATE_HDSET_ULPWDG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDSET_ULPWDG instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDSET_ULPWDG";

    switch (instance)
    {
    case SCU_HIBERNATE_HDSET_ULPWDG::no_effect:
        result = "no_effect";
        break;
    case SCU_HIBERNATE_HDSET_ULPWDG::set_watchdog_alarm:
        result = "set_watchdog_alarm";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDSET_ULPWDG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDSET_ULPWDG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_HIBERNATE_HDSET_ULPWDG::no_effect;
    }
    else if ((result = !strncmp(data, "set_watchdog_alarm", 18)))
    {
        output = SCU_HIBERNATE_HDSET_ULPWDG::set_watchdog_alarm;
    }

    return result;
}

}; // namespace XMC4700
