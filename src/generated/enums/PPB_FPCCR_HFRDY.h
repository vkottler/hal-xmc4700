/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Priority did not permit setting the HardFault handler to the pending state when the floating-point stack frame was allocated.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Priority permitted setting the HardFault handler to the pending state when the floating-point stack frame was allocated.",
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

enum class PPB_FPCCR_HFRDY : uint8_t
{
    value1 /*!< Priority did not permit setting the HardFault handler to the pending state when the floating-point stack frame was allocated. */,
    value2 = 1 /*!< Priority permitted setting the HardFault handler to the pending state when the floating-point stack frame was allocated. */
};
static_assert(sizeof(PPB_FPCCR_HFRDY) == 1);

static constexpr uint16_t PPB_FPCCR_HFRDY_id = 2617;

/**
 * Converts PPB_FPCCR_HFRDY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_FPCCR_HFRDY instance)
{
    const char *result = "UNKNOWN PPB_FPCCR_HFRDY";

    switch (instance)
    {
    case PPB_FPCCR_HFRDY::value1:
        result = "value1";
        break;
    case PPB_FPCCR_HFRDY::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_FPCCR_HFRDY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_FPCCR_HFRDY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_FPCCR_HFRDY::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_FPCCR_HFRDY::value2;
    }

    return result;
}

}; // namespace XMC4700
