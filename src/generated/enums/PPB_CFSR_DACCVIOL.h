/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "no data access violation fault",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "the processor attempted a load or store at a location that does not permit the operation.",
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

enum class PPB_CFSR_DACCVIOL : uint8_t
{
    value1 /*!< no data access violation fault */,
    value2 = 1 /*!< the processor attempted a load or store at a location that does not permit the operation. */
};
static_assert(sizeof(PPB_CFSR_DACCVIOL) == 1);

static constexpr uint16_t PPB_CFSR_DACCVIOL_id = 2591;

/**
 * Converts PPB_CFSR_DACCVIOL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_DACCVIOL instance)
{
    const char *result = "UNKNOWN PPB_CFSR_DACCVIOL";

    switch (instance)
    {
    case PPB_CFSR_DACCVIOL::value1:
        result = "value1";
        break;
    case PPB_CFSR_DACCVIOL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_DACCVIOL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_DACCVIOL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_DACCVIOL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_DACCVIOL::value2;
    }

    return result;
}

}; // namespace XMC4700
