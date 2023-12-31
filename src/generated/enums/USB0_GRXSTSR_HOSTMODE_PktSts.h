/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GRXSTSR_HOSTMODE_PktSts : uint8_t
{
    data_packet_received = 2 /*!< IN data packet received */,
    transfer_completed_triggers_an_interrupt =
        3 /*!< IN transfer completed (triggers an interrupt) */,
    data_toggle_error_triggers_an_interrupt =
        5 /*!< Data toggle error (triggers an interrupt) */,
    channel_halted_triggers_an_interrupt =
        7 /*!< Channel halted (triggers an interrupt) */
};
static_assert(sizeof(USB0_GRXSTSR_HOSTMODE_PktSts) == 1);

/**
 * Converts USB0_GRXSTSR_HOSTMODE_PktSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GRXSTSR_HOSTMODE_PktSts instance)
{
    const char *result = "UNKNOWN USB0_GRXSTSR_HOSTMODE_PktSts";

    switch (instance)
    {
    case USB0_GRXSTSR_HOSTMODE_PktSts::data_packet_received:
        result = "data_packet_received";
        break;
    case USB0_GRXSTSR_HOSTMODE_PktSts::
        transfer_completed_triggers_an_interrupt:
        result = "transfer_completed_triggers_an_interrupt";
        break;
    case USB0_GRXSTSR_HOSTMODE_PktSts::data_toggle_error_triggers_an_interrupt:
        result = "data_toggle_error_triggers_an_interrupt";
        break;
    case USB0_GRXSTSR_HOSTMODE_PktSts::channel_halted_triggers_an_interrupt:
        result = "channel_halted_triggers_an_interrupt";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GRXSTSR_HOSTMODE_PktSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GRXSTSR_HOSTMODE_PktSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "data_packet_received", 20)))
    {
        output = USB0_GRXSTSR_HOSTMODE_PktSts::data_packet_received;
    }
    else if ((result = !strncmp(
                  data, "transfer_completed_triggers_an_interrupt", 40)))
    {
        output = USB0_GRXSTSR_HOSTMODE_PktSts::
            transfer_completed_triggers_an_interrupt;
    }
    else if ((result = !strncmp(
                  data, "data_toggle_error_triggers_an_interrupt", 39)))
    {
        output = USB0_GRXSTSR_HOSTMODE_PktSts::
            data_toggle_error_triggers_an_interrupt;
    }
    else if ((result =
                  !strncmp(data, "channel_halted_triggers_an_interrupt", 36)))
    {
        output =
            USB0_GRXSTSR_HOSTMODE_PktSts::channel_halted_triggers_an_interrupt;
    }

    return result;
}

}; // namespace XMC4700
