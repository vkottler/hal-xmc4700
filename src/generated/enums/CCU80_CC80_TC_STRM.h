/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_STRM : uint8_t
{
    sets_run_bit_only_default_start /*!< Sets run bit only (default start) */,
    clears_timer_sets_run_bit_if_not_set_flushstart =
        1 /*!< Clears the timer and sets run bit, if not set (flush/start) */
};
static_assert(sizeof(CCU80_CC80_TC_STRM) == 1);

/**
 * Converts CCU80_CC80_TC_STRM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_STRM instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_STRM";

    switch (instance)
    {
    case CCU80_CC80_TC_STRM::sets_run_bit_only_default_start:
        result = "sets_run_bit_only_default_start";
        break;
    case CCU80_CC80_TC_STRM::clears_timer_sets_run_bit_if_not_set_flushstart:
        result = "clears_timer_sets_run_bit_if_not_set_flushstart";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_STRM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_STRM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "sets_run_bit_only_default_start", 31)))
    {
        output = CCU80_CC80_TC_STRM::sets_run_bit_only_default_start;
    }
    else if ((result = !strncmp(
                  data, "clears_timer_sets_run_bit_if_not_set_flushstart",
                  47)))
    {
        output = CCU80_CC80_TC_STRM::
            clears_timer_sets_run_bit_if_not_set_flushstart;
    }

    return result;
}

}; // namespace XMC4700
