/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Debug Monitor is disabled or priority did not permit setting MON_PEND when the floating-point stack frame was allocated.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Debug Monitor is enabled and priority permits setting MON_PEND when the floating-point stack frame was allocated.",
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

enum class PPB_FPCCR_MONRDY : uint8_t
{
    value1 /*!< Debug Monitor is disabled or priority did not permit setting MON_PEND when the floating-point stack frame was allocated. */,
    value2 = 1 /*!< Debug Monitor is enabled and priority permits setting MON_PEND when the floating-point stack frame was allocated. */
};
static_assert(sizeof(PPB_FPCCR_MONRDY) == 1);

static constexpr uint16_t PPB_FPCCR_MONRDY_id = 2614;

/**
 * Converts PPB_FPCCR_MONRDY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_FPCCR_MONRDY instance)
{
    const char *result = "UNKNOWN PPB_FPCCR_MONRDY";

    switch (instance)
    {
    case PPB_FPCCR_MONRDY::value1:
        result = "value1";
        break;
    case PPB_FPCCR_MONRDY::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_FPCCR_MONRDY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_FPCCR_MONRDY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_FPCCR_MONRDY::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_FPCCR_MONRDY::value2;
    }

    return result;
}

}; // namespace XMC4700