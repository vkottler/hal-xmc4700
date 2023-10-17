/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT15_PDISC_PDIS3 : uint8_t
{
    enabled_digital_input_selected /*!< Pad is enabled, digital input selected.
                                    */
        ,
    disabled_adc_2_analog_input_3 =
        1 /*!< Pad is disabled, ADC 2 analog input 3. */
};
static_assert(sizeof(PORT15_PDISC_PDIS3) == 1);

/**
 * Converts PORT15_PDISC_PDIS3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT15_PDISC_PDIS3 instance)
{
    const char *result = "UNKNOWN PORT15_PDISC_PDIS3";

    switch (instance)
    {
    case PORT15_PDISC_PDIS3::enabled_digital_input_selected:
        result = "enabled_digital_input_selected";
        break;
    case PORT15_PDISC_PDIS3::disabled_adc_2_analog_input_3:
        result = "disabled_adc_2_analog_input_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT15_PDISC_PDIS3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT15_PDISC_PDIS3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled_digital_input_selected", 30)))
    {
        output = PORT15_PDISC_PDIS3::enabled_digital_input_selected;
    }
    else if ((result = !strncmp(data, "disabled_adc_2_analog_input_3", 29)))
    {
        output = PORT15_PDISC_PDIS3::disabled_adc_2_analog_input_3;
    }

    return result;
}

}; // namespace XMC4700
