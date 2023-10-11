/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_TRPSW : uint8_t
{
    value1 /*!< The slice exits the TRAP state automatically when the TRAP condition is not present (Trap state cleared by HW and SW) */,
    value2 = 1 /*!< The TRAP state can only be exited by a SW request. */
};
static_assert(sizeof(CCU80_CC80_TC_TRPSW) == 1);

static constexpr uint16_t CCU80_CC80_TC_TRPSW_id = 218;

/**
 * Converts CCU80_CC80_TC_TRPSW to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_TRPSW instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_TRPSW";

    switch (instance)
    {
    case CCU80_CC80_TC_TRPSW::value1:
        result = "value1";
        break;
    case CCU80_CC80_TC_TRPSW::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_TRPSW.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_TRPSW &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_TC_TRPSW::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_TC_TRPSW::value2;
    }

    return result;
}

}; // namespace XMC4700
