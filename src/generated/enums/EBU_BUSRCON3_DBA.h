/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON3_DBA : uint8_t
{
    value1 /*!< Memory Controller automatically re-aligns any non-aligned synchronous burst access so that data can be fetched from the device in a single burst transaction. */,
    value2 = 1 /*!< Memory Controller always starts any burst access to a synchronous burst device at the address specified by the AHB request. Any required address wrapping must be automatically provided by the Burst FLASH device. */
};
static_assert(sizeof(EBU_BUSRCON3_DBA) == 1);

/**
 * Converts EBU_BUSRCON3_DBA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON3_DBA instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON3_DBA";

    switch (instance)
    {
    case EBU_BUSRCON3_DBA::value1:
        result = "value1";
        break;
    case EBU_BUSRCON3_DBA::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON3_DBA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON3_DBA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON3_DBA::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON3_DBA::value2;
    }

    return result;
}

}; // namespace XMC4700
