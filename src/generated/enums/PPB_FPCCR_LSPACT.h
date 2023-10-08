/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Lazy state preservation is not active.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Lazy state preservation is active. floating-point stack frame has been allocated but saving state to it has been deferred.",
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

enum class PPB_FPCCR_LSPACT : uint8_t
{
    value1 /*!< Lazy state preservation is not active. */,
    value2 = 1 /*!< Lazy state preservation is active. floating-point stack frame has been allocated but saving state to it has been deferred. */
};
static_assert(sizeof(PPB_FPCCR_LSPACT) == 1);

static constexpr uint16_t PPB_FPCCR_LSPACT_id = 2620;

/**
 * Converts PPB_FPCCR_LSPACT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_FPCCR_LSPACT instance)
{
    const char *result = "UNKNOWN PPB_FPCCR_LSPACT";

    switch (instance)
    {
    case PPB_FPCCR_LSPACT::value1:
        result = "value1";
        break;
    case PPB_FPCCR_LSPACT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_FPCCR_LSPACT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_FPCCR_LSPACT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_FPCCR_LSPACT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_FPCCR_LSPACT::value2;
    }

    return result;
}

}; // namespace XMC4700