/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_MODCON_ARBMODE : uint8_t
{
    value1 /*!< No Bus arbitration mode selected */,
    value2 = 1 /*!< Arbiter Mode arbitration mode selected */,
    value3 = 2 /*!< Participant arbitration mode selected */,
    value4 = 3 /*!< Sole Master arbitration mode selected */
};
static_assert(sizeof(EBU_MODCON_ARBMODE) == 1);

/**
 * Converts EBU_MODCON_ARBMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_MODCON_ARBMODE instance)
{
    const char *result = "UNKNOWN EBU_MODCON_ARBMODE";

    switch (instance)
    {
    case EBU_MODCON_ARBMODE::value1:
        result = "value1";
        break;
    case EBU_MODCON_ARBMODE::value2:
        result = "value2";
        break;
    case EBU_MODCON_ARBMODE::value3:
        result = "value3";
        break;
    case EBU_MODCON_ARBMODE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_MODCON_ARBMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_MODCON_ARBMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_MODCON_ARBMODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_MODCON_ARBMODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_MODCON_ARBMODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_MODCON_ARBMODE::value4;
    }

    return result;
}

}; // namespace XMC4700
