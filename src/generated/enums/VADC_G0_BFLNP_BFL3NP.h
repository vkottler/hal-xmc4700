/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFLNP_BFL3NP : uint8_t
{
    select_common_bondary_flag_output_0 /*!< Select common bondary flag output
                                           0 */
        ,
    select_common_bondary_flag_output_3 =
        3 /*!< Select common bondary flag output 3 */,
    select_shared_service_request_line_0 =
        4 /*!< Select shared service request line 0 */,
    select_shared_service_request_line_3 =
        7 /*!< Select shared service request line 3 */,
    disabled_no_common_output_signal =
        15 /*!< Disabled, no common output signal */
};
static_assert(sizeof(VADC_G0_BFLNP_BFL3NP) == 1);

/**
 * Converts VADC_G0_BFLNP_BFL3NP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFLNP_BFL3NP instance)
{
    const char *result = "UNKNOWN VADC_G0_BFLNP_BFL3NP";

    switch (instance)
    {
    case VADC_G0_BFLNP_BFL3NP::select_common_bondary_flag_output_0:
        result = "select_common_bondary_flag_output_0";
        break;
    case VADC_G0_BFLNP_BFL3NP::select_common_bondary_flag_output_3:
        result = "select_common_bondary_flag_output_3";
        break;
    case VADC_G0_BFLNP_BFL3NP::select_shared_service_request_line_0:
        result = "select_shared_service_request_line_0";
        break;
    case VADC_G0_BFLNP_BFL3NP::select_shared_service_request_line_3:
        result = "select_shared_service_request_line_3";
        break;
    case VADC_G0_BFLNP_BFL3NP::disabled_no_common_output_signal:
        result = "disabled_no_common_output_signal";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFLNP_BFL3NP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFLNP_BFL3NP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "select_common_bondary_flag_output_0", 35)))
    {
        output = VADC_G0_BFLNP_BFL3NP::select_common_bondary_flag_output_0;
    }
    else if ((result =
                  !strncmp(data, "select_common_bondary_flag_output_3", 35)))
    {
        output = VADC_G0_BFLNP_BFL3NP::select_common_bondary_flag_output_3;
    }
    else if ((result =
                  !strncmp(data, "select_shared_service_request_line_0", 36)))
    {
        output = VADC_G0_BFLNP_BFL3NP::select_shared_service_request_line_0;
    }
    else if ((result =
                  !strncmp(data, "select_shared_service_request_line_3", 36)))
    {
        output = VADC_G0_BFLNP_BFL3NP::select_shared_service_request_line_3;
    }
    else if ((result = !strncmp(data, "disabled_no_common_output_signal", 32)))
    {
        output = VADC_G0_BFLNP_BFL3NP::disabled_no_common_output_signal;
    }

    return result;
}

}; // namespace XMC4700
