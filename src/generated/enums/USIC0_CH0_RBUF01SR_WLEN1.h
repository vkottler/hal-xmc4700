/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBUF01SR_WLEN1 : uint8_t
{
    one_bit_has_been_received /*!< One bit has been received. */,
    sixteen_bits_have_been_received =
        15 /*!< Sixteen bits have been received. */
};
static_assert(sizeof(USIC0_CH0_RBUF01SR_WLEN1) == 1);

/**
 * Converts USIC0_CH0_RBUF01SR_WLEN1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBUF01SR_WLEN1 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBUF01SR_WLEN1";

    switch (instance)
    {
    case USIC0_CH0_RBUF01SR_WLEN1::one_bit_has_been_received:
        result = "one_bit_has_been_received";
        break;
    case USIC0_CH0_RBUF01SR_WLEN1::sixteen_bits_have_been_received:
        result = "sixteen_bits_have_been_received";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBUF01SR_WLEN1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBUF01SR_WLEN1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "one_bit_has_been_received", 25)))
    {
        output = USIC0_CH0_RBUF01SR_WLEN1::one_bit_has_been_received;
    }
    else if ((result = !strncmp(data, "sixteen_bits_have_been_received", 31)))
    {
        output = USIC0_CH0_RBUF01SR_WLEN1::sixteen_bits_have_been_received;
    }

    return result;
}

}; // namespace XMC4700
