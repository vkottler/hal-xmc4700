/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBCFG_DPCAL3 : uint8_t
{
    automatic_post_calibration_after_each_convers_cont /*!< Automatic
                                                          post-calibration
                                                          after each conversion
                                                          of group x */
        ,
    no_post_calibration = 1 /*!< No post-calibration */
};
static_assert(sizeof(VADC_GLOBCFG_DPCAL3) == 1);

/**
 * Converts VADC_GLOBCFG_DPCAL3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_DPCAL3 instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_DPCAL3";

    switch (instance)
    {
    case VADC_GLOBCFG_DPCAL3::
        automatic_post_calibration_after_each_convers_cont:
        result = "automatic_post_calibration_after_each_convers_cont";
        break;
    case VADC_GLOBCFG_DPCAL3::no_post_calibration:
        result = "no_post_calibration";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_DPCAL3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_DPCAL3 &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "automatic_post_calibration_after_each_convers_cont", 50)))
    {
        output = VADC_GLOBCFG_DPCAL3::
            automatic_post_calibration_after_each_convers_cont;
    }
    else if ((result = !strncmp(data, "no_post_calibration", 19)))
    {
        output = VADC_GLOBCFG_DPCAL3::no_post_calibration;
    }

    return result;
}

}; // namespace XMC4700
