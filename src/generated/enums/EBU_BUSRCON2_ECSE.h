/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON2_ECSE : uint8_t
{
    value1 /*!< CS is delayed. */,
    value2 = 1 /*!< CS is not delayed. */
};
static_assert(sizeof(EBU_BUSRCON2_ECSE) == 1);

static constexpr uint16_t EBU_BUSRCON2_ECSE_id = 488;

/**
 * Converts EBU_BUSRCON2_ECSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON2_ECSE instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON2_ECSE";

    switch (instance)
    {
    case EBU_BUSRCON2_ECSE::value1:
        result = "value1";
        break;
    case EBU_BUSRCON2_ECSE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON2_ECSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON2_ECSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON2_ECSE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON2_ECSE::value2;
    }

    return result;
}

}; // namespace XMC4700
