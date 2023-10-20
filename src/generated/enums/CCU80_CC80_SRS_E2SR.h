/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_SRS_E2SR : uint8_t
{
    _8ysr0 /*!< Forward to CC8ySR0 */,
    vysr1 = 1 /*!< Forward to CCvySR1 */,
    _8ysr2 = 2 /*!< Forward to CC8ySR2 */,
    _8ysr3 = 3 /*!< Forward to CC8ySR3 */
};
static_assert(sizeof(CCU80_CC80_SRS_E2SR) == 1);

/**
 * Converts CCU80_CC80_SRS_E2SR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_SRS_E2SR instance)
{
    const char *result = "UNKNOWN CCU80_CC80_SRS_E2SR";

    switch (instance)
    {
    case CCU80_CC80_SRS_E2SR::_8ysr0:
        result = "_8ysr0";
        break;
    case CCU80_CC80_SRS_E2SR::vysr1:
        result = "vysr1";
        break;
    case CCU80_CC80_SRS_E2SR::_8ysr2:
        result = "_8ysr2";
        break;
    case CCU80_CC80_SRS_E2SR::_8ysr3:
        result = "_8ysr3";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_SRS_E2SR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_SRS_E2SR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_8ysr0", 6)))
    {
        output = CCU80_CC80_SRS_E2SR::_8ysr0;
    }
    else if ((result = !strncmp(data, "vysr1", 5)))
    {
        output = CCU80_CC80_SRS_E2SR::vysr1;
    }
    else if ((result = !strncmp(data, "_8ysr2", 6)))
    {
        output = CCU80_CC80_SRS_E2SR::_8ysr2;
    }
    else if ((result = !strncmp(data, "_8ysr3", 6)))
    {
        output = CCU80_CC80_SRS_E2SR::_8ysr3;
    }

    return result;
}

}; // namespace XMC4700
