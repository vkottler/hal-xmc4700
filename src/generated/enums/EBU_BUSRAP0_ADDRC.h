/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP0_ADDRC : uint8_t
{
    _clock_cycle_selected /*!< 1 clock cycle selected */,
    _clock_cycle_selected_x = 1 /*!< 1 clock cycle selected */,
    _4_clock_cycles_selected = 14 /*!< 14 clock cycles selected */,
    _5_clock_cycles_selected = 15 /*!< 15 clock cycles selected */
};
static_assert(sizeof(EBU_BUSRAP0_ADDRC) == 1);

/**
 * Converts EBU_BUSRAP0_ADDRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP0_ADDRC instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP0_ADDRC";

    switch (instance)
    {
    case EBU_BUSRAP0_ADDRC::_clock_cycle_selected:
        result = "_clock_cycle_selected";
        break;
    case EBU_BUSRAP0_ADDRC::_clock_cycle_selected_x:
        result = "_clock_cycle_selected_x";
        break;
    case EBU_BUSRAP0_ADDRC::_4_clock_cycles_selected:
        result = "_4_clock_cycles_selected";
        break;
    case EBU_BUSRAP0_ADDRC::_5_clock_cycles_selected:
        result = "_5_clock_cycles_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP0_ADDRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP0_ADDRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_clock_cycle_selected", 21)))
    {
        output = EBU_BUSRAP0_ADDRC::_clock_cycle_selected;
    }
    else if ((result = !strncmp(data, "_clock_cycle_selected_x", 23)))
    {
        output = EBU_BUSRAP0_ADDRC::_clock_cycle_selected_x;
    }
    else if ((result = !strncmp(data, "_4_clock_cycles_selected", 24)))
    {
        output = EBU_BUSRAP0_ADDRC::_4_clock_cycles_selected;
    }
    else if ((result = !strncmp(data, "_5_clock_cycles_selected", 24)))
    {
        output = EBU_BUSRAP0_ADDRC::_5_clock_cycles_selected;
    }

    return result;
}

}; // namespace XMC4700
