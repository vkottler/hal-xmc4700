/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Data reduction disabled",
 *       "value": 0
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

enum class VADC_GLOBRCR_DRCTR : uint8_t
{
    value1 /*!< Data reduction disabled */
};
static_assert(sizeof(VADC_GLOBRCR_DRCTR) == 1);

static constexpr uint16_t VADC_GLOBRCR_DRCTR_id = 803;

/**
 * Converts VADC_GLOBRCR_DRCTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBRCR_DRCTR instance)
{
    const char *result = "UNKNOWN VADC_GLOBRCR_DRCTR";

    switch (instance)
    {
    case VADC_GLOBRCR_DRCTR::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBRCR_DRCTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBRCR_DRCTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBRCR_DRCTR::value1;
    }

    return result;
}

}; // namespace XMC4700