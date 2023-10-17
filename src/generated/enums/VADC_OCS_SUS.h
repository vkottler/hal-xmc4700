/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_OCS_SUS : uint8_t
{
    not_suspend /*!< Will not suspend */,
    hard_suspend_clock_switched_off_immediately =
        1 /*!< Hard suspend: Clock is switched off immediately. */,
    soft_suspend_mode_0_stop_conversions_after_cu_cont =
        2 /*!< Soft suspend mode 0: Stop conversions after the currently
             running one is completed and its result has been stored. No change
             for the arbiter. */
        ,
    soft_suspend_mode_1_stop_conversions_after_cu_cont =
        3 /*!< Soft suspend mode 1: Stop conversions after the currently
             running one is completed and its result has been stored. Stop
             arbiter after the current arbitration round. */
};
static_assert(sizeof(VADC_OCS_SUS) == 1);

/**
 * Converts VADC_OCS_SUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_OCS_SUS instance)
{
    const char *result = "UNKNOWN VADC_OCS_SUS";

    switch (instance)
    {
    case VADC_OCS_SUS::not_suspend:
        result = "not_suspend";
        break;
    case VADC_OCS_SUS::hard_suspend_clock_switched_off_immediately:
        result = "hard_suspend_clock_switched_off_immediately";
        break;
    case VADC_OCS_SUS::soft_suspend_mode_0_stop_conversions_after_cu_cont:
        result = "soft_suspend_mode_0_stop_conversions_after_cu_cont";
        break;
    case VADC_OCS_SUS::soft_suspend_mode_1_stop_conversions_after_cu_cont:
        result = "soft_suspend_mode_1_stop_conversions_after_cu_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_OCS_SUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_OCS_SUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_suspend", 11)))
    {
        output = VADC_OCS_SUS::not_suspend;
    }
    else if ((result = !strncmp(
                  data, "hard_suspend_clock_switched_off_immediately", 43)))
    {
        output = VADC_OCS_SUS::hard_suspend_clock_switched_off_immediately;
    }
    else if ((result = !strncmp(
                  data, "soft_suspend_mode_0_stop_conversions_after_cu_cont",
                  50)))
    {
        output =
            VADC_OCS_SUS::soft_suspend_mode_0_stop_conversions_after_cu_cont;
    }
    else if ((result = !strncmp(
                  data, "soft_suspend_mode_1_stop_conversions_after_cu_cont",
                  50)))
    {
        output =
            VADC_OCS_SUS::soft_suspend_mode_1_stop_conversions_after_cu_cont;
    }

    return result;
}

}; // namespace XMC4700
