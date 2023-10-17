/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_CLC_DISR : uint8_t
{
    request_enable_module_clock /*!< On request: enable the module clock */,
    off_request_stop_module_clock =
        1 /*!< Off request: stop the module clock */
};
static_assert(sizeof(VADC_CLC_DISR) == 1);

/**
 * Converts VADC_CLC_DISR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_CLC_DISR instance)
{
    const char *result = "UNKNOWN VADC_CLC_DISR";

    switch (instance)
    {
    case VADC_CLC_DISR::request_enable_module_clock:
        result = "request_enable_module_clock";
        break;
    case VADC_CLC_DISR::off_request_stop_module_clock:
        result = "off_request_stop_module_clock";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_CLC_DISR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_CLC_DISR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "request_enable_module_clock", 27)))
    {
        output = VADC_CLC_DISR::request_enable_module_clock;
    }
    else if ((result = !strncmp(data, "off_request_stop_module_clock", 29)))
    {
        output = VADC_CLC_DISR::off_request_stop_module_clock;
    }

    return result;
}

}; // namespace XMC4700
