/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_FCFGC_SRGM : uint8_t
{
    never_service_requests_disabled /*!< Never, service requests disabled */,
    always_each_new_result_value = 3 /*!< Always, for each new result value */
};
static_assert(sizeof(DSD_CH0_FCFGC_SRGM) == 1);

/**
 * Converts DSD_CH0_FCFGC_SRGM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_FCFGC_SRGM instance)
{
    const char *result = "UNKNOWN DSD_CH0_FCFGC_SRGM";

    switch (instance)
    {
    case DSD_CH0_FCFGC_SRGM::never_service_requests_disabled:
        result = "never_service_requests_disabled";
        break;
    case DSD_CH0_FCFGC_SRGM::always_each_new_result_value:
        result = "always_each_new_result_value";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_FCFGC_SRGM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_FCFGC_SRGM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "never_service_requests_disabled", 31)))
    {
        output = DSD_CH0_FCFGC_SRGM::never_service_requests_disabled;
    }
    else if ((result = !strncmp(data, "always_each_new_result_value", 28)))
    {
        output = DSD_CH0_FCFGC_SRGM::always_each_new_result_value;
    }

    return result;
}

}; // namespace XMC4700
