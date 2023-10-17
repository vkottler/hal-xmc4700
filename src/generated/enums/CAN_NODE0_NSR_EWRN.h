/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NSR_EWRN : uint8_t
{
    no_warning_limit_exceeded /*!< No warning limit exceeded. */,
    one_error_counters_rec_or_tec_reached_warning_cont =
        1 /*!< One of the error counters REC or TEC reached the warning limit
             EWRNLVL. */
};
static_assert(sizeof(CAN_NODE0_NSR_EWRN) == 1);

/**
 * Converts CAN_NODE0_NSR_EWRN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NSR_EWRN instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NSR_EWRN";

    switch (instance)
    {
    case CAN_NODE0_NSR_EWRN::no_warning_limit_exceeded:
        result = "no_warning_limit_exceeded";
        break;
    case CAN_NODE0_NSR_EWRN::
        one_error_counters_rec_or_tec_reached_warning_cont:
        result = "one_error_counters_rec_or_tec_reached_warning_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NSR_EWRN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NSR_EWRN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_warning_limit_exceeded", 25)))
    {
        output = CAN_NODE0_NSR_EWRN::no_warning_limit_exceeded;
    }
    else if ((result = !strncmp(
                  data, "one_error_counters_rec_or_tec_reached_warning_cont",
                  50)))
    {
        output = CAN_NODE0_NSR_EWRN::
            one_error_counters_rec_or_tec_reached_warning_cont;
    }

    return result;
}

}; // namespace XMC4700
