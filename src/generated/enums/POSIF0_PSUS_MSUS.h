/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PSUS_MSUS : uint8_t
{
    suspend_request_ignored /*!< Suspend request ignored */,
    stop_immediately_multi_channel_pattern_not_se_cont =
        1 /*!< Stop immediately. Multi-Channel pattern is not set to the reset
             value. */
        ,
    stop_immediately_multi_channel_pattern_set_re_cont =
        2 /*!< Stop immediately. Multi-Channel pattern is set to the reset
             value. */
        ,
    suspend_with_synchronization_pwm_signal_multi_cont =
        3 /*!< Suspend with the synchronization of the PWM signal.
             Multi-Channel pattern is set to the reset value at the same time
             of the synchronization. */
};
static_assert(sizeof(POSIF0_PSUS_MSUS) == 1);

/**
 * Converts POSIF0_PSUS_MSUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PSUS_MSUS instance)
{
    const char *result = "UNKNOWN POSIF0_PSUS_MSUS";

    switch (instance)
    {
    case POSIF0_PSUS_MSUS::suspend_request_ignored:
        result = "suspend_request_ignored";
        break;
    case POSIF0_PSUS_MSUS::stop_immediately_multi_channel_pattern_not_se_cont:
        result = "stop_immediately_multi_channel_pattern_not_se_cont";
        break;
    case POSIF0_PSUS_MSUS::stop_immediately_multi_channel_pattern_set_re_cont:
        result = "stop_immediately_multi_channel_pattern_set_re_cont";
        break;
    case POSIF0_PSUS_MSUS::suspend_with_synchronization_pwm_signal_multi_cont:
        result = "suspend_with_synchronization_pwm_signal_multi_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PSUS_MSUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PSUS_MSUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "suspend_request_ignored", 23)))
    {
        output = POSIF0_PSUS_MSUS::suspend_request_ignored;
    }
    else if ((result = !strncmp(
                  data, "stop_immediately_multi_channel_pattern_not_se_cont",
                  50)))
    {
        output = POSIF0_PSUS_MSUS::
            stop_immediately_multi_channel_pattern_not_se_cont;
    }
    else if ((result = !strncmp(
                  data, "stop_immediately_multi_channel_pattern_set_re_cont",
                  50)))
    {
        output = POSIF0_PSUS_MSUS::
            stop_immediately_multi_channel_pattern_set_re_cont;
    }
    else if ((result = !strncmp(
                  data, "suspend_with_synchronization_pwm_signal_multi_cont",
                  50)))
    {
        output = POSIF0_PSUS_MSUS::
            suspend_with_synchronization_pwm_signal_multi_cont;
    }

    return result;
}

}; // namespace XMC4700
