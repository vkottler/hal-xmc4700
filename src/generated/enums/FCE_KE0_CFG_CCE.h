/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FCE_KE0_CFG_CCE : uint8_t
{
    value1 /*!< CRC check comparison at the end of a message is disabled */,
    value2 = 1 /*!< CRC check comparison at the end of a message is enabled */
};
static_assert(sizeof(FCE_KE0_CFG_CCE) == 1);

static constexpr uint16_t FCE_KE0_CFG_CCE_id = 2013;

/**
 * Converts FCE_KE0_CFG_CCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FCE_KE0_CFG_CCE instance)
{
    const char *result = "UNKNOWN FCE_KE0_CFG_CCE";

    switch (instance)
    {
    case FCE_KE0_CFG_CCE::value1:
        result = "value1";
        break;
    case FCE_KE0_CFG_CCE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FCE_KE0_CFG_CCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FCE_KE0_CFG_CCE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FCE_KE0_CFG_CCE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FCE_KE0_CFG_CCE::value2;
    }

    return result;
}

}; // namespace XMC4700
