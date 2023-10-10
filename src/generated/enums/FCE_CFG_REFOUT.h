/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FCE_CFG_REFOUT : uint8_t
{
    value1 /*!< CRC 32-bit wise is disabled */,
    value2 = 1 /*!< CRC 32-bit wise is enabled */
};
static_assert(sizeof(FCE_CFG_REFOUT) == 1);

static constexpr uint16_t FCE_CFG_REFOUT_id = 478;

/**
 * Converts FCE_CFG_REFOUT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FCE_CFG_REFOUT instance)
{
    const char *result = "UNKNOWN FCE_CFG_REFOUT";

    switch (instance)
    {
    case FCE_CFG_REFOUT::value1:
        result = "value1";
        break;
    case FCE_CFG_REFOUT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FCE_CFG_REFOUT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FCE_CFG_REFOUT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FCE_CFG_REFOUT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FCE_CFG_REFOUT::value2;
    }

    return result;
}

}; // namespace XMC4700
