/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ARBPR_CSM2 : uint8_t
{
    wait_for_start_mode /*!< Wait-for-start mode */,
    cancel_inject_repeat_mode_ie_this_source_can__cont =
        1 /*!< Cancel-inject-repeat mode, i.e. this source can cancel
             conversion of other sources. */
};
static_assert(sizeof(VADC_G0_ARBPR_CSM2) == 1);

/**
 * Converts VADC_G0_ARBPR_CSM2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ARBPR_CSM2 instance)
{
    const char *result = "UNKNOWN VADC_G0_ARBPR_CSM2";

    switch (instance)
    {
    case VADC_G0_ARBPR_CSM2::wait_for_start_mode:
        result = "wait_for_start_mode";
        break;
    case VADC_G0_ARBPR_CSM2::
        cancel_inject_repeat_mode_ie_this_source_can__cont:
        result = "cancel_inject_repeat_mode_ie_this_source_can__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ARBPR_CSM2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ARBPR_CSM2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "wait_for_start_mode", 19)))
    {
        output = VADC_G0_ARBPR_CSM2::wait_for_start_mode;
    }
    else if ((result = !strncmp(
                  data, "cancel_inject_repeat_mode_ie_this_source_can__cont",
                  50)))
    {
        output = VADC_G0_ARBPR_CSM2::
            cancel_inject_repeat_mode_ie_this_source_can__cont;
    }

    return result;
}

}; // namespace XMC4700
