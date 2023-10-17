/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CLC_EDIS : uint8_t
{
    sleep_mode_request_enabled_functional /*!< Sleep mode request is enabled
                                             and functional */
        ,
    module_disregards_sleep_mode_control_signal =
        1 /*!< Module disregards the sleep mode control signal */
};
static_assert(sizeof(DSD_CLC_EDIS) == 1);

/**
 * Converts DSD_CLC_EDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CLC_EDIS instance)
{
    const char *result = "UNKNOWN DSD_CLC_EDIS";

    switch (instance)
    {
    case DSD_CLC_EDIS::sleep_mode_request_enabled_functional:
        result = "sleep_mode_request_enabled_functional";
        break;
    case DSD_CLC_EDIS::module_disregards_sleep_mode_control_signal:
        result = "module_disregards_sleep_mode_control_signal";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CLC_EDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CLC_EDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "sleep_mode_request_enabled_functional", 37)))
    {
        output = DSD_CLC_EDIS::sleep_mode_request_enabled_functional;
    }
    else if ((result = !strncmp(
                  data, "module_disregards_sleep_mode_control_signal", 43)))
    {
        output = DSD_CLC_EDIS::module_disregards_sleep_mode_control_signal;
    }

    return result;
}

}; // namespace XMC4700
