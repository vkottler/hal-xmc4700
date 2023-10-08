/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Power-up initialization sequence is not running",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Power-up initialization sequence is running",
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

enum class EBU_SDRSTAT_SDRMBUSY : uint8_t
{
    value1 /*!< Power-up initialization sequence is not running */,
    value2 = 1 /*!< Power-up initialization sequence is running */
};
static_assert(sizeof(EBU_SDRSTAT_SDRMBUSY) == 1);

static constexpr uint16_t EBU_SDRSTAT_SDRMBUSY_id = 554;

/**
 * Converts EBU_SDRSTAT_SDRMBUSY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRSTAT_SDRMBUSY instance)
{
    const char *result = "UNKNOWN EBU_SDRSTAT_SDRMBUSY";

    switch (instance)
    {
    case EBU_SDRSTAT_SDRMBUSY::value1:
        result = "value1";
        break;
    case EBU_SDRSTAT_SDRMBUSY::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRSTAT_SDRMBUSY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRSTAT_SDRMBUSY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRSTAT_SDRMBUSY::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_SDRSTAT_SDRMBUSY::value2;
    }

    return result;
}

}; // namespace XMC4700
