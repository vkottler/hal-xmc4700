/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_CCR_PM : uint8_t
{
    parity_generation_disabled /*!< The parity generation is disabled. */,
    even_parity_selected_parity_bit_1_odd_number__cont =
        2 /*!< Even parity is selected (parity bit = 1 on odd number of 1s in
             data, parity bit = 0 on even number of 1s in data). */
        ,
    odd_parity_selected_parity_bit_0_odd_number_1_cont =
        3 /*!< Odd parity is selected (parity bit = 0 on odd number of 1s in
             data, parity bit = 1 on even number of 1s in data). */
};
static_assert(sizeof(USIC0_CH0_CCR_PM) == 1);

/**
 * Converts USIC0_CH0_CCR_PM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_PM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_PM";

    switch (instance)
    {
    case USIC0_CH0_CCR_PM::parity_generation_disabled:
        result = "parity_generation_disabled";
        break;
    case USIC0_CH0_CCR_PM::even_parity_selected_parity_bit_1_odd_number__cont:
        result = "even_parity_selected_parity_bit_1_odd_number__cont";
        break;
    case USIC0_CH0_CCR_PM::odd_parity_selected_parity_bit_0_odd_number_1_cont:
        result = "odd_parity_selected_parity_bit_0_odd_number_1_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_PM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_PM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "parity_generation_disabled", 26)))
    {
        output = USIC0_CH0_CCR_PM::parity_generation_disabled;
    }
    else if ((result = !strncmp(
                  data, "even_parity_selected_parity_bit_1_odd_number__cont",
                  50)))
    {
        output = USIC0_CH0_CCR_PM::
            even_parity_selected_parity_bit_1_odd_number__cont;
    }
    else if ((result = !strncmp(
                  data, "odd_parity_selected_parity_bit_0_odd_number_1_cont",
                  50)))
    {
        output = USIC0_CH0_CCR_PM::
            odd_parity_selected_parity_bit_0_odd_number_1_cont;
    }

    return result;
}

}; // namespace XMC4700
