/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON0_AAP : uint8_t
{
    value1 /*!< Clock is enabled at beginning of access. */,
    value2 = 1 /*!< Clock is enabled at after address phase. */
};
static_assert(sizeof(EBU_BUSRCON0_AAP) == 1);

static constexpr uint16_t EBU_BUSRCON0_AAP_id = 399;

/**
 * Converts EBU_BUSRCON0_AAP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON0_AAP instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON0_AAP";

    switch (instance)
    {
    case EBU_BUSRCON0_AAP::value1:
        result = "value1";
        break;
    case EBU_BUSRCON0_AAP::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON0_AAP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON0_AAP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON0_AAP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON0_AAP::value2;
    }

    return result;
}

}; // namespace XMC4700
