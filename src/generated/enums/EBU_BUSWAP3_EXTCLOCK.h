/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSWAP3_EXTCLOCK : uint8_t
{
    value1 /*!< Equal to INT_CLK frequency. */,
    value2 = 1 /*!< 1/2 of INT_CLK frequency. */,
    value3 = 2 /*!< 1/3 of INT_CLK frequency. */,
    value4 = 3 /*!< 1/4 of INT_CLK frequency (default after reset). */
};
static_assert(sizeof(EBU_BUSWAP3_EXTCLOCK) == 1);

static constexpr uint16_t EBU_BUSWAP3_EXTCLOCK_id = 550;

/**
 * Converts EBU_BUSWAP3_EXTCLOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWAP3_EXTCLOCK instance)
{
    const char *result = "UNKNOWN EBU_BUSWAP3_EXTCLOCK";

    switch (instance)
    {
    case EBU_BUSWAP3_EXTCLOCK::value1:
        result = "value1";
        break;
    case EBU_BUSWAP3_EXTCLOCK::value2:
        result = "value2";
        break;
    case EBU_BUSWAP3_EXTCLOCK::value3:
        result = "value3";
        break;
    case EBU_BUSWAP3_EXTCLOCK::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWAP3_EXTCLOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWAP3_EXTCLOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWAP3_EXTCLOCK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWAP3_EXTCLOCK::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSWAP3_EXTCLOCK::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSWAP3_EXTCLOCK::value4;
    }

    return result;
}

}; // namespace XMC4700
