/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_TSCTRR : uint8_t
{
    disable_ts_counter_automatic_reset /*!< Disable TS-counter automatic reset
                                        */
        ,
    enable_ts_counter_automatic_reset_00h_first_p_cont =
        1 /*!< Enable TS-counter automatic reset to 00H on the first pad turn
             of a new TSIN[x]. Triggered on compare match in time slice. */
};
static_assert(sizeof(LEDTS0_FNCTL_TSCTRR) == 1);

/**
 * Converts LEDTS0_FNCTL_TSCTRR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_TSCTRR instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_TSCTRR";

    switch (instance)
    {
    case LEDTS0_FNCTL_TSCTRR::disable_ts_counter_automatic_reset:
        result = "disable_ts_counter_automatic_reset";
        break;
    case LEDTS0_FNCTL_TSCTRR::
        enable_ts_counter_automatic_reset_00h_first_p_cont:
        result = "enable_ts_counter_automatic_reset_00h_first_p_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_TSCTRR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_TSCTRR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable_ts_counter_automatic_reset", 34)))
    {
        output = LEDTS0_FNCTL_TSCTRR::disable_ts_counter_automatic_reset;
    }
    else if ((result = !strncmp(
                  data, "enable_ts_counter_automatic_reset_00h_first_p_cont",
                  50)))
    {
        output = LEDTS0_FNCTL_TSCTRR::
            enable_ts_counter_automatic_reset_00h_first_p_cont;
    }

    return result;
}

}; // namespace XMC4700
