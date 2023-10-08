/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Store results left-aligned",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Store results right-aligned",
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

enum class VADC_G0_CHCTR_RESPOS : uint8_t
{
    value1 /*!< Store results left-aligned */,
    value2 = 1 /*!< Store results right-aligned */
};
static_assert(sizeof(VADC_G0_CHCTR_RESPOS) == 1);

static constexpr uint16_t VADC_G0_CHCTR_RESPOS_id = 1108;

/**
 * Converts VADC_G0_CHCTR_RESPOS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHCTR_RESPOS instance)
{
    const char *result = "UNKNOWN VADC_G0_CHCTR_RESPOS";

    switch (instance)
    {
    case VADC_G0_CHCTR_RESPOS::value1:
        result = "value1";
        break;
    case VADC_G0_CHCTR_RESPOS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHCTR_RESPOS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHCTR_RESPOS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_CHCTR_RESPOS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_CHCTR_RESPOS::value2;
    }

    return result;
}

}; // namespace XMC4700
