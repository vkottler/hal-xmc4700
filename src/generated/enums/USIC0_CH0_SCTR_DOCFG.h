/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_SCTR_DOCFG : uint8_t
{
    shift_data_value /*!< DOUTx = shift data value */,
    inverted_shift_data_value = 1 /*!< DOUTx = inverted shift data value */
};
static_assert(sizeof(USIC0_CH0_SCTR_DOCFG) == 1);

/**
 * Converts USIC0_CH0_SCTR_DOCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_SCTR_DOCFG instance)
{
    const char *result = "UNKNOWN USIC0_CH0_SCTR_DOCFG";

    switch (instance)
    {
    case USIC0_CH0_SCTR_DOCFG::shift_data_value:
        result = "shift_data_value";
        break;
    case USIC0_CH0_SCTR_DOCFG::inverted_shift_data_value:
        result = "inverted_shift_data_value";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_SCTR_DOCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_SCTR_DOCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "shift_data_value", 16)))
    {
        output = USIC0_CH0_SCTR_DOCFG::shift_data_value;
    }
    else if ((result = !strncmp(data, "inverted_shift_data_value", 25)))
    {
        output = USIC0_CH0_SCTR_DOCFG::inverted_shift_data_value;
    }

    return result;
}

}; // namespace XMC4700
