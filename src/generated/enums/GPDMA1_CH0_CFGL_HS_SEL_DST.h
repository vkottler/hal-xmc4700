/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA1_CH0_CFGL_HS_SEL_DST : uint8_t
{
    value1 /*!< Hardware handshaking interface. Software-initiated transaction requests are ignored. */,
    value2 = 1 /*!< Software handshaking interface. Hardware- initiated transaction requests are ignored. */
};
static_assert(sizeof(GPDMA1_CH0_CFGL_HS_SEL_DST) == 1);

static constexpr uint16_t GPDMA1_CH0_CFGL_HS_SEL_DST_id = 1000;

/**
 * Converts GPDMA1_CH0_CFGL_HS_SEL_DST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CH0_CFGL_HS_SEL_DST instance)
{
    const char *result = "UNKNOWN GPDMA1_CH0_CFGL_HS_SEL_DST";

    switch (instance)
    {
    case GPDMA1_CH0_CFGL_HS_SEL_DST::value1:
        result = "value1";
        break;
    case GPDMA1_CH0_CFGL_HS_SEL_DST::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CH0_CFGL_HS_SEL_DST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CH0_CFGL_HS_SEL_DST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA1_CH0_CFGL_HS_SEL_DST::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA1_CH0_CFGL_HS_SEL_DST::value2;
    }

    return result;
}

}; // namespace XMC4700
