/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_STC_CSE : uint8_t
{
    value1 /*!< Cascaded shadow transfer disabled */,
    value2 = 1 /*!< Cascaded shadow transfer enabled */
};
static_assert(sizeof(CCU80_CC80_STC_CSE) == 1);

static constexpr uint16_t CCU80_CC80_STC_CSE_id = 279;

/**
 * Converts CCU80_CC80_STC_CSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_STC_CSE instance)
{
    const char *result = "UNKNOWN CCU80_CC80_STC_CSE";

    switch (instance)
    {
    case CCU80_CC80_STC_CSE::value1:
        result = "value1";
        break;
    case CCU80_CC80_STC_CSE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_STC_CSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_STC_CSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_STC_CSE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_STC_CSE::value2;
    }

    return result;
}

}; // namespace XMC4700
