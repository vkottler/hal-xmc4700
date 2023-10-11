/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA1_CH0_CFGL_SRC_HS_POL : uint8_t
{
    value1 /*!< Active high */,
    value2 = 1 /*!< Active low */
};
static_assert(sizeof(GPDMA1_CH0_CFGL_SRC_HS_POL) == 1);

static constexpr uint16_t GPDMA1_CH0_CFGL_SRC_HS_POL_id = 1005;

/**
 * Converts GPDMA1_CH0_CFGL_SRC_HS_POL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CH0_CFGL_SRC_HS_POL instance)
{
    const char *result = "UNKNOWN GPDMA1_CH0_CFGL_SRC_HS_POL";

    switch (instance)
    {
    case GPDMA1_CH0_CFGL_SRC_HS_POL::value1:
        result = "value1";
        break;
    case GPDMA1_CH0_CFGL_SRC_HS_POL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CH0_CFGL_SRC_HS_POL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CH0_CFGL_SRC_HS_POL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA1_CH0_CFGL_SRC_HS_POL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA1_CH0_CFGL_SRC_HS_POL::value2;
    }

    return result;
}

}; // namespace XMC4700
