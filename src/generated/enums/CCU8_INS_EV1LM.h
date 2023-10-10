/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_INS_EV1LM : uint8_t
{
    value1 /*!< Active on HIGH level */,
    value2 = 1 /*!< Active on LOW level */
};
static_assert(sizeof(CCU8_INS_EV1LM) == 1);

static constexpr uint16_t CCU8_INS_EV1LM_id = 108;

/**
 * Converts CCU8_INS_EV1LM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_INS_EV1LM instance)
{
    const char *result = "UNKNOWN CCU8_INS_EV1LM";

    switch (instance)
    {
    case CCU8_INS_EV1LM::value1:
        result = "value1";
        break;
    case CCU8_INS_EV1LM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_INS_EV1LM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_INS_EV1LM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_INS_EV1LM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_INS_EV1LM::value2;
    }

    return result;
}

}; // namespace XMC4700
