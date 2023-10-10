/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_TC_CMOD : uint8_t
{
    value1 /*!< Compare Mode */,
    value2 = 1 /*!< Capture Mode */
};
static_assert(sizeof(CCU8_TC_CMOD) == 1);

static constexpr uint16_t CCU8_TC_CMOD_id = 149;

/**
 * Converts CCU8_TC_CMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_TC_CMOD instance)
{
    const char *result = "UNKNOWN CCU8_TC_CMOD";

    switch (instance)
    {
    case CCU8_TC_CMOD::value1:
        result = "value1";
        break;
    case CCU8_TC_CMOD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_TC_CMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_TC_CMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_TC_CMOD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_TC_CMOD::value2;
    }

    return result;
}

}; // namespace XMC4700
