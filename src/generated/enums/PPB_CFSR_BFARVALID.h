/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "value in BFAR is not a valid fault address",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "BFAR holds a valid fault address.",
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

enum class PPB_CFSR_BFARVALID : uint8_t
{
    value1 /*!< value in BFAR is not a valid fault address */,
    value2 = 1 /*!< BFAR holds a valid fault address. */
};
static_assert(sizeof(PPB_CFSR_BFARVALID) == 1);

static constexpr uint16_t PPB_CFSR_BFARVALID_id = 2580;

/**
 * Converts PPB_CFSR_BFARVALID to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_BFARVALID instance)
{
    const char *result = "UNKNOWN PPB_CFSR_BFARVALID";

    switch (instance)
    {
    case PPB_CFSR_BFARVALID::value1:
        result = "value1";
        break;
    case PPB_CFSR_BFARVALID::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_BFARVALID.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_BFARVALID &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_BFARVALID::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_BFARVALID::value2;
    }

    return result;
}

}; // namespace XMC4700
