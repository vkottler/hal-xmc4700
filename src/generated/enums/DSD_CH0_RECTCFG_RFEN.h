/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_RECTCFG_RFEN : uint8_t
{
    no_rectification_data_not_altered /*!< No rectification, data not altered
                                       */
        ,
    data_rectified_according_sgnd =
        1 /*!< Data are rectified according to SGND */
};
static_assert(sizeof(DSD_CH0_RECTCFG_RFEN) == 1);

/**
 * Converts DSD_CH0_RECTCFG_RFEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_RECTCFG_RFEN instance)
{
    const char *result = "UNKNOWN DSD_CH0_RECTCFG_RFEN";

    switch (instance)
    {
    case DSD_CH0_RECTCFG_RFEN::no_rectification_data_not_altered:
        result = "no_rectification_data_not_altered";
        break;
    case DSD_CH0_RECTCFG_RFEN::data_rectified_according_sgnd:
        result = "data_rectified_according_sgnd";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_RECTCFG_RFEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_RECTCFG_RFEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_rectification_data_not_altered", 33)))
    {
        output = DSD_CH0_RECTCFG_RFEN::no_rectification_data_not_altered;
    }
    else if ((result = !strncmp(data, "data_rectified_according_sgnd", 29)))
    {
        output = DSD_CH0_RECTCFG_RFEN::data_rectified_according_sgnd;
    }

    return result;
}

}; // namespace XMC4700
