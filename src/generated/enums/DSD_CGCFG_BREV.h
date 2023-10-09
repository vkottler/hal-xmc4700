/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CGCFG_BREV : uint8_t
{
    value1 /*!< Normal mode */,
    value2 = 1 /*!< Bit-reverse mode */
};
static_assert(sizeof(DSD_CGCFG_BREV) == 1);

static constexpr uint16_t DSD_CGCFG_BREV_id = 2366;

/**
 * Converts DSD_CGCFG_BREV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CGCFG_BREV instance)
{
    const char *result = "UNKNOWN DSD_CGCFG_BREV";

    switch (instance)
    {
    case DSD_CGCFG_BREV::value1:
        result = "value1";
        break;
    case DSD_CGCFG_BREV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CGCFG_BREV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CGCFG_BREV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CGCFG_BREV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CGCFG_BREV::value2;
    }

    return result;
}

}; // namespace XMC4700
