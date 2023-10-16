/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_INS_EV0LM : uint8_t
{
    value1 /*!< Active on HIGH level */,
    value2 = 1 /*!< Active on LOW level */
};
static_assert(sizeof(CCU80_CC80_INS_EV0LM) == 1);

/**
 * Converts CCU80_CC80_INS_EV0LM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_INS_EV0LM instance)
{
    const char *result = "UNKNOWN CCU80_CC80_INS_EV0LM";

    switch (instance)
    {
    case CCU80_CC80_INS_EV0LM::value1:
        result = "value1";
        break;
    case CCU80_CC80_INS_EV0LM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_INS_EV0LM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_INS_EV0LM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_INS_EV0LM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_INS_EV0LM::value2;
    }

    return result;
}

}; // namespace XMC4700
