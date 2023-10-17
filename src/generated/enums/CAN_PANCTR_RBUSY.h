/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_PANCTR_RBUSY : uint8_t
{
    no_update_panar1_panar2_scheduled_by_list_con_cont /*!< No update of PANAR1
                                                          and PANAR2 is
                                                          scheduled by the list
                                                          controller. */
        ,
    list_command_running_busy_1_write_results_pan_cont =
        1 /*!< A list command is running (BUSY = 1) that will write results to
             PANAR1 and PANAR2, but the results are not yet available. */
};
static_assert(sizeof(CAN_PANCTR_RBUSY) == 1);

/**
 * Converts CAN_PANCTR_RBUSY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_PANCTR_RBUSY instance)
{
    const char *result = "UNKNOWN CAN_PANCTR_RBUSY";

    switch (instance)
    {
    case CAN_PANCTR_RBUSY::no_update_panar1_panar2_scheduled_by_list_con_cont:
        result = "no_update_panar1_panar2_scheduled_by_list_con_cont";
        break;
    case CAN_PANCTR_RBUSY::list_command_running_busy_1_write_results_pan_cont:
        result = "list_command_running_busy_1_write_results_pan_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_PANCTR_RBUSY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_PANCTR_RBUSY &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "no_update_panar1_panar2_scheduled_by_list_con_cont", 50)))
    {
        output = CAN_PANCTR_RBUSY::
            no_update_panar1_panar2_scheduled_by_list_con_cont;
    }
    else if ((result = !strncmp(
                  data, "list_command_running_busy_1_write_results_pan_cont",
                  50)))
    {
        output = CAN_PANCTR_RBUSY::
            list_command_running_busy_1_write_results_pan_cont;
    }

    return result;
}

}; // namespace XMC4700
