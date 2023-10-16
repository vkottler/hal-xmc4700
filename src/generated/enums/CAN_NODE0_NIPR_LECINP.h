/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NIPR_LECINP : uint8_t
{
    value1 /*!< Interrupt output line INT_O0 is selected. */,
    value2 = 1 /*!< Interrupt output line INT_O1 is selected. */,
    value3 = 14 /*!< Interrupt output line INT_O14 is selected. */,
    value4 = 15 /*!< Interrupt output line INT_O15 is selected. */
};
static_assert(sizeof(CAN_NODE0_NIPR_LECINP) == 1);

/**
 * Converts CAN_NODE0_NIPR_LECINP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NIPR_LECINP instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NIPR_LECINP";

    switch (instance)
    {
    case CAN_NODE0_NIPR_LECINP::value1:
        result = "value1";
        break;
    case CAN_NODE0_NIPR_LECINP::value2:
        result = "value2";
        break;
    case CAN_NODE0_NIPR_LECINP::value3:
        result = "value3";
        break;
    case CAN_NODE0_NIPR_LECINP::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NIPR_LECINP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NIPR_LECINP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_NODE0_NIPR_LECINP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_NODE0_NIPR_LECINP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CAN_NODE0_NIPR_LECINP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CAN_NODE0_NIPR_LECINP::value4;
    }

    return result;
}

}; // namespace XMC4700
