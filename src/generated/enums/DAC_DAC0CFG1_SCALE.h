/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG1_SCALE : uint8_t
{
    no_shift_multiplicationdivision_by_1 /*!< no shift =
                                            multiplication/division by 1 */
        ,
    shift_by_1_multiplicationdivision_by_2 =
        1 /*!< shift by 1 = multiplication/division by 2 */,
    shift_by_2_multiplicationdivision_by_4 =
        2 /*!< shift by 2 = multiplication/division by 4 */,
    shift_left_by_3_multiplicationdivision_by_8 =
        3 /*!< shift left by 3 = multiplication/division by 8 */,
    shift_left_by_4_multiplicationdivision_by_16 =
        4 /*!< shift left by 4 = multiplication/division by 16 */,
    shift_left_by_5_multiplicationdivision_by_32 =
        5 /*!< shift left by 5 = multiplication/division by 32 */,
    shift_left_by_6_multiplicationdivision_by_64 =
        6 /*!< shift left by 6 = multiplication/division by 64 */,
    shift_left_by_7_multiplicationdivision_by_128 =
        7 /*!< shift left by 7 = multiplication/division by 128 */
};
static_assert(sizeof(DAC_DAC0CFG1_SCALE) == 1);

/**
 * Converts DAC_DAC0CFG1_SCALE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG1_SCALE instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG1_SCALE";

    switch (instance)
    {
    case DAC_DAC0CFG1_SCALE::no_shift_multiplicationdivision_by_1:
        result = "no_shift_multiplicationdivision_by_1";
        break;
    case DAC_DAC0CFG1_SCALE::shift_by_1_multiplicationdivision_by_2:
        result = "shift_by_1_multiplicationdivision_by_2";
        break;
    case DAC_DAC0CFG1_SCALE::shift_by_2_multiplicationdivision_by_4:
        result = "shift_by_2_multiplicationdivision_by_4";
        break;
    case DAC_DAC0CFG1_SCALE::shift_left_by_3_multiplicationdivision_by_8:
        result = "shift_left_by_3_multiplicationdivision_by_8";
        break;
    case DAC_DAC0CFG1_SCALE::shift_left_by_4_multiplicationdivision_by_16:
        result = "shift_left_by_4_multiplicationdivision_by_16";
        break;
    case DAC_DAC0CFG1_SCALE::shift_left_by_5_multiplicationdivision_by_32:
        result = "shift_left_by_5_multiplicationdivision_by_32";
        break;
    case DAC_DAC0CFG1_SCALE::shift_left_by_6_multiplicationdivision_by_64:
        result = "shift_left_by_6_multiplicationdivision_by_64";
        break;
    case DAC_DAC0CFG1_SCALE::shift_left_by_7_multiplicationdivision_by_128:
        result = "shift_left_by_7_multiplicationdivision_by_128";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG1_SCALE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG1_SCALE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_shift_multiplicationdivision_by_1", 36)))
    {
        output = DAC_DAC0CFG1_SCALE::no_shift_multiplicationdivision_by_1;
    }
    else if ((result = !strncmp(data, "shift_by_1_multiplicationdivision_by_2",
                                38)))
    {
        output = DAC_DAC0CFG1_SCALE::shift_by_1_multiplicationdivision_by_2;
    }
    else if ((result = !strncmp(data, "shift_by_2_multiplicationdivision_by_4",
                                38)))
    {
        output = DAC_DAC0CFG1_SCALE::shift_by_2_multiplicationdivision_by_4;
    }
    else if ((result = !strncmp(
                  data, "shift_left_by_3_multiplicationdivision_by_8", 43)))
    {
        output =
            DAC_DAC0CFG1_SCALE::shift_left_by_3_multiplicationdivision_by_8;
    }
    else if ((result = !strncmp(
                  data, "shift_left_by_4_multiplicationdivision_by_16", 44)))
    {
        output =
            DAC_DAC0CFG1_SCALE::shift_left_by_4_multiplicationdivision_by_16;
    }
    else if ((result = !strncmp(
                  data, "shift_left_by_5_multiplicationdivision_by_32", 44)))
    {
        output =
            DAC_DAC0CFG1_SCALE::shift_left_by_5_multiplicationdivision_by_32;
    }
    else if ((result = !strncmp(
                  data, "shift_left_by_6_multiplicationdivision_by_64", 44)))
    {
        output =
            DAC_DAC0CFG1_SCALE::shift_left_by_6_multiplicationdivision_by_64;
    }
    else if ((result = !strncmp(
                  data, "shift_left_by_7_multiplicationdivision_by_128", 45)))
    {
        output =
            DAC_DAC0CFG1_SCALE::shift_left_by_7_multiplicationdivision_by_128;
    }

    return result;
}

}; // namespace XMC4700
