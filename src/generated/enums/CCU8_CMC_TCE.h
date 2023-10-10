/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_CMC_TCE : uint8_t
{
    value1 /*!< Timer concatenation is disabled */,
    value2 = 1 /*!< Timer concatenation is enabled */
};
static_assert(sizeof(CCU8_CMC_TCE) == 1);

static constexpr uint16_t CCU8_CMC_TCE_id = 116;

/**
 * Converts CCU8_CMC_TCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_CMC_TCE instance)
{
    const char *result = "UNKNOWN CCU8_CMC_TCE";

    switch (instance)
    {
    case CCU8_CMC_TCE::value1:
        result = "value1";
        break;
    case CCU8_CMC_TCE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_CMC_TCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_CMC_TCE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_CMC_TCE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_CMC_TCE::value2;
    }

    return result;
}

}; // namespace XMC4700
