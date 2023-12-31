/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CHCTR_CHEVMODE : uint8_t
{
    never /*!< Never */,
    ncm_if_result_inside_boundary_band_fcm_if_res_cont =
        1 /*!< NCM: If result is inside the boundary band FCM: If result
             becomes high (above cmp. val.) */
        ,
    ncm_if_result_outside_boundary_band_fcm_if_re_cont =
        2 /*!< NCM: If result is outside the boundary band FCM: If result
             becomes low (below cmp. val.) */
        ,
    ncm_always_ignore_band_fcm_if_result_switches_cont =
        3 /*!< NCM: Always (ignore band) FCM: If result switches to either
             level */
};
static_assert(sizeof(VADC_G0_CHCTR_CHEVMODE) == 1);

/**
 * Converts VADC_G0_CHCTR_CHEVMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHCTR_CHEVMODE instance)
{
    const char *result = "UNKNOWN VADC_G0_CHCTR_CHEVMODE";

    switch (instance)
    {
    case VADC_G0_CHCTR_CHEVMODE::never:
        result = "never";
        break;
    case VADC_G0_CHCTR_CHEVMODE::
        ncm_if_result_inside_boundary_band_fcm_if_res_cont:
        result = "ncm_if_result_inside_boundary_band_fcm_if_res_cont";
        break;
    case VADC_G0_CHCTR_CHEVMODE::
        ncm_if_result_outside_boundary_band_fcm_if_re_cont:
        result = "ncm_if_result_outside_boundary_band_fcm_if_re_cont";
        break;
    case VADC_G0_CHCTR_CHEVMODE::
        ncm_always_ignore_band_fcm_if_result_switches_cont:
        result = "ncm_always_ignore_band_fcm_if_result_switches_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHCTR_CHEVMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHCTR_CHEVMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "never", 5)))
    {
        output = VADC_G0_CHCTR_CHEVMODE::never;
    }
    else if ((result = !strncmp(
                  data, "ncm_if_result_inside_boundary_band_fcm_if_res_cont",
                  50)))
    {
        output = VADC_G0_CHCTR_CHEVMODE::
            ncm_if_result_inside_boundary_band_fcm_if_res_cont;
    }
    else if ((result = !strncmp(
                  data, "ncm_if_result_outside_boundary_band_fcm_if_re_cont",
                  50)))
    {
        output = VADC_G0_CHCTR_CHEVMODE::
            ncm_if_result_outside_boundary_band_fcm_if_re_cont;
    }
    else if ((result = !strncmp(
                  data, "ncm_always_ignore_band_fcm_if_result_switches_cont",
                  50)))
    {
        output = VADC_G0_CHCTR_CHEVMODE::
            ncm_always_ignore_band_fcm_if_result_switches_cont;
    }

    return result;
}

}; // namespace XMC4700
