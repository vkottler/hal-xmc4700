/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG1_DATMOD : uint8_t
{
    independent_data_handling___process_data_data_cont /*!< independent data
                                                          handling - process
                                                          data from DATA0
                                                          register (bits 11:0)
                                                          to DAC0 and data from
                                                          DATA1 register (bits
                                                          11:0) to DAC1 */
        ,
    simultaneous_data_handling___process_data_dac_cont =
        1 /*!< simultaneous data handling - process data from DAC01 register to
             both DACs (bits 11:0 to DAC0 and bits 23:12 to DAC1). */
};
static_assert(sizeof(DAC_DAC0CFG1_DATMOD) == 1);

/**
 * Converts DAC_DAC0CFG1_DATMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG1_DATMOD instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG1_DATMOD";

    switch (instance)
    {
    case DAC_DAC0CFG1_DATMOD::
        independent_data_handling___process_data_data_cont:
        result = "independent_data_handling___process_data_data_cont";
        break;
    case DAC_DAC0CFG1_DATMOD::
        simultaneous_data_handling___process_data_dac_cont:
        result = "simultaneous_data_handling___process_data_dac_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG1_DATMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG1_DATMOD &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "independent_data_handling___process_data_data_cont", 50)))
    {
        output = DAC_DAC0CFG1_DATMOD::
            independent_data_handling___process_data_data_cont;
    }
    else if ((result = !strncmp(
                  data, "simultaneous_data_handling___process_data_dac_cont",
                  50)))
    {
        output = DAC_DAC0CFG1_DATMOD::
            simultaneous_data_handling___process_data_dac_cont;
    }

    return result;
}

}; // namespace XMC4700
