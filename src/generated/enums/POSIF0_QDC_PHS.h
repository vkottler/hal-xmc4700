/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Phase A is the leading signal for clockwise rotation",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Phase B is the leading signal for clockwise rotation",
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

enum class POSIF0_QDC_PHS : uint8_t
{
    value1 /*!< Phase A is the leading signal for clockwise rotation */,
    value2 = 1 /*!< Phase B is the leading signal for clockwise rotation */
};
static_assert(sizeof(POSIF0_QDC_PHS) == 1);

static constexpr uint16_t POSIF0_QDC_PHS_id = 1769;

/**
 * Converts POSIF0_QDC_PHS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_QDC_PHS instance)
{
    const char *result = "UNKNOWN POSIF0_QDC_PHS";

    switch (instance)
    {
    case POSIF0_QDC_PHS::value1:
        result = "value1";
        break;
    case POSIF0_QDC_PHS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_QDC_PHS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_QDC_PHS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_QDC_PHS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_QDC_PHS::value2;
    }

    return result;
}

}; // namespace XMC4700
