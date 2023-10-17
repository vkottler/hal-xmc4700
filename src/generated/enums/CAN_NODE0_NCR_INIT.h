/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NCR_INIT : uint8_t
{
    resetting_bit_init_enables_participation_node_cont /*!< Resetting bit INIT
                                                          enables the
                                                          participation of the
                                                          node in the CAN
                                                          traffic. If the CAN
                                                          node is in the
                                                          bus-off state, the
                                                          ongoing bus-off
                                                          recovery (which does
                                                          not depend on the
                                                          INIT bit) is
                                                          continued. With the
                                                          end of the bus-off
                                                          recovery sequence the
                                                          CAN node is allowed
                                                          to take part in the
                                                          CAN traffic. If the
                                                          CAN node is not in
                                                          the bus-off state, a
                                                          sequence of 11
                                                          consecutive recessive
                                                          bits must be detected
                                                          before the node is
                                                          allowed to take part
                                                          in the CAN traffic.
                                                        */
        ,
    setting_this_bit_terminates_participation_thi_cont =
        1 /*!< Setting this bit terminates the participation of this node in
             the CAN traffic. Any ongoing frame transfer is cancelled and the
             transmit line goes recessive. If the CAN node is in the bus-off
             state, then the running bus-off recovery sequence is continued. If
             the INIT bit is still set after the successful completion of the
             bus-off recovery sequence, i.e. after detecting 128 sequences of
             11 consecutive recessive bits (11 1), then the CAN node leaves the
             bus-off state but remains inactive as long as INIT remains set. */
};
static_assert(sizeof(CAN_NODE0_NCR_INIT) == 1);

/**
 * Converts CAN_NODE0_NCR_INIT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NCR_INIT instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NCR_INIT";

    switch (instance)
    {
    case CAN_NODE0_NCR_INIT::
        resetting_bit_init_enables_participation_node_cont:
        result = "resetting_bit_init_enables_participation_node_cont";
        break;
    case CAN_NODE0_NCR_INIT::
        setting_this_bit_terminates_participation_thi_cont:
        result = "setting_this_bit_terminates_participation_thi_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NCR_INIT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NCR_INIT &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "resetting_bit_init_enables_participation_node_cont", 50)))
    {
        output = CAN_NODE0_NCR_INIT::
            resetting_bit_init_enables_participation_node_cont;
    }
    else if ((result = !strncmp(
                  data, "setting_this_bit_terminates_participation_thi_cont",
                  50)))
    {
        output = CAN_NODE0_NCR_INIT::
            setting_this_bit_terminates_participation_thi_cont;
    }

    return result;
}

}; // namespace XMC4700
