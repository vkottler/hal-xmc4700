/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP0_RDDTACS : uint8_t
{
    no_recovery_phase_clock_cycles_available /*!< No Recovery Phase clock
                                                cycles available. */
        ,
    _1_clock_cycle_selected = 1 /*!< 1 clock cycle selected. */,
    _14_clock_cycles_selected = 14 /*!< 14 clock cycles selected. */,
    _15_clock_cycles_selected = 15 /*!< 15 clock cycles selected. */
};
static_assert(sizeof(EBU_BUSRAP0_RDDTACS) == 1);

/**
 * Converts EBU_BUSRAP0_RDDTACS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP0_RDDTACS instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP0_RDDTACS";

    switch (instance)
    {
    case EBU_BUSRAP0_RDDTACS::no_recovery_phase_clock_cycles_available:
        result = "no_recovery_phase_clock_cycles_available";
        break;
    case EBU_BUSRAP0_RDDTACS::_1_clock_cycle_selected:
        result = "_1_clock_cycle_selected";
        break;
    case EBU_BUSRAP0_RDDTACS::_14_clock_cycles_selected:
        result = "_14_clock_cycles_selected";
        break;
    case EBU_BUSRAP0_RDDTACS::_15_clock_cycles_selected:
        result = "_15_clock_cycles_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP0_RDDTACS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP0_RDDTACS &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "no_recovery_phase_clock_cycles_available", 40)))
    {
        output = EBU_BUSRAP0_RDDTACS::no_recovery_phase_clock_cycles_available;
    }
    else if ((result = !strncmp(data, "_1_clock_cycle_selected", 23)))
    {
        output = EBU_BUSRAP0_RDDTACS::_1_clock_cycle_selected;
    }
    else if ((result = !strncmp(data, "_14_clock_cycles_selected", 25)))
    {
        output = EBU_BUSRAP0_RDDTACS::_14_clock_cycles_selected;
    }
    else if ((result = !strncmp(data, "_15_clock_cycles_selected", 25)))
    {
        output = EBU_BUSRAP0_RDDTACS::_15_clock_cycles_selected;
    }

    return result;
}

}; // namespace XMC4700
