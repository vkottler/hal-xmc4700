/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_DIR : uint8_t
{
    receive_object_selected_with_txrq_1_remote_fr_cont /*!< Receive Object
                                                          selected: With TXRQ =
                                                          1, a Remote Frame
                                                          with the identifier
                                                          of message object n
                                                          is scheduled for
                                                          transmission. On
                                                          reception of a Data
                                                          Frame with matching
                                                          identifier, the
                                                          message is stored in
                                                          message object n. */
        ,
    transmit_object_selected_if_txrq_1_message_ob_cont =
        1 /*!< Transmit Object selected: If TXRQ = 1, message object n is
             scheduled for transmission of a Data Frame. On reception of a
             Remote Frame with matching identifier, bit TXRQ is set. */
};
static_assert(sizeof(CAN_MO_MOSTAT_DIR) == 1);

/**
 * Converts CAN_MO_MOSTAT_DIR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_DIR instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_DIR";

    switch (instance)
    {
    case CAN_MO_MOSTAT_DIR::receive_object_selected_with_txrq_1_remote_fr_cont:
        result = "receive_object_selected_with_txrq_1_remote_fr_cont";
        break;
    case CAN_MO_MOSTAT_DIR::transmit_object_selected_if_txrq_1_message_ob_cont:
        result = "transmit_object_selected_if_txrq_1_message_ob_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_DIR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_DIR &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "receive_object_selected_with_txrq_1_remote_fr_cont", 50)))
    {
        output = CAN_MO_MOSTAT_DIR::
            receive_object_selected_with_txrq_1_remote_fr_cont;
    }
    else if ((result = !strncmp(
                  data, "transmit_object_selected_if_txrq_1_message_ob_cont",
                  50)))
    {
        output = CAN_MO_MOSTAT_DIR::
            transmit_object_selected_if_txrq_1_message_ob_cont;
    }

    return result;
}

}; // namespace XMC4700
