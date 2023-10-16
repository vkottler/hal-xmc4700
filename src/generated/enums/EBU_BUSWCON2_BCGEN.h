/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSWCON2_BCGEN : uint8_t
{
    value1 /*!< Byte control signals follow chip select timing. */,
    value2 = 1 /*!< Byte control signals follow control signal timing (RD, RD/WR) (default after reset). */,
    value3 = 2 /*!< Byte control signals follow write enable signal timing (RD/WR only). */
};
static_assert(sizeof(EBU_BUSWCON2_BCGEN) == 1);

/**
 * Converts EBU_BUSWCON2_BCGEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWCON2_BCGEN instance)
{
    const char *result = "UNKNOWN EBU_BUSWCON2_BCGEN";

    switch (instance)
    {
    case EBU_BUSWCON2_BCGEN::value1:
        result = "value1";
        break;
    case EBU_BUSWCON2_BCGEN::value2:
        result = "value2";
        break;
    case EBU_BUSWCON2_BCGEN::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWCON2_BCGEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWCON2_BCGEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWCON2_BCGEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWCON2_BCGEN::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSWCON2_BCGEN::value3;
    }

    return result;
}

}; // namespace XMC4700
