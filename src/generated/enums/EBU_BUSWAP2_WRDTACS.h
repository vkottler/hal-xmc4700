/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No Recovery Phase clock cycles available.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "1 clock cycle selected.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "14 clock cycles selected.",
 *       "value": 14
 *     },
 *     "value4": {
 *       "description": "15 clock cycles selected.",
 *       "value": 15
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

enum class EBU_BUSWAP2_WRDTACS : uint8_t
{
    value1 /*!< No Recovery Phase clock cycles available. */,
    value2 = 1 /*!< 1 clock cycle selected. */,
    value3 = 14 /*!< 14 clock cycles selected. */,
    value4 = 15 /*!< 15 clock cycles selected. */
};
static_assert(sizeof(EBU_BUSWAP2_WRDTACS) == 1);

static constexpr uint16_t EBU_BUSWAP2_WRDTACS_id = 506;

/**
 * Converts EBU_BUSWAP2_WRDTACS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWAP2_WRDTACS instance)
{
    const char *result = "UNKNOWN EBU_BUSWAP2_WRDTACS";

    switch (instance)
    {
    case EBU_BUSWAP2_WRDTACS::value1:
        result = "value1";
        break;
    case EBU_BUSWAP2_WRDTACS::value2:
        result = "value2";
        break;
    case EBU_BUSWAP2_WRDTACS::value3:
        result = "value3";
        break;
    case EBU_BUSWAP2_WRDTACS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWAP2_WRDTACS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWAP2_WRDTACS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWAP2_WRDTACS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWAP2_WRDTACS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSWAP2_WRDTACS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSWAP2_WRDTACS::value4;
    }

    return result;
}

}; // namespace XMC4700