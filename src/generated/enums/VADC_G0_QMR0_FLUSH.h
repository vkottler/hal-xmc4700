/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QMR0_FLUSH : uint8_t
{
    no_action /*!< No action */,
    clear_all_queue_entries_including_backup_stag_cont =
        1 /*!< Clear all queue entries (including backup stage) and the event
             flag EV. The queue contains no more valid entry. */
};
static_assert(sizeof(VADC_G0_QMR0_FLUSH) == 1);

/**
 * Converts VADC_G0_QMR0_FLUSH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QMR0_FLUSH instance)
{
    const char *result = "UNKNOWN VADC_G0_QMR0_FLUSH";

    switch (instance)
    {
    case VADC_G0_QMR0_FLUSH::no_action:
        result = "no_action";
        break;
    case VADC_G0_QMR0_FLUSH::
        clear_all_queue_entries_including_backup_stag_cont:
        result = "clear_all_queue_entries_including_backup_stag_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QMR0_FLUSH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QMR0_FLUSH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_QMR0_FLUSH::no_action;
    }
    else if ((result = !strncmp(
                  data, "clear_all_queue_entries_including_backup_stag_cont",
                  50)))
    {
        output = VADC_G0_QMR0_FLUSH::
            clear_all_queue_entries_including_backup_stag_cont;
    }

    return result;
}

}; // namespace XMC4700
