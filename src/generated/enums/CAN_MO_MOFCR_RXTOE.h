/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOFCR_RXTOE : uint8_t
{
    does_not_take_part_receive_time_out_check /*!< Message does not take part
                                                 in receive time-out check */
        ,
    takes_part_receive_time_out_check =
        1 /*!< Message takes part in receive time-out check */
};
static_assert(sizeof(CAN_MO_MOFCR_RXTOE) == 1);

/**
 * Converts CAN_MO_MOFCR_RXTOE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOFCR_RXTOE instance)
{
    const char *result = "UNKNOWN CAN_MO_MOFCR_RXTOE";

    switch (instance)
    {
    case CAN_MO_MOFCR_RXTOE::does_not_take_part_receive_time_out_check:
        result = "does_not_take_part_receive_time_out_check";
        break;
    case CAN_MO_MOFCR_RXTOE::takes_part_receive_time_out_check:
        result = "takes_part_receive_time_out_check";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOFCR_RXTOE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOFCR_RXTOE &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "does_not_take_part_receive_time_out_check", 41)))
    {
        output = CAN_MO_MOFCR_RXTOE::does_not_take_part_receive_time_out_check;
    }
    else if ((result =
                  !strncmp(data, "takes_part_receive_time_out_check", 33)))
    {
        output = CAN_MO_MOFCR_RXTOE::takes_part_receive_time_out_check;
    }

    return result;
}

}; // namespace XMC4700
