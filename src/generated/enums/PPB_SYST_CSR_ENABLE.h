/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_SYST_CSR_ENABLE : uint8_t
{
    disabled /*!< counter disabled */,
    enabled = 1 /*!< counter enabled. */
};
static_assert(sizeof(PPB_SYST_CSR_ENABLE) == 1);

/**
 * Converts PPB_SYST_CSR_ENABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_SYST_CSR_ENABLE instance)
{
    const char *result = "UNKNOWN PPB_SYST_CSR_ENABLE";

    switch (instance)
    {
    case PPB_SYST_CSR_ENABLE::disabled:
        result = "disabled";
        break;
    case PPB_SYST_CSR_ENABLE::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_SYST_CSR_ENABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_SYST_CSR_ENABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = PPB_SYST_CSR_ENABLE::disabled;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = PPB_SYST_CSR_ENABLE::enabled;
    }

    return result;
}

}; // namespace XMC4700
