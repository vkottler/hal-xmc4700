/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCFG_NZStsOUTHShk : uint8_t
{
    stall_handshake_nonzero_length_status_out_tra_cont =
        1 /*!< Send a STALL handshake on a nonzero-length status OUT
             transaction and do not send the received OUT packet to the
             application. */
        ,
    received_out_packet_application_zero_length_o_cont /*!< Send the received
                                                          OUT packet to the
                                                          application
                                                          (zero-length or
                                                          nonzero-length) and
                                                          send a handshake
                                                          based on the NAK and
                                                          STALL bits for the
                                                          endpoint in the
                                                          Device Endpoint
                                                          Control register. */
};
static_assert(sizeof(USB0_DCFG_NZStsOUTHShk) == 1);

/**
 * Converts USB0_DCFG_NZStsOUTHShk to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCFG_NZStsOUTHShk instance)
{
    const char *result = "UNKNOWN USB0_DCFG_NZStsOUTHShk";

    switch (instance)
    {
    case USB0_DCFG_NZStsOUTHShk::
        stall_handshake_nonzero_length_status_out_tra_cont:
        result = "stall_handshake_nonzero_length_status_out_tra_cont";
        break;
    case USB0_DCFG_NZStsOUTHShk::
        received_out_packet_application_zero_length_o_cont:
        result = "received_out_packet_application_zero_length_o_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCFG_NZStsOUTHShk.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCFG_NZStsOUTHShk &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "stall_handshake_nonzero_length_status_out_tra_cont", 50)))
    {
        output = USB0_DCFG_NZStsOUTHShk::
            stall_handshake_nonzero_length_status_out_tra_cont;
    }
    else if ((result = !strncmp(
                  data, "received_out_packet_application_zero_length_o_cont",
                  50)))
    {
        output = USB0_DCFG_NZStsOUTHShk::
            received_out_packet_application_zero_length_o_cont;
    }

    return result;
}

}; // namespace XMC4700
