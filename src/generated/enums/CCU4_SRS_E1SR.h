/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU4_SRS_E1SR : uint8_t
{
    value1 /*!< Forward to CC4ySR0 */,
    value2 = 1 /*!< Forward to CC4ySR1 */,
    value3 = 2 /*!< Forward to CC4ySR2 */,
    value4 = 3 /*!< Forward to CC4ySR3 */
};
static_assert(sizeof(CCU4_SRS_E1SR) == 1);

static constexpr uint16_t CCU4_SRS_E1SR_id = 92;

/**
 * Converts CCU4_SRS_E1SR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU4_SRS_E1SR instance)
{
    const char *result = "UNKNOWN CCU4_SRS_E1SR";

    switch (instance)
    {
    case CCU4_SRS_E1SR::value1:
        result = "value1";
        break;
    case CCU4_SRS_E1SR::value2:
        result = "value2";
        break;
    case CCU4_SRS_E1SR::value3:
        result = "value3";
        break;
    case CCU4_SRS_E1SR::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU4_SRS_E1SR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU4_SRS_E1SR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU4_SRS_E1SR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU4_SRS_E1SR::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU4_SRS_E1SR::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU4_SRS_E1SR::value4;
    }

    return result;
}

}; // namespace XMC4700