/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_MODCFG_DIVM : uint8_t
{
    value1 /*!< fMOD = fCLK / 2 */,
    value2 = 1 /*!< fMOD = fCLK / 4 */,
    value3 = 2 /*!< fMOD = fCLK / 6 */,
    value4 = 15 /*!< fMOD = fCLK / 32 */
};
static_assert(sizeof(DSD_CH0_MODCFG_DIVM) == 1);

static constexpr uint16_t DSD_CH0_MODCFG_DIVM_id = 1583;

/**
 * Converts DSD_CH0_MODCFG_DIVM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_MODCFG_DIVM instance)
{
    const char *result = "UNKNOWN DSD_CH0_MODCFG_DIVM";

    switch (instance)
    {
    case DSD_CH0_MODCFG_DIVM::value1:
        result = "value1";
        break;
    case DSD_CH0_MODCFG_DIVM::value2:
        result = "value2";
        break;
    case DSD_CH0_MODCFG_DIVM::value3:
        result = "value3";
        break;
    case DSD_CH0_MODCFG_DIVM::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_MODCFG_DIVM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_MODCFG_DIVM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CH0_MODCFG_DIVM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_MODCFG_DIVM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CH0_MODCFG_DIVM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CH0_MODCFG_DIVM::value4;
    }

    return result;
}

}; // namespace XMC4700
