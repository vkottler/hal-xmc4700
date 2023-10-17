/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_OSCULCTRL_MODE : uint8_t
{
    enabled_operation /*!< Oscillator is enabled, in operation */,
    enabled_bypass_mode = 1 /*!< Oscillator is enabled, in bypass mode */,
    power_down = 2 /*!< Oscillator in power down */,
    power_down_can_be_used_gpi =
        3 /*!< Oscillator in power down, can be used as GPI */
};
static_assert(sizeof(SCU_HIBERNATE_OSCULCTRL_MODE) == 1);

/**
 * Converts SCU_HIBERNATE_OSCULCTRL_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_OSCULCTRL_MODE instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_OSCULCTRL_MODE";

    switch (instance)
    {
    case SCU_HIBERNATE_OSCULCTRL_MODE::enabled_operation:
        result = "enabled_operation";
        break;
    case SCU_HIBERNATE_OSCULCTRL_MODE::enabled_bypass_mode:
        result = "enabled_bypass_mode";
        break;
    case SCU_HIBERNATE_OSCULCTRL_MODE::power_down:
        result = "power_down";
        break;
    case SCU_HIBERNATE_OSCULCTRL_MODE::power_down_can_be_used_gpi:
        result = "power_down_can_be_used_gpi";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_OSCULCTRL_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_OSCULCTRL_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled_operation", 17)))
    {
        output = SCU_HIBERNATE_OSCULCTRL_MODE::enabled_operation;
    }
    else if ((result = !strncmp(data, "enabled_bypass_mode", 19)))
    {
        output = SCU_HIBERNATE_OSCULCTRL_MODE::enabled_bypass_mode;
    }
    else if ((result = !strncmp(data, "power_down", 10)))
    {
        output = SCU_HIBERNATE_OSCULCTRL_MODE::power_down;
    }
    else if ((result = !strncmp(data, "power_down_can_be_used_gpi", 26)))
    {
        output = SCU_HIBERNATE_OSCULCTRL_MODE::power_down_can_be_used_gpi;
    }

    return result;
}

}; // namespace XMC4700
