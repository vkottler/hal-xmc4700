/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NSR_RXOK : uint8_t
{
    no_successful_reception_since_last_most_recen_cont /*!< No successful
                                                          reception since last
                                                          (most recent) flag
                                                          reset. */
        ,
    message_has_been_received_successfully =
        1 /*!< A message has been received successfully. */
};
static_assert(sizeof(CAN_NODE0_NSR_RXOK) == 1);

/**
 * Converts CAN_NODE0_NSR_RXOK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NSR_RXOK instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NSR_RXOK";

    switch (instance)
    {
    case CAN_NODE0_NSR_RXOK::
        no_successful_reception_since_last_most_recen_cont:
        result = "no_successful_reception_since_last_most_recen_cont";
        break;
    case CAN_NODE0_NSR_RXOK::message_has_been_received_successfully:
        result = "message_has_been_received_successfully";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NSR_RXOK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NSR_RXOK &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "no_successful_reception_since_last_most_recen_cont", 50)))
    {
        output = CAN_NODE0_NSR_RXOK::
            no_successful_reception_since_last_most_recen_cont;
    }
    else if ((result = !strncmp(data, "message_has_been_received_successfully",
                                38)))
    {
        output = CAN_NODE0_NSR_RXOK::message_has_been_received_successfully;
    }

    return result;
}

}; // namespace XMC4700
