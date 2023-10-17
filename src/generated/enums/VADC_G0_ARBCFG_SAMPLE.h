/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ARBCFG_SAMPLE : uint8_t
{
    converting_or_idle /*!< Converting or idle */,
    input_signal_currently_sampled =
        1 /*!< Input signal is currently sampled */
};
static_assert(sizeof(VADC_G0_ARBCFG_SAMPLE) == 1);

/**
 * Converts VADC_G0_ARBCFG_SAMPLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ARBCFG_SAMPLE instance)
{
    const char *result = "UNKNOWN VADC_G0_ARBCFG_SAMPLE";

    switch (instance)
    {
    case VADC_G0_ARBCFG_SAMPLE::converting_or_idle:
        result = "converting_or_idle";
        break;
    case VADC_G0_ARBCFG_SAMPLE::input_signal_currently_sampled:
        result = "input_signal_currently_sampled";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ARBCFG_SAMPLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ARBCFG_SAMPLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "converting_or_idle", 18)))
    {
        output = VADC_G0_ARBCFG_SAMPLE::converting_or_idle;
    }
    else if ((result = !strncmp(data, "input_signal_currently_sampled", 30)))
    {
        output = VADC_G0_ARBCFG_SAMPLE::input_signal_currently_sampled;
    }

    return result;
}

}; // namespace XMC4700
