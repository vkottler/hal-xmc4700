/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QMR0_CLRV : uint8_t
{
    no_action /*!< No action */,
    next_pending_valid_queue_entry_sequence_event_cont =
        1 /*!< The next pending valid queue entry in the sequence and the event
             flag EV are cleared. If there is a valid entry in the queue backup
             register (QBUR.V = 1), this entry is cleared, otherwise the entry
             in queue register 0 is cleared. */
};
static_assert(sizeof(VADC_G0_QMR0_CLRV) == 1);

/**
 * Converts VADC_G0_QMR0_CLRV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QMR0_CLRV instance)
{
    const char *result = "UNKNOWN VADC_G0_QMR0_CLRV";

    switch (instance)
    {
    case VADC_G0_QMR0_CLRV::no_action:
        result = "no_action";
        break;
    case VADC_G0_QMR0_CLRV::next_pending_valid_queue_entry_sequence_event_cont:
        result = "next_pending_valid_queue_entry_sequence_event_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QMR0_CLRV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QMR0_CLRV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_QMR0_CLRV::no_action;
    }
    else if ((result = !strncmp(
                  data, "next_pending_valid_queue_entry_sequence_event_cont",
                  50)))
    {
        output = VADC_G0_QMR0_CLRV::
            next_pending_valid_queue_entry_sequence_event_cont;
    }

    return result;
}

}; // namespace XMC4700
