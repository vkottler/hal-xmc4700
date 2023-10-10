/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_STC_STM : uint8_t
{
    value1 /*!< Shadow transfer is done in Period Match and One match. */,
    value2 = 1 /*!< Shadow transfer is done only in Period Match. */,
    value3 = 2 /*!< Shadow transfer is done only in One Match. */
};
static_assert(sizeof(CCU8_STC_STM) == 1);

static constexpr uint16_t CCU8_STC_STM_id = 196;

/**
 * Converts CCU8_STC_STM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_STC_STM instance)
{
    const char *result = "UNKNOWN CCU8_STC_STM";

    switch (instance)
    {
    case CCU8_STC_STM::value1:
        result = "value1";
        break;
    case CCU8_STC_STM::value2:
        result = "value2";
        break;
    case CCU8_STC_STM::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_STC_STM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_STC_STM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_STC_STM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_STC_STM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU8_STC_STM::value3;
    }

    return result;
}

}; // namespace XMC4700