/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP2_EXTCLOCK : uint8_t
{
    value1 /*!< Equal to INT_CLK frequency. */,
    value2 = 1 /*!< 1/2 of INT_CLK frequency. */,
    value3 = 2 /*!< 1/3 of INT_CLK frequency. */,
    value4 = 3 /*!< 1/4 of INT_CLK frequency (default after reset). */
};
static_assert(sizeof(EBU_BUSRAP2_EXTCLOCK) == 1);

static constexpr uint16_t EBU_BUSRAP2_EXTCLOCK_id = 498;

/**
 * Converts EBU_BUSRAP2_EXTCLOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP2_EXTCLOCK instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP2_EXTCLOCK";

    switch (instance)
    {
    case EBU_BUSRAP2_EXTCLOCK::value1:
        result = "value1";
        break;
    case EBU_BUSRAP2_EXTCLOCK::value2:
        result = "value2";
        break;
    case EBU_BUSRAP2_EXTCLOCK::value3:
        result = "value3";
        break;
    case EBU_BUSRAP2_EXTCLOCK::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP2_EXTCLOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP2_EXTCLOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRAP2_EXTCLOCK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRAP2_EXTCLOCK::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRAP2_EXTCLOCK::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRAP2_EXTCLOCK::value4;
    }

    return result;
}

}; // namespace XMC4700
