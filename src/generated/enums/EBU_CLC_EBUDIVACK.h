/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "EBU is running off input clock (default after reset)",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "EBU is running off input clock divided by 2",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "EBU is running off input clock divided by 3",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "EBU is running off input clock divided by 4",
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

enum class EBU_CLC_EBUDIVACK : uint8_t
{
    value1 /*!< EBU is running off input clock (default after reset) */,
    value2 = 1 /*!< EBU is running off input clock divided by 2 */,
    value3 = 2 /*!< EBU is running off input clock divided by 3 */,
    value4 = 3 /*!< EBU is running off input clock divided by 4 */
};
static_assert(sizeof(EBU_CLC_EBUDIVACK) == 1);

static constexpr uint16_t EBU_CLC_EBUDIVACK_id = 371;

/**
 * Converts EBU_CLC_EBUDIVACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_EBUDIVACK instance)
{
    const char *result = "UNKNOWN EBU_CLC_EBUDIVACK";

    switch (instance)
    {
    case EBU_CLC_EBUDIVACK::value1:
        result = "value1";
        break;
    case EBU_CLC_EBUDIVACK::value2:
        result = "value2";
        break;
    case EBU_CLC_EBUDIVACK::value3:
        result = "value3";
        break;
    case EBU_CLC_EBUDIVACK::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_EBUDIVACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_EBUDIVACK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_CLC_EBUDIVACK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_CLC_EBUDIVACK::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_CLC_EBUDIVACK::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_CLC_EBUDIVACK::value4;
    }

    return result;
}

}; // namespace XMC4700