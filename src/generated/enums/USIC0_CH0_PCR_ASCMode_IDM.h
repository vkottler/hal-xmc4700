/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The bus idle detection is switched off and bits PSR.TXIDLE and PSR.RXIDLE are set automatically to enable data transfers without checking the inputs before.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The bus is considered as idle after a number of consecutive passive bit times defined by SCTR.FLE plus 2 (in the case without parity bit) or plus 3 (in the case with parity bit).",
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

enum class USIC0_CH0_PCR_ASCMode_IDM : uint8_t
{
    value1 /*!< The bus idle detection is switched off and bits PSR.TXIDLE and PSR.RXIDLE are set automatically to enable data transfers without checking the inputs before. */,
    value2 = 1 /*!< The bus is considered as idle after a number of consecutive passive bit times defined by SCTR.FLE plus 2 (in the case without parity bit) or plus 3 (in the case with parity bit). */
};
static_assert(sizeof(USIC0_CH0_PCR_ASCMode_IDM) == 1);

static constexpr uint16_t USIC0_CH0_PCR_ASCMode_IDM_id = 108;

/**
 * Converts USIC0_CH0_PCR_ASCMode_IDM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_ASCMode_IDM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_ASCMode_IDM";

    switch (instance)
    {
    case USIC0_CH0_PCR_ASCMode_IDM::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_ASCMode_IDM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_ASCMode_IDM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_ASCMode_IDM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_IDM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_IDM::value2;
    }

    return result;
}

}; // namespace XMC4700
