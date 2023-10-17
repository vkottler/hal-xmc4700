/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_Q0R0_ENSI : uint8_t
{
    no_request_source_interrupt /*!< No request source interrupt */,
    request_source_event_interrupt_generated_upon_cont =
        1 /*!< A request source event interrupt is generated upon a request
             source event (related conversion is finished) */
};
static_assert(sizeof(VADC_G0_Q0R0_ENSI) == 1);

/**
 * Converts VADC_G0_Q0R0_ENSI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_Q0R0_ENSI instance)
{
    const char *result = "UNKNOWN VADC_G0_Q0R0_ENSI";

    switch (instance)
    {
    case VADC_G0_Q0R0_ENSI::no_request_source_interrupt:
        result = "no_request_source_interrupt";
        break;
    case VADC_G0_Q0R0_ENSI::request_source_event_interrupt_generated_upon_cont:
        result = "request_source_event_interrupt_generated_upon_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_Q0R0_ENSI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_Q0R0_ENSI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_request_source_interrupt", 27)))
    {
        output = VADC_G0_Q0R0_ENSI::no_request_source_interrupt;
    }
    else if ((result = !strncmp(
                  data, "request_source_event_interrupt_generated_upon_cont",
                  50)))
    {
        output = VADC_G0_Q0R0_ENSI::
            request_source_event_interrupt_generated_upon_cont;
    }

    return result;
}

}; // namespace XMC4700
