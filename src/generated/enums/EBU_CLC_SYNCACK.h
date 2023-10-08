/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "the EBU is asynchronous to the AHB bus clock and is using a separate clock source",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "EBU is synchronous to the AHB bus clock (default after reset)",
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

enum class EBU_CLC_SYNCACK : uint8_t
{
    value1 /*!< the EBU is asynchronous to the AHB bus clock and is using a separate clock source */,
    value2 = 1 /*!< EBU is synchronous to the AHB bus clock (default after reset) */
};
static_assert(sizeof(EBU_CLC_SYNCACK) == 1);

static constexpr uint16_t EBU_CLC_SYNCACK_id = 373;

/**
 * Converts EBU_CLC_SYNCACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_SYNCACK instance)
{
    const char *result = "UNKNOWN EBU_CLC_SYNCACK";

    switch (instance)
    {
    case EBU_CLC_SYNCACK::value1:
        result = "value1";
        break;
    case EBU_CLC_SYNCACK::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_SYNCACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_SYNCACK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_CLC_SYNCACK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_CLC_SYNCACK::value2;
    }

    return result;
}

}; // namespace XMC4700