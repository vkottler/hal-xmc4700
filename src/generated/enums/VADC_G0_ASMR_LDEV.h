/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ASMR_LDEV : uint8_t
{
    no_action /*!< No action */,
    load_event_generated = 1 /*!< A load event is generated */
};
static_assert(sizeof(VADC_G0_ASMR_LDEV) == 1);

/**
 * Converts VADC_G0_ASMR_LDEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ASMR_LDEV instance)
{
    const char *result = "UNKNOWN VADC_G0_ASMR_LDEV";

    switch (instance)
    {
    case VADC_G0_ASMR_LDEV::no_action:
        result = "no_action";
        break;
    case VADC_G0_ASMR_LDEV::load_event_generated:
        result = "load_event_generated";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ASMR_LDEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ASMR_LDEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_ASMR_LDEV::no_action;
    }
    else if ((result = !strncmp(data, "load_event_generated", 20)))
    {
        output = VADC_G0_ASMR_LDEV::load_event_generated;
    }

    return result;
}

}; // namespace XMC4700
