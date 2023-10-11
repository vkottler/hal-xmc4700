/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FCE_KE0_CFG_CMI : uint8_t
{
    value1 /*!< CRC Mismatch Interrupt is disabled */,
    value2 = 1 /*!< CRC Mismatch Interrupt is enabled */
};
static_assert(sizeof(FCE_KE0_CFG_CMI) == 1);

static constexpr uint16_t FCE_KE0_CFG_CMI_id = 613;

/**
 * Converts FCE_KE0_CFG_CMI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FCE_KE0_CFG_CMI instance)
{
    const char *result = "UNKNOWN FCE_KE0_CFG_CMI";

    switch (instance)
    {
    case FCE_KE0_CFG_CMI::value1:
        result = "value1";
        break;
    case FCE_KE0_CFG_CMI::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FCE_KE0_CFG_CMI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FCE_KE0_CFG_CMI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FCE_KE0_CFG_CMI::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FCE_KE0_CFG_CMI::value2;
    }

    return result;
}

}; // namespace XMC4700
