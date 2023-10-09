/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_INTS_CMD2S : uint8_t
{
    value1 /*!< Compare match while counting down not detected */,
    value2 = 1 /*!< Compare match while counting down detected */
};
static_assert(sizeof(CCU80_CC80_INTS_CMD2S) == 1);

static constexpr uint16_t CCU80_CC80_INTS_CMD2S_id = 1890;

/**
 * Converts CCU80_CC80_INTS_CMD2S to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_INTS_CMD2S instance)
{
    const char *result = "UNKNOWN CCU80_CC80_INTS_CMD2S";

    switch (instance)
    {
    case CCU80_CC80_INTS_CMD2S::value1:
        result = "value1";
        break;
    case CCU80_CC80_INTS_CMD2S::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_INTS_CMD2S.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_INTS_CMD2S &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_INTS_CMD2S::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_INTS_CMD2S::value2;
    }

    return result;
}

}; // namespace XMC4700
