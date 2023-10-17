/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_INTERRUPT_SRMSK_RMX : uint8_t
{
    disabled /*!< Disabled */,
    enabled = 1 /*!< Enabled */
};
static_assert(sizeof(SCU_INTERRUPT_SRMSK_RMX) == 1);

/**
 * Converts SCU_INTERRUPT_SRMSK_RMX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_INTERRUPT_SRMSK_RMX instance)
{
    const char *result = "UNKNOWN SCU_INTERRUPT_SRMSK_RMX";

    switch (instance)
    {
    case SCU_INTERRUPT_SRMSK_RMX::disabled:
        result = "disabled";
        break;
    case SCU_INTERRUPT_SRMSK_RMX::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_INTERRUPT_SRMSK_RMX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_INTERRUPT_SRMSK_RMX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = SCU_INTERRUPT_SRMSK_RMX::disabled;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = SCU_INTERRUPT_SRMSK_RMX::enabled;
    }

    return result;
}

}; // namespace XMC4700
