/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_EMUXCTR_EMUXMODE : uint8_t
{
    software_control_no_hardware_action /*!< Software control (no hardware
                                           action) */
        ,
    steady_mode_use_emuxset_value = 1 /*!< Steady mode (use EMUXSET value) */,
    single_step_mode = 2 /*!< Single-step mode */,
    sequence_mode = 3 /*!< Sequence mode */
};
static_assert(sizeof(VADC_G0_EMUXCTR_EMUXMODE) == 1);

/**
 * Converts VADC_G0_EMUXCTR_EMUXMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_EMUXCTR_EMUXMODE instance)
{
    const char *result = "UNKNOWN VADC_G0_EMUXCTR_EMUXMODE";

    switch (instance)
    {
    case VADC_G0_EMUXCTR_EMUXMODE::software_control_no_hardware_action:
        result = "software_control_no_hardware_action";
        break;
    case VADC_G0_EMUXCTR_EMUXMODE::steady_mode_use_emuxset_value:
        result = "steady_mode_use_emuxset_value";
        break;
    case VADC_G0_EMUXCTR_EMUXMODE::single_step_mode:
        result = "single_step_mode";
        break;
    case VADC_G0_EMUXCTR_EMUXMODE::sequence_mode:
        result = "sequence_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_EMUXCTR_EMUXMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_EMUXCTR_EMUXMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "software_control_no_hardware_action", 35)))
    {
        output = VADC_G0_EMUXCTR_EMUXMODE::software_control_no_hardware_action;
    }
    else if ((result = !strncmp(data, "steady_mode_use_emuxset_value", 29)))
    {
        output = VADC_G0_EMUXCTR_EMUXMODE::steady_mode_use_emuxset_value;
    }
    else if ((result = !strncmp(data, "single_step_mode", 16)))
    {
        output = VADC_G0_EMUXCTR_EMUXMODE::single_step_mode;
    }
    else if ((result = !strncmp(data, "sequence_mode", 13)))
    {
        output = VADC_G0_EMUXCTR_EMUXMODE::sequence_mode;
    }

    return result;
}

}; // namespace XMC4700
