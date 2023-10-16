/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_ASCMode_MCLK : uint8_t
{
    value1 /*!< The MCLK generation is disabled and the MCLK signal is 0. */,
    value2 = 1 /*!< The MCLK generation is enabled. */
};
static_assert(sizeof(USIC0_CH0_PCR_ASCMode_MCLK) == 1);

/**
 * Converts USIC0_CH0_PCR_ASCMode_MCLK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_ASCMode_MCLK instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_ASCMode_MCLK";

    switch (instance)
    {
    case USIC0_CH0_PCR_ASCMode_MCLK::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_ASCMode_MCLK::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_ASCMode_MCLK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_ASCMode_MCLK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_MCLK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_MCLK::value2;
    }

    return result;
}

}; // namespace XMC4700
