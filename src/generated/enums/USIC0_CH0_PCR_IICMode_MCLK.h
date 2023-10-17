/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_IICMode_MCLK : uint8_t
{
    disabled_mclk_0 /*!< The MCLK generation is disabled and MCLK is 0. */,
    enabled = 1 /*!< The MCLK generation is enabled. */
};
static_assert(sizeof(USIC0_CH0_PCR_IICMode_MCLK) == 1);

/**
 * Converts USIC0_CH0_PCR_IICMode_MCLK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IICMode_MCLK instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IICMode_MCLK";

    switch (instance)
    {
    case USIC0_CH0_PCR_IICMode_MCLK::disabled_mclk_0:
        result = "disabled_mclk_0";
        break;
    case USIC0_CH0_PCR_IICMode_MCLK::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IICMode_MCLK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_IICMode_MCLK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled_mclk_0", 15)))
    {
        output = USIC0_CH0_PCR_IICMode_MCLK::disabled_mclk_0;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = USIC0_CH0_PCR_IICMode_MCLK::enabled;
    }

    return result;
}

}; // namespace XMC4700
