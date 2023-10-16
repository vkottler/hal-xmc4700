/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_SSCMode_SLPHSEL : uint8_t
{
    value1 /*!< Data bits are shifted out with the leading edge of the shift clock signal and latched in with the trailing edge. */,
    value2 = 1 /*!< The first data bit is shifted out when the data shift unit receives a low to high transition from the DX2 stage. Subsequent bits are shifted out with the trailing edge of the shift clock signal. Data bits are always latched in with the leading edge. */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_SLPHSEL) == 1);

/**
 * Converts USIC0_CH0_PCR_SSCMode_SLPHSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_SLPHSEL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_SLPHSEL";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_SLPHSEL::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_SSCMode_SLPHSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_SLPHSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_SSCMode_SLPHSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_SLPHSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_SLPHSEL::value2;
    }

    return result;
}

}; // namespace XMC4700
