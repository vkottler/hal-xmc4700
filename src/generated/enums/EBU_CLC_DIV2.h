/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_CLC_DIV2 : uint8_t
{
    value1 /*!< standard clocking mode. clock input selected by SYNC bitfield
              (default after reset). */
        ,
    value2 = 1 /*!< request EBU to run off AHB bus clock divided by 2. */
};
static_assert(sizeof(EBU_CLC_DIV2) == 1);

static constexpr uint16_t EBU_CLC_DIV2_id = 271;

/**
 * Converts EBU_CLC_DIV2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_DIV2 instance)
{
    const char *result = "UNKNOWN EBU_CLC_DIV2";

    switch (instance)
    {
    case EBU_CLC_DIV2::value1:
        result = "value1";
        break;
    case EBU_CLC_DIV2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_DIV2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_DIV2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_CLC_DIV2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_CLC_DIV2::value2;
    }

    return result;
}

}; // namespace XMC4700
