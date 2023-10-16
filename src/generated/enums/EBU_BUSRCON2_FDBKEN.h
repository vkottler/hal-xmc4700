/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON2_FDBKEN : uint8_t
{
    value1 /*!< BFCLK feedback not used. */,
    value2 = 1 /*!< Incoming data and control signals (from the Burst FLASH device) are re-synchronized to the BFCLKI input. */
};
static_assert(sizeof(EBU_BUSRCON2_FDBKEN) == 1);

/**
 * Converts EBU_BUSRCON2_FDBKEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON2_FDBKEN instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON2_FDBKEN";

    switch (instance)
    {
    case EBU_BUSRCON2_FDBKEN::value1:
        result = "value1";
        break;
    case EBU_BUSRCON2_FDBKEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON2_FDBKEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON2_FDBKEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON2_FDBKEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON2_FDBKEN::value2;
    }

    return result;
}

}; // namespace XMC4700
