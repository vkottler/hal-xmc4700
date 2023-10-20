/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NIPR_CFCINP : uint8_t
{
    _0_selected /*!< Interrupt output line INT_O0 is selected. */,
    _1_selected = 1 /*!< Interrupt output line INT_O1 is selected. */,
    _14_selected = 14 /*!< Interrupt output line INT_O14 is selected. */,
    _15_selected = 15 /*!< Interrupt output line INT_O15 is selected. */
};
static_assert(sizeof(CAN_NODE0_NIPR_CFCINP) == 1);

/**
 * Converts CAN_NODE0_NIPR_CFCINP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NIPR_CFCINP instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NIPR_CFCINP";

    switch (instance)
    {
    case CAN_NODE0_NIPR_CFCINP::_0_selected:
        result = "_0_selected";
        break;
    case CAN_NODE0_NIPR_CFCINP::_1_selected:
        result = "_1_selected";
        break;
    case CAN_NODE0_NIPR_CFCINP::_14_selected:
        result = "_14_selected";
        break;
    case CAN_NODE0_NIPR_CFCINP::_15_selected:
        result = "_15_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NIPR_CFCINP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NIPR_CFCINP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_selected", 11)))
    {
        output = CAN_NODE0_NIPR_CFCINP::_0_selected;
    }
    else if ((result = !strncmp(data, "_1_selected", 11)))
    {
        output = CAN_NODE0_NIPR_CFCINP::_1_selected;
    }
    else if ((result = !strncmp(data, "_14_selected", 12)))
    {
        output = CAN_NODE0_NIPR_CFCINP::_14_selected;
    }
    else if ((result = !strncmp(data, "_15_selected", 12)))
    {
        output = CAN_NODE0_NIPR_CFCINP::_15_selected;
    }

    return result;
}

}; // namespace XMC4700
