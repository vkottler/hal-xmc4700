/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_DICFG_STROBE : uint8_t
{
    no_data_strobe /*!< No data strobe */,
    direct_clock_sample_trigger_generated_at_each_cont =
        1 /*!< Direct clock, a sample trigger is generated at each rising clock
             edge */
        ,
    direct_clock_sample_trigger_generated_at_each_cont_ =
        2 /*!< Direct clock, a sample trigger is generated at each falling
             clock edge */
        ,
    double_data_sample_trigger_generated_at_each__cont =
        3 /*!< Double data, a sample trigger is generated at each rising and
             falling clock edge */
        ,
    double_clock_sample_trigger_generated_at_ever_cont =
        5 /*!< Double clock, a sample trigger is generated at every 2nd rising
             clock edge */
        ,
    double_clock_sample_trigger_generated_at_ever_cont_ =
        6 /*!< Double clock, a sample trigger is generated at every 2nd falling
             clock edge */
};
static_assert(sizeof(DSD_CH0_DICFG_STROBE) == 1);

/**
 * Converts DSD_CH0_DICFG_STROBE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_DICFG_STROBE instance)
{
    const char *result = "UNKNOWN DSD_CH0_DICFG_STROBE";

    switch (instance)
    {
    case DSD_CH0_DICFG_STROBE::no_data_strobe:
        result = "no_data_strobe";
        break;
    case DSD_CH0_DICFG_STROBE::
        direct_clock_sample_trigger_generated_at_each_cont:
        result = "direct_clock_sample_trigger_generated_at_each_cont";
        break;
    case DSD_CH0_DICFG_STROBE::
        direct_clock_sample_trigger_generated_at_each_cont_:
        result = "direct_clock_sample_trigger_generated_at_each_cont_";
        break;
    case DSD_CH0_DICFG_STROBE::
        double_data_sample_trigger_generated_at_each__cont:
        result = "double_data_sample_trigger_generated_at_each__cont";
        break;
    case DSD_CH0_DICFG_STROBE::
        double_clock_sample_trigger_generated_at_ever_cont:
        result = "double_clock_sample_trigger_generated_at_ever_cont";
        break;
    case DSD_CH0_DICFG_STROBE::
        double_clock_sample_trigger_generated_at_ever_cont_:
        result = "double_clock_sample_trigger_generated_at_ever_cont_";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_DICFG_STROBE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_DICFG_STROBE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_data_strobe", 14)))
    {
        output = DSD_CH0_DICFG_STROBE::no_data_strobe;
    }
    else if ((result = !strncmp(
                  data, "direct_clock_sample_trigger_generated_at_each_cont",
                  50)))
    {
        output = DSD_CH0_DICFG_STROBE::
            direct_clock_sample_trigger_generated_at_each_cont;
    }
    else if ((result = !strncmp(
                  data, "direct_clock_sample_trigger_generated_at_each_cont_",
                  51)))
    {
        output = DSD_CH0_DICFG_STROBE::
            direct_clock_sample_trigger_generated_at_each_cont_;
    }
    else if ((result = !strncmp(
                  data, "double_data_sample_trigger_generated_at_each__cont",
                  50)))
    {
        output = DSD_CH0_DICFG_STROBE::
            double_data_sample_trigger_generated_at_each__cont;
    }
    else if ((result = !strncmp(
                  data, "double_clock_sample_trigger_generated_at_ever_cont",
                  50)))
    {
        output = DSD_CH0_DICFG_STROBE::
            double_clock_sample_trigger_generated_at_ever_cont;
    }
    else if ((result = !strncmp(
                  data, "double_clock_sample_trigger_generated_at_ever_cont_",
                  51)))
    {
        output = DSD_CH0_DICFG_STROBE::
            double_clock_sample_trigger_generated_at_ever_cont_;
    }

    return result;
}

}; // namespace XMC4700
