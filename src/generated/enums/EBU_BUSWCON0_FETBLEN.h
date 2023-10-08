/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "1 data access (default after reset).",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "2 data accesses.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "4 data accesses.",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "8 data accesses.",
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

enum class EBU_BUSWCON0_FETBLEN : uint8_t
{
    value1 /*!< 1 data access (default after reset). */,
    value2 = 1 /*!< 2 data accesses. */,
    value3 = 2 /*!< 4 data accesses. */,
    value4 = 3 /*!< 8 data accesses. */
};
static_assert(sizeof(EBU_BUSWCON0_FETBLEN) == 1);

static constexpr uint16_t EBU_BUSWCON0_FETBLEN_id = 425;

/**
 * Converts EBU_BUSWCON0_FETBLEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWCON0_FETBLEN instance)
{
    const char *result = "UNKNOWN EBU_BUSWCON0_FETBLEN";

    switch (instance)
    {
    case EBU_BUSWCON0_FETBLEN::value1:
        result = "value1";
        break;
    case EBU_BUSWCON0_FETBLEN::value2:
        result = "value2";
        break;
    case EBU_BUSWCON0_FETBLEN::value3:
        result = "value3";
        break;
    case EBU_BUSWCON0_FETBLEN::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWCON0_FETBLEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWCON0_FETBLEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWCON0_FETBLEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWCON0_FETBLEN::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSWCON0_FETBLEN::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSWCON0_FETBLEN::value4;
    }

    return result;
}

}; // namespace XMC4700
