/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON3_WAITINV : uint8_t
{
    value1 /*!< input at WAIT pin is active low (default after reset). */,
    value2 = 1 /*!< input at WAIT pin is active high. */
};
static_assert(sizeof(EBU_BUSRCON3_WAITINV) == 1);

/**
 * Converts EBU_BUSRCON3_WAITINV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON3_WAITINV instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON3_WAITINV";

    switch (instance)
    {
    case EBU_BUSRCON3_WAITINV::value1:
        result = "value1";
        break;
    case EBU_BUSRCON3_WAITINV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON3_WAITINV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON3_WAITINV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON3_WAITINV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON3_WAITINV::value2;
    }

    return result;
}

}; // namespace XMC4700
