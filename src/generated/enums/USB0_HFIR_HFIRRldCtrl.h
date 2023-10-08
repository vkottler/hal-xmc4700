/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "HFIR cannot be reloaded dynamically",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "HFIR can be dynamically reloaded during runtime",
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

enum class USB0_HFIR_HFIRRldCtrl : uint8_t
{
    value1 /*!< HFIR cannot be reloaded dynamically */,
    value2 = 1 /*!< HFIR can be dynamically reloaded during runtime */
};
static_assert(sizeof(USB0_HFIR_HFIRRldCtrl) == 1);

static constexpr uint16_t USB0_HFIR_HFIRRldCtrl_id = 349;

/**
 * Converts USB0_HFIR_HFIRRldCtrl to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HFIR_HFIRRldCtrl instance)
{
    const char *result = "UNKNOWN USB0_HFIR_HFIRRldCtrl";

    switch (instance)
    {
    case USB0_HFIR_HFIRRldCtrl::value1:
        result = "value1";
        break;
    case USB0_HFIR_HFIRRldCtrl::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HFIR_HFIRRldCtrl.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HFIR_HFIRRldCtrl &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_HFIR_HFIRRldCtrl::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_HFIR_HFIRRldCtrl::value2;
    }

    return result;
}

}; // namespace XMC4700