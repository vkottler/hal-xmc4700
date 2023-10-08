/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The event detection is disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The event detection is enabled",
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

enum class ERU0_EXOCON_GEEN : uint8_t
{
    value1 /*!< The event detection is disabled */,
    value2 = 1 /*!< The event detection is enabled */
};
static_assert(sizeof(ERU0_EXOCON_GEEN) == 1);

static constexpr uint16_t ERU0_EXOCON_GEEN_id = 839;

/**
 * Converts ERU0_EXOCON_GEEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXOCON_GEEN instance)
{
    const char *result = "UNKNOWN ERU0_EXOCON_GEEN";

    switch (instance)
    {
    case ERU0_EXOCON_GEEN::value1:
        result = "value1";
        break;
    case ERU0_EXOCON_GEEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXOCON_GEEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXOCON_GEEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU0_EXOCON_GEEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU0_EXOCON_GEEN::value2;
    }

    return result;
}

}; // namespace XMC4700