/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT15_PDISC_PDIS6 : uint8_t
{
    enabled_digital_input_selected /*!< Pad is enabled, digital input selected.
                                    */
        ,
    disabled_adc_2_analog_input_6 =
        1 /*!< Pad is disabled, ADC 2 analog input 6. */
};
static_assert(sizeof(PORT15_PDISC_PDIS6) == 1);

/**
 * Converts PORT15_PDISC_PDIS6 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT15_PDISC_PDIS6 instance)
{
    const char *result = "UNKNOWN PORT15_PDISC_PDIS6";

    switch (instance)
    {
    case PORT15_PDISC_PDIS6::enabled_digital_input_selected:
        result = "enabled_digital_input_selected";
        break;
    case PORT15_PDISC_PDIS6::disabled_adc_2_analog_input_6:
        result = "disabled_adc_2_analog_input_6";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT15_PDISC_PDIS6.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT15_PDISC_PDIS6 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled_digital_input_selected", 30)))
    {
        output = PORT15_PDISC_PDIS6::enabled_digital_input_selected;
    }
    else if ((result = !strncmp(data, "disabled_adc_2_analog_input_6", 29)))
    {
        output = PORT15_PDISC_PDIS6::disabled_adc_2_analog_input_6;
    }

    return result;
}

}; // namespace XMC4700
