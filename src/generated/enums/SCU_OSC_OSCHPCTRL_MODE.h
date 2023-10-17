/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_OSC_OSCHPCTRL_MODE : uint8_t
{
    external_crystal_mode_external_input_clock_mo_cont /*!< External Crystal
                                                          Mode and External
                                                          Input Clock Mode. The
                                                          oscillator
                                                          Power-Saving Mode is
                                                          not entered. */
        ,
    osc_disabled_oscillator_power_saving_mode_not_cont =
        1 /*!< OSC is disabled. The oscillator Power-Saving Mode is not
             entered. */
        ,
    external_input_clock_mode_oscillator_power_sa_cont =
        2 /*!< External Input Clock Mode and the oscillator Power-Saving Mode
             is entered */
        ,
    osc_disabled_oscillator_power_saving_mode_entered =
        3 /*!< OSC is disabled. The oscillator Power-Saving Mode is entered. */
};
static_assert(sizeof(SCU_OSC_OSCHPCTRL_MODE) == 1);

/**
 * Converts SCU_OSC_OSCHPCTRL_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_OSC_OSCHPCTRL_MODE instance)
{
    const char *result = "UNKNOWN SCU_OSC_OSCHPCTRL_MODE";

    switch (instance)
    {
    case SCU_OSC_OSCHPCTRL_MODE::
        external_crystal_mode_external_input_clock_mo_cont:
        result = "external_crystal_mode_external_input_clock_mo_cont";
        break;
    case SCU_OSC_OSCHPCTRL_MODE::
        osc_disabled_oscillator_power_saving_mode_not_cont:
        result = "osc_disabled_oscillator_power_saving_mode_not_cont";
        break;
    case SCU_OSC_OSCHPCTRL_MODE::
        external_input_clock_mode_oscillator_power_sa_cont:
        result = "external_input_clock_mode_oscillator_power_sa_cont";
        break;
    case SCU_OSC_OSCHPCTRL_MODE::
        osc_disabled_oscillator_power_saving_mode_entered:
        result = "osc_disabled_oscillator_power_saving_mode_entered";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_OSC_OSCHPCTRL_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_OSC_OSCHPCTRL_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "external_crystal_mode_external_input_clock_mo_cont", 50)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::
            external_crystal_mode_external_input_clock_mo_cont;
    }
    else if ((result = !strncmp(
                  data, "osc_disabled_oscillator_power_saving_mode_not_cont",
                  50)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::
            osc_disabled_oscillator_power_saving_mode_not_cont;
    }
    else if ((result = !strncmp(
                  data, "external_input_clock_mode_oscillator_power_sa_cont",
                  50)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::
            external_input_clock_mode_oscillator_power_sa_cont;
    }
    else if ((result = !strncmp(
                  data, "osc_disabled_oscillator_power_saving_mode_entered",
                  49)))
    {
        output = SCU_OSC_OSCHPCTRL_MODE::
            osc_disabled_oscillator_power_saving_mode_entered;
    }

    return result;
}

}; // namespace XMC4700
