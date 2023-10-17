/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BRSCTRL_XTMODE : uint8_t
{
    no_external_trigger /*!< No external trigger */,
    trigger_event_upon_falling_edge =
        1 /*!< Trigger event upon a falling edge */,
    trigger_event_upon_rising_edge =
        2 /*!< Trigger event upon a rising edge */,
    trigger_event_upon_any_edge = 3 /*!< Trigger event upon any edge */
};
static_assert(sizeof(VADC_BRSCTRL_XTMODE) == 1);

/**
 * Converts VADC_BRSCTRL_XTMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSCTRL_XTMODE instance)
{
    const char *result = "UNKNOWN VADC_BRSCTRL_XTMODE";

    switch (instance)
    {
    case VADC_BRSCTRL_XTMODE::no_external_trigger:
        result = "no_external_trigger";
        break;
    case VADC_BRSCTRL_XTMODE::trigger_event_upon_falling_edge:
        result = "trigger_event_upon_falling_edge";
        break;
    case VADC_BRSCTRL_XTMODE::trigger_event_upon_rising_edge:
        result = "trigger_event_upon_rising_edge";
        break;
    case VADC_BRSCTRL_XTMODE::trigger_event_upon_any_edge:
        result = "trigger_event_upon_any_edge";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSCTRL_XTMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSCTRL_XTMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_external_trigger", 19)))
    {
        output = VADC_BRSCTRL_XTMODE::no_external_trigger;
    }
    else if ((result = !strncmp(data, "trigger_event_upon_falling_edge", 31)))
    {
        output = VADC_BRSCTRL_XTMODE::trigger_event_upon_falling_edge;
    }
    else if ((result = !strncmp(data, "trigger_event_upon_rising_edge", 30)))
    {
        output = VADC_BRSCTRL_XTMODE::trigger_event_upon_rising_edge;
    }
    else if ((result = !strncmp(data, "trigger_event_upon_any_edge", 27)))
    {
        output = VADC_BRSCTRL_XTMODE::trigger_event_upon_any_edge;
    }

    return result;
}

}; // namespace XMC4700
