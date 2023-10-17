/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT14_PDISC_PDIS8 : uint8_t
{
    enabled_digital_input_selected /*!< Pad is enabled, digital input selected.
                                    */
        ,
    disabled_adc_1_analog_input_0_adc_2_analog_in_cont =
        1 /*!< Pad is disabled, ADC 1 analog input 0 and ADC 2 analog input 4
             and DAC output 0 selected. */
};
static_assert(sizeof(PORT14_PDISC_PDIS8) == 1);

/**
 * Converts PORT14_PDISC_PDIS8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT14_PDISC_PDIS8 instance)
{
    const char *result = "UNKNOWN PORT14_PDISC_PDIS8";

    switch (instance)
    {
    case PORT14_PDISC_PDIS8::enabled_digital_input_selected:
        result = "enabled_digital_input_selected";
        break;
    case PORT14_PDISC_PDIS8::
        disabled_adc_1_analog_input_0_adc_2_analog_in_cont:
        result = "disabled_adc_1_analog_input_0_adc_2_analog_in_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT14_PDISC_PDIS8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT14_PDISC_PDIS8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled_digital_input_selected", 30)))
    {
        output = PORT14_PDISC_PDIS8::enabled_digital_input_selected;
    }
    else if ((result = !strncmp(
                  data, "disabled_adc_1_analog_input_0_adc_2_analog_in_cont",
                  50)))
    {
        output = PORT14_PDISC_PDIS8::
            disabled_adc_1_analog_input_0_adc_2_analog_in_cont;
    }

    return result;
}

}; // namespace XMC4700
