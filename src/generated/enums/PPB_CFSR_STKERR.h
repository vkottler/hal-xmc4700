/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "no stacking fault",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "stacking for an exception entry has caused one or more BusFaults.",
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

enum class PPB_CFSR_STKERR : uint8_t
{
    value1 /*!< no stacking fault */,
    value2 = 1 /*!< stacking for an exception entry has caused one or more BusFaults. */
};
static_assert(sizeof(PPB_CFSR_STKERR) == 1);

static constexpr uint16_t PPB_CFSR_STKERR_id = 2582;

/**
 * Converts PPB_CFSR_STKERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_STKERR instance)
{
    const char *result = "UNKNOWN PPB_CFSR_STKERR";

    switch (instance)
    {
    case PPB_CFSR_STKERR::value1:
        result = "value1";
        break;
    case PPB_CFSR_STKERR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_STKERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_STKERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_STKERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_STKERR::value2;
    }

    return result;
}

}; // namespace XMC4700