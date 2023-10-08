/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "no effect",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "clear status",
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

enum class GPDMA0_CLEARDSTTRAN_CH3 : uint8_t
{
    value1 /*!< no effect */,
    value2 = 1 /*!< clear status */
};
static_assert(sizeof(GPDMA0_CLEARDSTTRAN_CH3) == 1);

static constexpr uint16_t GPDMA0_CLEARDSTTRAN_CH3_id = 2268;

/**
 * Converts GPDMA0_CLEARDSTTRAN_CH3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CLEARDSTTRAN_CH3 instance)
{
    const char *result = "UNKNOWN GPDMA0_CLEARDSTTRAN_CH3";

    switch (instance)
    {
    case GPDMA0_CLEARDSTTRAN_CH3::value1:
        result = "value1";
        break;
    case GPDMA0_CLEARDSTTRAN_CH3::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CLEARDSTTRAN_CH3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CLEARDSTTRAN_CH3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CLEARDSTTRAN_CH3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CLEARDSTTRAN_CH3::value2;
    }

    return result;
}

}; // namespace XMC4700
