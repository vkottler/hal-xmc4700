/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The data word in TBUF is not considered as invalid after it has been loaded into the transmit shift register. The loading of the TBUF data into the shift register does not clear TDV.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The data word in TBUF is considered as invalid after it has been loaded into the shift register. In ASC and IIC mode, TDV is cleared with the TBI event, whereas in SSC and IIS mode, it is cleared with the RSI event. TDSSM = 1 has to be programmed if an optional data buffer is used.",
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

enum class USIC0_CH0_TCSR_TDSSM : uint8_t
{
    value1 /*!< The data word in TBUF is not considered as invalid after it has been loaded into the transmit shift register. The loading of the TBUF data into the shift register does not clear TDV. */,
    value2 = 1 /*!< The data word in TBUF is considered as invalid after it has been loaded into the shift register. In ASC and IIC mode, TDV is cleared with the TBI event, whereas in SSC and IIS mode, it is cleared with the RSI event. TDSSM = 1 has to be programmed if an optional data buffer is used. */
};
static_assert(sizeof(USIC0_CH0_TCSR_TDSSM) == 1);

static constexpr uint16_t USIC0_CH0_TCSR_TDSSM_id = 90;

/**
 * Converts USIC0_CH0_TCSR_TDSSM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_TDSSM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_TDSSM";

    switch (instance)
    {
    case USIC0_CH0_TCSR_TDSSM::value1:
        result = "value1";
        break;
    case USIC0_CH0_TCSR_TDSSM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_TDSSM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_TDSSM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TCSR_TDSSM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TCSR_TDSSM::value2;
    }

    return result;
}

}; // namespace XMC4700
