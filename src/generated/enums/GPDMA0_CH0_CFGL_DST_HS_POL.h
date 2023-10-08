/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Active high",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Active low",
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

enum class GPDMA0_CH0_CFGL_DST_HS_POL : uint8_t
{
    value1 /*!< Active high */,
    value2 = 1 /*!< Active low */
};
static_assert(sizeof(GPDMA0_CH0_CFGL_DST_HS_POL) == 1);

static constexpr uint16_t GPDMA0_CH0_CFGL_DST_HS_POL_id = 1809;

/**
 * Converts GPDMA0_CH0_CFGL_DST_HS_POL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CFGL_DST_HS_POL instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CFGL_DST_HS_POL";

    switch (instance)
    {
    case GPDMA0_CH0_CFGL_DST_HS_POL::value1:
        result = "value1";
        break;
    case GPDMA0_CH0_CFGL_DST_HS_POL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CFGL_DST_HS_POL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CFGL_DST_HS_POL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CH0_CFGL_DST_HS_POL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CH0_CFGL_DST_HS_POL::value2;
    }

    return result;
}

}; // namespace XMC4700
