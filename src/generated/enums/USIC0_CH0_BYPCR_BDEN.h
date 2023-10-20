/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_BYPCR_BDEN : uint8_t
{
    transfer_bypass_data_disabled /*!< The transfer of bypass data is disabled.
                                   */
        ,
    transfer_bypass_data_tbuf_possible_bypass_dat_cont =
        1 /*!< The transfer of bypass data to TBUF is possible. Bypass data
             will be transferred to TBUF according to its priority if BDV = 1.
           */
        ,
    gated_bypass_data_transfer_enabled_bypass_dat_cont =
        2 /*!< Gated bypass data transfer is enabled. Bypass data will be
             transferred to TBUF according to its priority if BDV = 1 and while
             DX2S = 0. */
        ,
    gated_bypass_data_transfer_enabled_bypass_dat_cont_x =
        3 /*!< Gated bypass data transfer is enabled. Bypass data will be
             transferred to TBUF according to its priority if BDV = 1 and while
             DX2S = 1. */
};
static_assert(sizeof(USIC0_CH0_BYPCR_BDEN) == 1);

/**
 * Converts USIC0_CH0_BYPCR_BDEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BYPCR_BDEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BYPCR_BDEN";

    switch (instance)
    {
    case USIC0_CH0_BYPCR_BDEN::transfer_bypass_data_disabled:
        result = "transfer_bypass_data_disabled";
        break;
    case USIC0_CH0_BYPCR_BDEN::
        transfer_bypass_data_tbuf_possible_bypass_dat_cont:
        result = "transfer_bypass_data_tbuf_possible_bypass_dat_cont";
        break;
    case USIC0_CH0_BYPCR_BDEN::
        gated_bypass_data_transfer_enabled_bypass_dat_cont:
        result = "gated_bypass_data_transfer_enabled_bypass_dat_cont";
        break;
    case USIC0_CH0_BYPCR_BDEN::
        gated_bypass_data_transfer_enabled_bypass_dat_cont_x:
        result = "gated_bypass_data_transfer_enabled_bypass_dat_cont_x";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BYPCR_BDEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BYPCR_BDEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "transfer_bypass_data_disabled", 29)))
    {
        output = USIC0_CH0_BYPCR_BDEN::transfer_bypass_data_disabled;
    }
    else if ((result = !strncmp(
                  data, "transfer_bypass_data_tbuf_possible_bypass_dat_cont",
                  50)))
    {
        output = USIC0_CH0_BYPCR_BDEN::
            transfer_bypass_data_tbuf_possible_bypass_dat_cont;
    }
    else if ((result = !strncmp(
                  data, "gated_bypass_data_transfer_enabled_bypass_dat_cont",
                  50)))
    {
        output = USIC0_CH0_BYPCR_BDEN::
            gated_bypass_data_transfer_enabled_bypass_dat_cont;
    }
    else if ((result = !strncmp(
                  data, "gated_bypass_data_transfer_enabled_bypass_dat_cont_x",
                  52)))
    {
        output = USIC0_CH0_BYPCR_BDEN::
            gated_bypass_data_transfer_enabled_bypass_dat_cont_x;
    }

    return result;
}

}; // namespace XMC4700
