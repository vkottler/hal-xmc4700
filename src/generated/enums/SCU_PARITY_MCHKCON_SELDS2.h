/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Not selected",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Selected",
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

enum class SCU_PARITY_MCHKCON_SELDS2 : uint8_t
{
    value1 /*!< Not selected */,
    value2 = 1 /*!< Selected */
};
static_assert(sizeof(SCU_PARITY_MCHKCON_SELDS2) == 1);

static constexpr uint16_t SCU_PARITY_MCHKCON_SELDS2_id = 2419;

/**
 * Converts SCU_PARITY_MCHKCON_SELDS2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_MCHKCON_SELDS2 instance)
{
    const char *result = "UNKNOWN SCU_PARITY_MCHKCON_SELDS2";

    switch (instance)
    {
    case SCU_PARITY_MCHKCON_SELDS2::value1:
        result = "value1";
        break;
    case SCU_PARITY_MCHKCON_SELDS2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_MCHKCON_SELDS2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_MCHKCON_SELDS2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PARITY_MCHKCON_SELDS2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PARITY_MCHKCON_SELDS2::value2;
    }

    return result;
}

}; // namespace XMC4700
