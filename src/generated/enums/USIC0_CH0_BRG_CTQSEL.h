/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_BRG_CTQSEL : uint8_t
{
    pdiv /*!< fCTQIN = fPDIV */,
    ppp = 1 /*!< fCTQIN = fPPP */,
    sclk = 2 /*!< fCTQIN = fSCLK */,
    mclk = 3 /*!< fCTQIN = fMCLK */
};
static_assert(sizeof(USIC0_CH0_BRG_CTQSEL) == 1);

/**
 * Converts USIC0_CH0_BRG_CTQSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BRG_CTQSEL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BRG_CTQSEL";

    switch (instance)
    {
    case USIC0_CH0_BRG_CTQSEL::pdiv:
        result = "pdiv";
        break;
    case USIC0_CH0_BRG_CTQSEL::ppp:
        result = "ppp";
        break;
    case USIC0_CH0_BRG_CTQSEL::sclk:
        result = "sclk";
        break;
    case USIC0_CH0_BRG_CTQSEL::mclk:
        result = "mclk";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BRG_CTQSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BRG_CTQSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "pdiv", 4)))
    {
        output = USIC0_CH0_BRG_CTQSEL::pdiv;
    }
    else if ((result = !strncmp(data, "ppp", 3)))
    {
        output = USIC0_CH0_BRG_CTQSEL::ppp;
    }
    else if ((result = !strncmp(data, "sclk", 4)))
    {
        output = USIC0_CH0_BRG_CTQSEL::sclk;
    }
    else if ((result = !strncmp(data, "mclk", 4)))
    {
        output = USIC0_CH0_BRG_CTQSEL::mclk;
    }

    return result;
}

}; // namespace XMC4700
