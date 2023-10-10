/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_USERCON_ADDIO : uint16_t
{
    value1 /*!< Address Bit is required for addressing memory */,
    value2 = 1 /*!< Address Bit is available for GPIO function */
};
static_assert(sizeof(EBU_USERCON_ADDIO) == 2);

static constexpr uint16_t EBU_USERCON_ADDIO_id = 282;

/**
 * Converts EBU_USERCON_ADDIO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_USERCON_ADDIO instance)
{
    const char *result = "UNKNOWN EBU_USERCON_ADDIO";

    switch (instance)
    {
    case EBU_USERCON_ADDIO::value1:
        result = "value1";
        break;
    case EBU_USERCON_ADDIO::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_USERCON_ADDIO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_USERCON_ADDIO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_USERCON_ADDIO::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_USERCON_ADDIO::value2;
    }

    return result;
}

}; // namespace XMC4700
