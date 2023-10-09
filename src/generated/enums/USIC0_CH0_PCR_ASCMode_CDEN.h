/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_ASCMode_CDEN : uint8_t
{
    value1 /*!< The collision detection is disabled. */,
    value2 = 1 /*!< If a collision is detected, the transmitter stops its data
                  transmission, outputs a 1, sets bit PSR.COL and generates a
                  protocol interrupt. In order to allow data transmission
                  again, PSR.COL has to be cleared by software. */
};
static_assert(sizeof(USIC0_CH0_PCR_ASCMode_CDEN) == 1);

static constexpr uint16_t USIC0_CH0_PCR_ASCMode_CDEN_id = 106;

/**
 * Converts USIC0_CH0_PCR_ASCMode_CDEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_ASCMode_CDEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_ASCMode_CDEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_ASCMode_CDEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_ASCMode_CDEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_ASCMode_CDEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_ASCMode_CDEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_CDEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_CDEN::value2;
    }

    return result;
}

}; // namespace XMC4700
