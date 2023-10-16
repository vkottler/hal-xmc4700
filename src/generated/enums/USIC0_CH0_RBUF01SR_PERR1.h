/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBUF01SR_PERR1 : uint8_t
{
    value1 /*!< The received protocol-related argument PAR matches the expected value. The reception of the data word sets bit PSR.RIF and can generate a receive interrupt. */,
    value2 = 1 /*!< The received protocol-related argument PAR does not match the expected value. The reception of the data word sets bit PSR.AIF and can generate an alternative receive interrupt. */
};
static_assert(sizeof(USIC0_CH0_RBUF01SR_PERR1) == 1);

/**
 * Converts USIC0_CH0_RBUF01SR_PERR1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBUF01SR_PERR1 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBUF01SR_PERR1";

    switch (instance)
    {
    case USIC0_CH0_RBUF01SR_PERR1::value1:
        result = "value1";
        break;
    case USIC0_CH0_RBUF01SR_PERR1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBUF01SR_PERR1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBUF01SR_PERR1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_RBUF01SR_PERR1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_RBUF01SR_PERR1::value2;
    }

    return result;
}

}; // namespace XMC4700
