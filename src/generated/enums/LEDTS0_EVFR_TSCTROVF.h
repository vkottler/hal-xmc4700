/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_EVFR_TSCTROVF : uint8_t
{
    no_overflow_has_occurred /*!< No overflow has occurred. */,
    ts_counter_has_overflowed_at_least_once =
        1 /*!< The TS-counter has overflowed at least once. */
};
static_assert(sizeof(LEDTS0_EVFR_TSCTROVF) == 1);

/**
 * Converts LEDTS0_EVFR_TSCTROVF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_EVFR_TSCTROVF instance)
{
    const char *result = "UNKNOWN LEDTS0_EVFR_TSCTROVF";

    switch (instance)
    {
    case LEDTS0_EVFR_TSCTROVF::no_overflow_has_occurred:
        result = "no_overflow_has_occurred";
        break;
    case LEDTS0_EVFR_TSCTROVF::ts_counter_has_overflowed_at_least_once:
        result = "ts_counter_has_overflowed_at_least_once";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_EVFR_TSCTROVF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_EVFR_TSCTROVF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_overflow_has_occurred", 24)))
    {
        output = LEDTS0_EVFR_TSCTROVF::no_overflow_has_occurred;
    }
    else if ((result = !strncmp(
                  data, "ts_counter_has_overflowed_at_least_once", 39)))
    {
        output = LEDTS0_EVFR_TSCTROVF::ts_counter_has_overflowed_at_least_once;
    }

    return result;
}

}; // namespace XMC4700
