/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH2_CFGL_HS_SEL_SRC : uint8_t
{
    value1 /*!< Hardware handshaking interface. Software-initiated transaction requests are ignored. */,
    value2 = 1 /*!< Software handshaking interface. Hardware-initiated transaction requests are ignored. */
};
static_assert(sizeof(GPDMA0_CH2_CFGL_HS_SEL_SRC) == 1);

/**
 * Converts GPDMA0_CH2_CFGL_HS_SEL_SRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH2_CFGL_HS_SEL_SRC instance)
{
    const char *result = "UNKNOWN GPDMA0_CH2_CFGL_HS_SEL_SRC";

    switch (instance)
    {
    case GPDMA0_CH2_CFGL_HS_SEL_SRC::value1:
        result = "value1";
        break;
    case GPDMA0_CH2_CFGL_HS_SEL_SRC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH2_CFGL_HS_SEL_SRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH2_CFGL_HS_SEL_SRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CH2_CFGL_HS_SEL_SRC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CH2_CFGL_HS_SEL_SRC::value2;
    }

    return result;
}

}; // namespace XMC4700
