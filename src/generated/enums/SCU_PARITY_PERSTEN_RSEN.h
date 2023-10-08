/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Reset request disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Reset request enabled",
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

enum class SCU_PARITY_PERSTEN_RSEN : uint8_t
{
    value1 /*!< Reset request disabled */,
    value2 = 1 /*!< Reset request enabled */
};
static_assert(sizeof(SCU_PARITY_PERSTEN_RSEN) == 1);

static constexpr uint16_t SCU_PARITY_PERSTEN_RSEN_id = 2435;

/**
 * Converts SCU_PARITY_PERSTEN_RSEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_PERSTEN_RSEN instance)
{
    const char *result = "UNKNOWN SCU_PARITY_PERSTEN_RSEN";

    switch (instance)
    {
    case SCU_PARITY_PERSTEN_RSEN::value1:
        result = "value1";
        break;
    case SCU_PARITY_PERSTEN_RSEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_PERSTEN_RSEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_PERSTEN_RSEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PARITY_PERSTEN_RSEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PARITY_PERSTEN_RSEN::value2;
    }

    return result;
}

}; // namespace XMC4700
