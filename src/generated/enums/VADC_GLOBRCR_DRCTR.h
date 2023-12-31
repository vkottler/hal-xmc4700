/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBRCR_DRCTR : uint8_t
{
    data_reduction_disabled /*!< Data reduction disabled */
};
static_assert(sizeof(VADC_GLOBRCR_DRCTR) == 1);

/**
 * Converts VADC_GLOBRCR_DRCTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBRCR_DRCTR instance)
{
    const char *result = "UNKNOWN VADC_GLOBRCR_DRCTR";

    switch (instance)
    {
    case VADC_GLOBRCR_DRCTR::data_reduction_disabled:
        result = "data_reduction_disabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBRCR_DRCTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBRCR_DRCTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "data_reduction_disabled", 23)))
    {
        output = VADC_GLOBRCR_DRCTR::data_reduction_disabled;
    }

    return result;
}

}; // namespace XMC4700
