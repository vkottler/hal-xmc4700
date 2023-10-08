/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Memory region is disabled (default after reset).",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Memory region is enabled.",
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

enum class EBU_ADDRSEL2_REGENAB : uint8_t
{
    value1 /*!< Memory region is disabled (default after reset). */,
    value2 = 1 /*!< Memory region is enabled. */
};
static_assert(sizeof(EBU_ADDRSEL2_REGENAB) == 1);

static constexpr uint16_t EBU_ADDRSEL2_REGENAB_id = 395;

/**
 * Converts EBU_ADDRSEL2_REGENAB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_ADDRSEL2_REGENAB instance)
{
    const char *result = "UNKNOWN EBU_ADDRSEL2_REGENAB";

    switch (instance)
    {
    case EBU_ADDRSEL2_REGENAB::value1:
        result = "value1";
        break;
    case EBU_ADDRSEL2_REGENAB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_ADDRSEL2_REGENAB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_ADDRSEL2_REGENAB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_ADDRSEL2_REGENAB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_ADDRSEL2_REGENAB::value2;
    }

    return result;
}

}; // namespace XMC4700
