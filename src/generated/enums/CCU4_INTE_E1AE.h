/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU4_INTE_E1AE : uint8_t
{
    value1 /*!< Event 1 detection interrupt is disabled */,
    value2 = 1 /*!< Event 1 detection interrupt is enabled */
};
static_assert(sizeof(CCU4_INTE_E1AE) == 1);

static constexpr uint16_t CCU4_INTE_E1AE_id = 85;

/**
 * Converts CCU4_INTE_E1AE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU4_INTE_E1AE instance)
{
    const char *result = "UNKNOWN CCU4_INTE_E1AE";

    switch (instance)
    {
    case CCU4_INTE_E1AE::value1:
        result = "value1";
        break;
    case CCU4_INTE_E1AE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU4_INTE_E1AE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU4_INTE_E1AE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU4_INTE_E1AE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU4_INTE_E1AE::value2;
    }

    return result;
}

}; // namespace XMC4700
