/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CGCFG_DIVCG : uint8_t
{
    value1 /*!< fCG = fCLK / 2 */,
    value2 = 1 /*!< fCG = fCLK / 4 */,
    value3 = 2 /*!< fCG = fCLK / 6 */,
    value4 = 15 /*!< fCG = fCLK / 32 */
};
static_assert(sizeof(DSD_CGCFG_DIVCG) == 1);

static constexpr uint16_t DSD_CGCFG_DIVCG_id = 339;

/**
 * Converts DSD_CGCFG_DIVCG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CGCFG_DIVCG instance)
{
    const char *result = "UNKNOWN DSD_CGCFG_DIVCG";

    switch (instance)
    {
    case DSD_CGCFG_DIVCG::value1:
        result = "value1";
        break;
    case DSD_CGCFG_DIVCG::value2:
        result = "value2";
        break;
    case DSD_CGCFG_DIVCG::value3:
        result = "value3";
        break;
    case DSD_CGCFG_DIVCG::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CGCFG_DIVCG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CGCFG_DIVCG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CGCFG_DIVCG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CGCFG_DIVCG::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CGCFG_DIVCG::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CGCFG_DIVCG::value4;
    }

    return result;
}

}; // namespace XMC4700
