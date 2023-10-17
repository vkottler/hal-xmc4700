/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCR_HIBIO1SEL : uint8_t
{
    direct_input_no_input_pull_device_connected /*!< Direct input, No input
                                                   pull device connected */
        ,
    direct_input_input_pull_down_device_connected =
        1 /*!< Direct input, Input pull-down device connected */,
    direct_input_input_pull_up_device_connected =
        2 /*!< Direct input, Input pull-up device connected */,
    push_pull_hib_control_output = 8 /*!< Push-pull HIB Control output */,
    push_pull_wdt_service_output = 9 /*!< Push-pull WDT service output */,
    push_pull_gpio_output = 10 /*!< Push-pull GPIO output */,
    open_drain_hib_control_output = 12 /*!< Open-drain HIB Control output */,
    open_drain_wdt_service_output = 13 /*!< Open-drain WDT service output */,
    open_drain_gpio_output = 14 /*!< Open-drain GPIO output */,
    analog_input = 15 /*!< Analog input */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_HIBIO1SEL) == 1);

/**
 * Converts SCU_HIBERNATE_HDCR_HIBIO1SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_HIBIO1SEL instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_HIBIO1SEL";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::
        direct_input_no_input_pull_device_connected:
        result = "direct_input_no_input_pull_device_connected";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::
        direct_input_input_pull_down_device_connected:
        result = "direct_input_input_pull_down_device_connected";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::
        direct_input_input_pull_up_device_connected:
        result = "direct_input_input_pull_up_device_connected";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::push_pull_hib_control_output:
        result = "push_pull_hib_control_output";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::push_pull_wdt_service_output:
        result = "push_pull_wdt_service_output";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::push_pull_gpio_output:
        result = "push_pull_gpio_output";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::open_drain_hib_control_output:
        result = "open_drain_hib_control_output";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::open_drain_wdt_service_output:
        result = "open_drain_wdt_service_output";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::open_drain_gpio_output:
        result = "open_drain_gpio_output";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1SEL::analog_input:
        result = "analog_input";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_HIBIO1SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_HIBIO1SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "direct_input_no_input_pull_device_connected",
                           43)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::
            direct_input_no_input_pull_device_connected;
    }
    else if ((result = !strncmp(
                  data, "direct_input_input_pull_down_device_connected", 45)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::
            direct_input_input_pull_down_device_connected;
    }
    else if ((result = !strncmp(
                  data, "direct_input_input_pull_up_device_connected", 43)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::
            direct_input_input_pull_up_device_connected;
    }
    else if ((result = !strncmp(data, "push_pull_hib_control_output", 28)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::push_pull_hib_control_output;
    }
    else if ((result = !strncmp(data, "push_pull_wdt_service_output", 28)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::push_pull_wdt_service_output;
    }
    else if ((result = !strncmp(data, "push_pull_gpio_output", 21)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::push_pull_gpio_output;
    }
    else if ((result = !strncmp(data, "open_drain_hib_control_output", 29)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::open_drain_hib_control_output;
    }
    else if ((result = !strncmp(data, "open_drain_wdt_service_output", 29)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::open_drain_wdt_service_output;
    }
    else if ((result = !strncmp(data, "open_drain_gpio_output", 22)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::open_drain_gpio_output;
    }
    else if ((result = !strncmp(data, "analog_input", 12)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1SEL::analog_input;
    }

    return result;
}

}; // namespace XMC4700
