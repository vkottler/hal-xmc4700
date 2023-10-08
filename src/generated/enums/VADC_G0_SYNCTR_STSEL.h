/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Kernel is synchronization master: Use own bitfield GxARBCFG.ANONC",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Kernel is synchronization slave: Control information from input CI1",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Kernel is synchronization slave: Control information from input CI2",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Kernel is synchronization slave: Control information from input CI3",
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

enum class VADC_G0_SYNCTR_STSEL : uint8_t
{
    value1 /*!< Kernel is synchronization master: Use own bitfield GxARBCFG.ANONC */,
    value2 = 1 /*!< Kernel is synchronization slave: Control information from input CI1 */,
    value3 = 2 /*!< Kernel is synchronization slave: Control information from input CI2 */,
    value4 = 3 /*!< Kernel is synchronization slave: Control information from input CI3 */
};
static_assert(sizeof(VADC_G0_SYNCTR_STSEL) == 1);

static constexpr uint16_t VADC_G0_SYNCTR_STSEL_id = 914;

/**
 * Converts VADC_G0_SYNCTR_STSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_SYNCTR_STSEL instance)
{
    const char *result = "UNKNOWN VADC_G0_SYNCTR_STSEL";

    switch (instance)
    {
    case VADC_G0_SYNCTR_STSEL::value1:
        result = "value1";
        break;
    case VADC_G0_SYNCTR_STSEL::value2:
        result = "value2";
        break;
    case VADC_G0_SYNCTR_STSEL::value3:
        result = "value3";
        break;
    case VADC_G0_SYNCTR_STSEL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_SYNCTR_STSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_SYNCTR_STSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_SYNCTR_STSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_SYNCTR_STSEL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_SYNCTR_STSEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_G0_SYNCTR_STSEL::value4;
    }

    return result;
}

}; // namespace XMC4700
