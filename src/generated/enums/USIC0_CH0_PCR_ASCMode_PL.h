/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_ASCMode_PL : uint8_t
{
    equal_bit_length_no_shortened_0 /*!< The pulse length is equal to the bit
                                       length (no shortened 0). */
        ,
    _0_bit_2_time_quanta =
        1 /*!< The pulse length of a 0 bit is 2 time quanta. */,
    _0_bit_3_time_quanta =
        2 /*!< The pulse length of a 0 bit is 3 time quanta. */,
    _0_bit_8_time_quanta =
        7 /*!< The pulse length of a 0 bit is 8 time quanta. */
};
static_assert(sizeof(USIC0_CH0_PCR_ASCMode_PL) == 1);

/**
 * Converts USIC0_CH0_PCR_ASCMode_PL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_ASCMode_PL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_ASCMode_PL";

    switch (instance)
    {
    case USIC0_CH0_PCR_ASCMode_PL::equal_bit_length_no_shortened_0:
        result = "equal_bit_length_no_shortened_0";
        break;
    case USIC0_CH0_PCR_ASCMode_PL::_0_bit_2_time_quanta:
        result = "_0_bit_2_time_quanta";
        break;
    case USIC0_CH0_PCR_ASCMode_PL::_0_bit_3_time_quanta:
        result = "_0_bit_3_time_quanta";
        break;
    case USIC0_CH0_PCR_ASCMode_PL::_0_bit_8_time_quanta:
        result = "_0_bit_8_time_quanta";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_ASCMode_PL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_ASCMode_PL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "equal_bit_length_no_shortened_0", 31)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::equal_bit_length_no_shortened_0;
    }
    else if ((result = !strncmp(data, "_0_bit_2_time_quanta", 20)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::_0_bit_2_time_quanta;
    }
    else if ((result = !strncmp(data, "_0_bit_3_time_quanta", 20)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::_0_bit_3_time_quanta;
    }
    else if ((result = !strncmp(data, "_0_bit_8_time_quanta", 20)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::_0_bit_8_time_quanta;
    }

    return result;
}

}; // namespace XMC4700
