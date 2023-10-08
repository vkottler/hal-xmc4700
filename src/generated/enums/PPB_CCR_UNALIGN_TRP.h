/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "do not trap unaligned halfword and word accesses",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "trap unaligned halfword and word accesses.",
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

enum class PPB_CCR_UNALIGN_TRP : uint8_t
{
    value1 /*!< do not trap unaligned halfword and word accesses */,
    value2 = 1 /*!< trap unaligned halfword and word accesses. */
};
static_assert(sizeof(PPB_CCR_UNALIGN_TRP) == 1);

static constexpr uint16_t PPB_CCR_UNALIGN_TRP_id = 2571;

/**
 * Converts PPB_CCR_UNALIGN_TRP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CCR_UNALIGN_TRP instance)
{
    const char *result = "UNKNOWN PPB_CCR_UNALIGN_TRP";

    switch (instance)
    {
    case PPB_CCR_UNALIGN_TRP::value1:
        result = "value1";
        break;
    case PPB_CCR_UNALIGN_TRP::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CCR_UNALIGN_TRP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CCR_UNALIGN_TRP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CCR_UNALIGN_TRP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CCR_UNALIGN_TRP::value2;
    }

    return result;
}

}; // namespace XMC4700