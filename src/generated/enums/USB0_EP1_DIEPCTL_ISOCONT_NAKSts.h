/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP1_DIEPCTL_ISOCONT_NAKSts : uint8_t
{
    on_nak_handshakes_based_fifo_status /*!< The core is transmitting non-NAK
                                           handshakes based on the FIFO status.
                                         */
        ,
    ak_handshakes_this_endpoint =
        1 /*!< The core is transmitting NAK handshakes on this endpoint. */
};
static_assert(sizeof(USB0_EP1_DIEPCTL_ISOCONT_NAKSts) == 1);

/**
 * Converts USB0_EP1_DIEPCTL_ISOCONT_NAKSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP1_DIEPCTL_ISOCONT_NAKSts instance)
{
    const char *result = "UNKNOWN USB0_EP1_DIEPCTL_ISOCONT_NAKSts";

    switch (instance)
    {
    case USB0_EP1_DIEPCTL_ISOCONT_NAKSts::on_nak_handshakes_based_fifo_status:
        result = "on_nak_handshakes_based_fifo_status";
        break;
    case USB0_EP1_DIEPCTL_ISOCONT_NAKSts::ak_handshakes_this_endpoint:
        result = "ak_handshakes_this_endpoint";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP1_DIEPCTL_ISOCONT_NAKSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USB0_EP1_DIEPCTL_ISOCONT_NAKSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "on_nak_handshakes_based_fifo_status", 35)))
    {
        output = USB0_EP1_DIEPCTL_ISOCONT_NAKSts::
            on_nak_handshakes_based_fifo_status;
    }
    else if ((result = !strncmp(data, "ak_handshakes_this_endpoint", 27)))
    {
        output = USB0_EP1_DIEPCTL_ISOCONT_NAKSts::ak_handshakes_this_endpoint;
    }

    return result;
}

}; // namespace XMC4700
