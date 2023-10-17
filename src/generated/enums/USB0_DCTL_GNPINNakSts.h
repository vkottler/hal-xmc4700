/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCTL_GNPINNakSts : uint8_t
{
    handshake_sent_out_based_data_availability_tr_cont /*!< A handshake is sent
                                                          out based on the data
                                                          availability in the
                                                          transmit FIFO. */
        ,
    nak_handshake_sent_out_all_non_periodic_endpo_cont =
        1 /*!< A NAK handshake is sent out on all non-periodic IN endpoints,
             irrespective of the data availability in the transmit FIFO. */
};
static_assert(sizeof(USB0_DCTL_GNPINNakSts) == 1);

/**
 * Converts USB0_DCTL_GNPINNakSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCTL_GNPINNakSts instance)
{
    const char *result = "UNKNOWN USB0_DCTL_GNPINNakSts";

    switch (instance)
    {
    case USB0_DCTL_GNPINNakSts::
        handshake_sent_out_based_data_availability_tr_cont:
        result = "handshake_sent_out_based_data_availability_tr_cont";
        break;
    case USB0_DCTL_GNPINNakSts::
        nak_handshake_sent_out_all_non_periodic_endpo_cont:
        result = "nak_handshake_sent_out_all_non_periodic_endpo_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCTL_GNPINNakSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCTL_GNPINNakSts &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "handshake_sent_out_based_data_availability_tr_cont", 50)))
    {
        output = USB0_DCTL_GNPINNakSts::
            handshake_sent_out_based_data_availability_tr_cont;
    }
    else if ((result = !strncmp(
                  data, "nak_handshake_sent_out_all_non_periodic_endpo_cont",
                  50)))
    {
        output = USB0_DCTL_GNPINNakSts::
            nak_handshake_sent_out_all_non_periodic_endpo_cont;
    }

    return result;
}

}; // namespace XMC4700
