/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_MASKSRCTRAN_CH4 : uint8_t
{
    value1 /*!< masked */,
    value2 = 1 /*!< unmasked */
};
static_assert(sizeof(GPDMA0_MASKSRCTRAN_CH4) == 1);

/**
 * Converts GPDMA0_MASKSRCTRAN_CH4 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_MASKSRCTRAN_CH4 instance)
{
    const char *result = "UNKNOWN GPDMA0_MASKSRCTRAN_CH4";

    switch (instance)
    {
    case GPDMA0_MASKSRCTRAN_CH4::value1:
        result = "value1";
        break;
    case GPDMA0_MASKSRCTRAN_CH4::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_MASKSRCTRAN_CH4.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_MASKSRCTRAN_CH4 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_MASKSRCTRAN_CH4::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_MASKSRCTRAN_CH4::value2;
    }

    return result;
}

}; // namespace XMC4700
