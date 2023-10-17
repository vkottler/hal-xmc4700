/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_PANCTR_BUSY : uint8_t
{
    has_finished_command_ready_accept_new_command /*!< Panel has finished
                                                     command and is ready to
                                                     accept a new command. */
        ,
    operation_progress = 1 /*!< Panel operation is in progress. */
};
static_assert(sizeof(CAN_PANCTR_BUSY) == 1);

/**
 * Converts CAN_PANCTR_BUSY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_PANCTR_BUSY instance)
{
    const char *result = "UNKNOWN CAN_PANCTR_BUSY";

    switch (instance)
    {
    case CAN_PANCTR_BUSY::has_finished_command_ready_accept_new_command:
        result = "has_finished_command_ready_accept_new_command";
        break;
    case CAN_PANCTR_BUSY::operation_progress:
        result = "operation_progress";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_PANCTR_BUSY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_PANCTR_BUSY &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "has_finished_command_ready_accept_new_command", 45)))
    {
        output =
            CAN_PANCTR_BUSY::has_finished_command_ready_accept_new_command;
    }
    else if ((result = !strncmp(data, "operation_progress", 18)))
    {
        output = CAN_PANCTR_BUSY::operation_progress;
    }

    return result;
}

}; // namespace XMC4700
