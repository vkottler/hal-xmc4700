/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_BRG_CLKSEL : uint8_t
{
    value1 /*!< The fractional divider frequency fFD is selected. */,
    value3 = 2 /*!< The trigger signal DX1T defines fPIN. Signal MCLK toggles with fPIN. */,
    value4 = 3 /*!< Signal MCLK corresponds to the DX1S signal and the frequency fPIN is derived from the rising edges of DX1S. */
};
static_assert(sizeof(USIC0_CH0_BRG_CLKSEL) == 1);

static constexpr uint16_t USIC0_CH0_BRG_CLKSEL_id = 3210;

/**
 * Converts USIC0_CH0_BRG_CLKSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BRG_CLKSEL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BRG_CLKSEL";

    switch (instance)
    {
    case USIC0_CH0_BRG_CLKSEL::value1:
        result = "value1";
        break;
    case USIC0_CH0_BRG_CLKSEL::value3:
        result = "value3";
        break;
    case USIC0_CH0_BRG_CLKSEL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BRG_CLKSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BRG_CLKSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_BRG_CLKSEL::value1;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_BRG_CLKSEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_BRG_CLKSEL::value4;
    }

    return result;
}

}; // namespace XMC4700
