/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_SCTR_WLE : uint8_t
{
    _1_data_bit_located_at_bit_position_0 /*!< The data word contains 1 data
                                             bit located at bit position 0. */
        ,
    _2_data_bits_located_at_bit_positions_10 =
        1 /*!< The data word contains 2 data bits located at bit positions
             [1:0]. */
        ,
    _15_data_bits_located_at_bit_positions_140 =
        14 /*!< The data word contains 15 data bits located at bit positions
              [14:0]. */
        ,
    _16_data_bits_located_at_bit_positions_150 =
        15 /*!< The data word contains 16 data bits located at bit positions
              [15:0]. */
};
static_assert(sizeof(USIC0_CH0_SCTR_WLE) == 1);

/**
 * Converts USIC0_CH0_SCTR_WLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_SCTR_WLE instance)
{
    const char *result = "UNKNOWN USIC0_CH0_SCTR_WLE";

    switch (instance)
    {
    case USIC0_CH0_SCTR_WLE::_1_data_bit_located_at_bit_position_0:
        result = "_1_data_bit_located_at_bit_position_0";
        break;
    case USIC0_CH0_SCTR_WLE::_2_data_bits_located_at_bit_positions_10:
        result = "_2_data_bits_located_at_bit_positions_10";
        break;
    case USIC0_CH0_SCTR_WLE::_15_data_bits_located_at_bit_positions_140:
        result = "_15_data_bits_located_at_bit_positions_140";
        break;
    case USIC0_CH0_SCTR_WLE::_16_data_bits_located_at_bit_positions_150:
        result = "_16_data_bits_located_at_bit_positions_150";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_SCTR_WLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_SCTR_WLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1_data_bit_located_at_bit_position_0", 37)))
    {
        output = USIC0_CH0_SCTR_WLE::_1_data_bit_located_at_bit_position_0;
    }
    else if ((result = !strncmp(
                  data, "_2_data_bits_located_at_bit_positions_10", 40)))
    {
        output = USIC0_CH0_SCTR_WLE::_2_data_bits_located_at_bit_positions_10;
    }
    else if ((result = !strncmp(
                  data, "_15_data_bits_located_at_bit_positions_140", 42)))
    {
        output =
            USIC0_CH0_SCTR_WLE::_15_data_bits_located_at_bit_positions_140;
    }
    else if ((result = !strncmp(
                  data, "_16_data_bits_located_at_bit_positions_150", 42)))
    {
        output =
            USIC0_CH0_SCTR_WLE::_16_data_bits_located_at_bit_positions_150;
    }

    return result;
}

}; // namespace XMC4700
