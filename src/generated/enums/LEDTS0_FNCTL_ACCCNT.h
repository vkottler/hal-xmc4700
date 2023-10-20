/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_ACCCNT : uint8_t
{
    _1_time /*!< 1 time */,
    _2_times = 1 /*!< 2 times */,
    _16_times = 15 /*!< 16 times */
};
static_assert(sizeof(LEDTS0_FNCTL_ACCCNT) == 1);

/**
 * Converts LEDTS0_FNCTL_ACCCNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_ACCCNT instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_ACCCNT";

    switch (instance)
    {
    case LEDTS0_FNCTL_ACCCNT::_1_time:
        result = "_1_time";
        break;
    case LEDTS0_FNCTL_ACCCNT::_2_times:
        result = "_2_times";
        break;
    case LEDTS0_FNCTL_ACCCNT::_16_times:
        result = "_16_times";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_ACCCNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_ACCCNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1_time", 7)))
    {
        output = LEDTS0_FNCTL_ACCCNT::_1_time;
    }
    else if ((result = !strncmp(data, "_2_times", 8)))
    {
        output = LEDTS0_FNCTL_ACCCNT::_2_times;
    }
    else if ((result = !strncmp(data, "_16_times", 9)))
    {
        output = LEDTS0_FNCTL_ACCCNT::_16_times;
    }

    return result;
}

}; // namespace XMC4700
