/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_MODCON_ARBSYNC : uint8_t
{
    value1 /*!< Arbitration inputs are synchronous */,
    value2 = 1 /*!< Arbitration inputs are asynchronous */
};
static_assert(sizeof(EBU_MODCON_ARBSYNC) == 1);

static constexpr uint16_t EBU_MODCON_ARBSYNC_id = 394;

/**
 * Converts EBU_MODCON_ARBSYNC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_MODCON_ARBSYNC instance)
{
    const char *result = "UNKNOWN EBU_MODCON_ARBSYNC";

    switch (instance)
    {
    case EBU_MODCON_ARBSYNC::value1:
        result = "value1";
        break;
    case EBU_MODCON_ARBSYNC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_MODCON_ARBSYNC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_MODCON_ARBSYNC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_MODCON_ARBSYNC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_MODCON_ARBSYNC::value2;
    }

    return result;
}

}; // namespace XMC4700
