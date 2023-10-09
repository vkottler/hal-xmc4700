/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GSTAT_S2I : uint8_t
{
    value1 /*!< Running */,
    value2 = 1 /*!< Idle */
};
static_assert(sizeof(CCU80_GSTAT_S2I) == 1);

static constexpr uint16_t CCU80_GSTAT_S2I_id = 1729;

/**
 * Converts CCU80_GSTAT_S2I to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GSTAT_S2I instance)
{
    const char *result = "UNKNOWN CCU80_GSTAT_S2I";

    switch (instance)
    {
    case CCU80_GSTAT_S2I::value1:
        result = "value1";
        break;
    case CCU80_GSTAT_S2I::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GSTAT_S2I.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GSTAT_S2I &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GSTAT_S2I::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GSTAT_S2I::value2;
    }

    return result;
}

}; // namespace XMC4700
