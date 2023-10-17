/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_HPCMD : uint8_t
{
    disabled /*!< The automatic update of bits SCTR.DSM and SCTR.HPCDIR is
                disabled. */
        ,
    enabled = 1 /*!< The automatic update of bits SCTR.DSM and SCTR.HPCDIR is
                   enabled. */
};
static_assert(sizeof(USIC0_CH0_TCSR_HPCMD) == 1);

/**
 * Converts USIC0_CH0_TCSR_HPCMD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_HPCMD instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_HPCMD";

    switch (instance)
    {
    case USIC0_CH0_TCSR_HPCMD::disabled:
        result = "disabled";
        break;
    case USIC0_CH0_TCSR_HPCMD::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_HPCMD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_HPCMD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = USIC0_CH0_TCSR_HPCMD::disabled;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = USIC0_CH0_TCSR_HPCMD::enabled;
    }

    return result;
}

}; // namespace XMC4700
