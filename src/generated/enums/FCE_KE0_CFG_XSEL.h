/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FCE_KE0_CFG_XSEL : uint8_t
{
    _00000000 /*!< 0x00000000 */,
    ffffffff = 1 /*!< 0xFFFFFFFF */
};
static_assert(sizeof(FCE_KE0_CFG_XSEL) == 1);

/**
 * Converts FCE_KE0_CFG_XSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FCE_KE0_CFG_XSEL instance)
{
    const char *result = "UNKNOWN FCE_KE0_CFG_XSEL";

    switch (instance)
    {
    case FCE_KE0_CFG_XSEL::_00000000:
        result = "_00000000";
        break;
    case FCE_KE0_CFG_XSEL::ffffffff:
        result = "ffffffff";
        break;
    }

    return result;
}

/**
 * Converts a C string to FCE_KE0_CFG_XSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FCE_KE0_CFG_XSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_00000000", 9)))
    {
        output = FCE_KE0_CFG_XSEL::_00000000;
    }
    else if ((result = !strncmp(data, "ffffffff", 8)))
    {
        output = FCE_KE0_CFG_XSEL::ffffffff;
    }

    return result;
}

}; // namespace XMC4700
