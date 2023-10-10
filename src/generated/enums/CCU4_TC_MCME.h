/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU4_TC_MCME : uint8_t
{
    value1 /*!< Multi Channel Mode is disabled */,
    value2 = 1 /*!< Multi Channel Mode is enabled */
};
static_assert(sizeof(CCU4_TC_MCME) == 1);

static constexpr uint16_t CCU4_TC_MCME_id = 54;

/**
 * Converts CCU4_TC_MCME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU4_TC_MCME instance)
{
    const char *result = "UNKNOWN CCU4_TC_MCME";

    switch (instance)
    {
    case CCU4_TC_MCME::value1:
        result = "value1";
        break;
    case CCU4_TC_MCME::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU4_TC_MCME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU4_TC_MCME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU4_TC_MCME::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU4_TC_MCME::value2;
    }

    return result;
}

}; // namespace XMC4700
