/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value3": {
 *       "description": "interrupt disabled",
 *       "value": 0
 *     },
 *     "value4": {
 *       "description": "interrupt enabled.",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint16_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_NVIC_ISER3_SETENA : uint16_t
{
    value3 /*!< interrupt disabled */,
    value4 = 1 /*!< interrupt enabled. */
};
static_assert(sizeof(PPB_NVIC_ISER3_SETENA) == 2);

static constexpr uint16_t PPB_NVIC_ISER3_SETENA_id = 2535;

/**
 * Converts PPB_NVIC_ISER3_SETENA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_NVIC_ISER3_SETENA instance)
{
    const char *result = "UNKNOWN PPB_NVIC_ISER3_SETENA";

    switch (instance)
    {
    case PPB_NVIC_ISER3_SETENA::value3:
        result = "value3";
        break;
    case PPB_NVIC_ISER3_SETENA::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_NVIC_ISER3_SETENA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_NVIC_ISER3_SETENA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value3", 6)))
    {
        output = PPB_NVIC_ISER3_SETENA::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = PPB_NVIC_ISER3_SETENA::value4;
    }

    return result;
}

}; // namespace XMC4700
