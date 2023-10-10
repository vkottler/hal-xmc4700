/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_TC_TLS : uint8_t
{
    value1 /*!< Timer is loaded with the value of CR1 */,
    value2 = 1 /*!< Timer is loaded with the value of CR2 */
};
static_assert(sizeof(CCU8_TC_TLS) == 1);

static constexpr uint16_t CCU8_TC_TLS_id = 146;

/**
 * Converts CCU8_TC_TLS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_TC_TLS instance)
{
    const char *result = "UNKNOWN CCU8_TC_TLS";

    switch (instance)
    {
    case CCU8_TC_TLS::value1:
        result = "value1";
        break;
    case CCU8_TC_TLS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_TC_TLS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_TC_TLS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_TC_TLS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_TC_TLS::value2;
    }

    return result;
}

}; // namespace XMC4700