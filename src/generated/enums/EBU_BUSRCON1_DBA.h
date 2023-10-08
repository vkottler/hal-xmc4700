/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Memory Controller automatically re-aligns any non-aligned synchronous burst access so that data can be fetched from the device in a single burst transaction.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Memory Controller always starts any burst access to a synchronous burst device at the address specified by the AHB request. Any required address wrapping must be automatically provided by the Burst FLASH device.",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON1_DBA : uint8_t
{
    value1 /*!< Memory Controller automatically re-aligns any non-aligned synchronous burst access so that data can be fetched from the device in a single burst transaction. */,
    value2 = 1 /*!< Memory Controller always starts any burst access to a synchronous burst device at the address specified by the AHB request. Any required address wrapping must be automatically provided by the Burst FLASH device. */
};
static_assert(sizeof(EBU_BUSRCON1_DBA) == 1);

static constexpr uint16_t EBU_BUSRCON1_DBA_id = 438;

/**
 * Converts EBU_BUSRCON1_DBA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON1_DBA instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON1_DBA";

    switch (instance)
    {
    case EBU_BUSRCON1_DBA::value1:
        result = "value1";
        break;
    case EBU_BUSRCON1_DBA::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON1_DBA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON1_DBA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON1_DBA::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON1_DBA::value2;
    }

    return result;
}

}; // namespace XMC4700
