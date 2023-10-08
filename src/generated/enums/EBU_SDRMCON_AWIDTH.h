/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "do not use",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Address(8:0)",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Address(9:0)",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Address(10:0)",
 *       "value": 3
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

enum class EBU_SDRMCON_AWIDTH : uint8_t
{
    value1 /*!< do not use */,
    value2 = 1 /*!< Address(8:0) */,
    value3 = 2 /*!< Address(9:0) */,
    value4 = 3 /*!< Address(10:0) */
};
static_assert(sizeof(EBU_SDRMCON_AWIDTH) == 1);

static constexpr uint16_t EBU_SDRMCON_AWIDTH_id = 543;

/**
 * Converts EBU_SDRMCON_AWIDTH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMCON_AWIDTH instance)
{
    const char *result = "UNKNOWN EBU_SDRMCON_AWIDTH";

    switch (instance)
    {
    case EBU_SDRMCON_AWIDTH::value1:
        result = "value1";
        break;
    case EBU_SDRMCON_AWIDTH::value2:
        result = "value2";
        break;
    case EBU_SDRMCON_AWIDTH::value3:
        result = "value3";
        break;
    case EBU_SDRMCON_AWIDTH::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMCON_AWIDTH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMCON_AWIDTH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRMCON_AWIDTH::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_SDRMCON_AWIDTH::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_SDRMCON_AWIDTH::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_SDRMCON_AWIDTH::value4;
    }

    return result;
}

}; // namespace XMC4700