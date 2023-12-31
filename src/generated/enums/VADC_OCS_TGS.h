/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_OCS_TGS : uint8_t
{
    no_trigger_set_output /*!< No Trigger Set output */,
    trigger_set_1_ts16_ssig_input_sample_signals =
        1 /*!< Trigger Set 1: TS16_SSIG, input sample signals */
};
static_assert(sizeof(VADC_OCS_TGS) == 1);

/**
 * Converts VADC_OCS_TGS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_OCS_TGS instance)
{
    const char *result = "UNKNOWN VADC_OCS_TGS";

    switch (instance)
    {
    case VADC_OCS_TGS::no_trigger_set_output:
        result = "no_trigger_set_output";
        break;
    case VADC_OCS_TGS::trigger_set_1_ts16_ssig_input_sample_signals:
        result = "trigger_set_1_ts16_ssig_input_sample_signals";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_OCS_TGS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_OCS_TGS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_trigger_set_output", 21)))
    {
        output = VADC_OCS_TGS::no_trigger_set_output;
    }
    else if ((result = !strncmp(
                  data, "trigger_set_1_ts16_ssig_input_sample_signals", 44)))
    {
        output = VADC_OCS_TGS::trigger_set_1_ts16_ssig_input_sample_signals;
    }

    return result;
}

}; // namespace XMC4700
