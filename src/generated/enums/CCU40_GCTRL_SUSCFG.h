/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GCTRL_SUSCFG : uint8_t
{
    suspend_request_ignored_module_never_enters_s_cont /*!< Suspend request
                                                          ignored. The module
                                                          never enters in
                                                          suspend */
        ,
    stops_all_running_slices_immediately_safe_sto_cont =
        1 /*!< Stops all the running slices immediately. Safe stop is not
             applied. */
        ,
    stops_block_immediately_clamps_all_outputs_pa_cont =
        2 /*!< Stops the block immediately and clamps all the outputs to
             PASSIVE state. Safe stop is applied. */
        ,
    waits_roll_over_each_slice_stop_clamp_slices__cont =
        3 /*!< Waits for the roll over of each slice to stop and clamp the
             slices outputs. Safe stop is applied. */
};
static_assert(sizeof(CCU40_GCTRL_SUSCFG) == 1);

/**
 * Converts CCU40_GCTRL_SUSCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCTRL_SUSCFG instance)
{
    const char *result = "UNKNOWN CCU40_GCTRL_SUSCFG";

    switch (instance)
    {
    case CCU40_GCTRL_SUSCFG::
        suspend_request_ignored_module_never_enters_s_cont:
        result = "suspend_request_ignored_module_never_enters_s_cont";
        break;
    case CCU40_GCTRL_SUSCFG::
        stops_all_running_slices_immediately_safe_sto_cont:
        result = "stops_all_running_slices_immediately_safe_sto_cont";
        break;
    case CCU40_GCTRL_SUSCFG::
        stops_block_immediately_clamps_all_outputs_pa_cont:
        result = "stops_block_immediately_clamps_all_outputs_pa_cont";
        break;
    case CCU40_GCTRL_SUSCFG::
        waits_roll_over_each_slice_stop_clamp_slices__cont:
        result = "waits_roll_over_each_slice_stop_clamp_slices__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCTRL_SUSCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCTRL_SUSCFG &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "suspend_request_ignored_module_never_enters_s_cont", 50)))
    {
        output = CCU40_GCTRL_SUSCFG::
            suspend_request_ignored_module_never_enters_s_cont;
    }
    else if ((result = !strncmp(
                  data, "stops_all_running_slices_immediately_safe_sto_cont",
                  50)))
    {
        output = CCU40_GCTRL_SUSCFG::
            stops_all_running_slices_immediately_safe_sto_cont;
    }
    else if ((result = !strncmp(
                  data, "stops_block_immediately_clamps_all_outputs_pa_cont",
                  50)))
    {
        output = CCU40_GCTRL_SUSCFG::
            stops_block_immediately_clamps_all_outputs_pa_cont;
    }
    else if ((result = !strncmp(
                  data, "waits_roll_over_each_slice_stop_clamp_slices__cont",
                  50)))
    {
        output = CCU40_GCTRL_SUSCFG::
            waits_roll_over_each_slice_stop_clamp_slices__cont;
    }

    return result;
}

}; // namespace XMC4700
