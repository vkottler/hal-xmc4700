/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QSR0_EV : uint8_t
{
    no_trigger_event /*!< No trigger event */,
    trigger_event_has_been_detected =
        1 /*!< A trigger event has been detected */
};
static_assert(sizeof(VADC_G0_QSR0_EV) == 1);

/**
 * Converts VADC_G0_QSR0_EV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QSR0_EV instance)
{
    const char *result = "UNKNOWN VADC_G0_QSR0_EV";

    switch (instance)
    {
    case VADC_G0_QSR0_EV::no_trigger_event:
        result = "no_trigger_event";
        break;
    case VADC_G0_QSR0_EV::trigger_event_has_been_detected:
        result = "trigger_event_has_been_detected";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QSR0_EV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QSR0_EV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_trigger_event", 16)))
    {
        output = VADC_G0_QSR0_EV::no_trigger_event;
    }
    else if ((result = !strncmp(data, "trigger_event_has_been_detected", 31)))
    {
        output = VADC_G0_QSR0_EV::trigger_event_has_been_detected;
    }

    return result;
}

}; // namespace XMC4700
