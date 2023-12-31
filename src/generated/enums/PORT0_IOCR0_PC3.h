/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT0_IOCR0_PC3 : uint8_t
{
    input_no_internal_pull_device_active /*!< Input - No internal pull device
                                            active */
        ,
    input_internal_pull_down_device_active =
        1 /*!< Input - Internal pull-down device active */,
    input_internal_pull_up_device_active =
        2 /*!< Input - Internal pull-up device active */,
    input_no_internal_pull_device_pn_outx_input_value =
        3 /*!< Input - No internal pull device, Pn_OUTx = input value */,
    input_inverted_no_internal_pull_device_active =
        4 /*!< Input inverted - No internal pull device active */,
    input_inverted_internal_pull_down_device_active =
        5 /*!< Input inverted - Internal pull-down device active */,
    input_inverted_internal_pull_up_device_active =
        6 /*!< Input inverted - Internal pull-up device active */,
    input_inverted_no_internal_pull_device_pn_out_cont =
        7 /*!< Input inverted - No internal pull device, Pn_OUTx = input value
           */
        ,
    output_push_pull_general_purpose_output =
        16 /*!< Output Push-Pull - General-purpose output */,
    output_push_pull_alternate_output_function_1 =
        17 /*!< Output Push-Pull - Alternate output function 1 */,
    output_push_pull_alternate_output_function_2 =
        18 /*!< Output Push-Pull - Alternate output function 2 */,
    output_push_pull_alternate_output_function_3 =
        19 /*!< Output Push-Pull - Alternate output function 3 */,
    output_push_pull_alternate_output_function_4 =
        20 /*!< Output Push-Pull - Alternate output function 4 */,
    output_open_drain_general_purpose_output =
        24 /*!< Output Open Drain - General-purpose output */,
    output_open_drain_alternate_output_function_1 =
        25 /*!< Output Open Drain - Alternate output function 1 */,
    output_open_drain_alternate_output_function_2 =
        26 /*!< Output Open Drain - Alternate output function 2 */,
    output_open_drain_alternate_output_function_3 =
        27 /*!< Output Open Drain - Alternate output function 3 */,
    output_open_drain_alternate_output_function_4 =
        28 /*!< Output Open Drain - Alternate output function 4 */
};
static_assert(sizeof(PORT0_IOCR0_PC3) == 1);

/**
 * Converts PORT0_IOCR0_PC3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_IOCR0_PC3 instance)
{
    const char *result = "UNKNOWN PORT0_IOCR0_PC3";

    switch (instance)
    {
    case PORT0_IOCR0_PC3::input_no_internal_pull_device_active:
        result = "input_no_internal_pull_device_active";
        break;
    case PORT0_IOCR0_PC3::input_internal_pull_down_device_active:
        result = "input_internal_pull_down_device_active";
        break;
    case PORT0_IOCR0_PC3::input_internal_pull_up_device_active:
        result = "input_internal_pull_up_device_active";
        break;
    case PORT0_IOCR0_PC3::input_no_internal_pull_device_pn_outx_input_value:
        result = "input_no_internal_pull_device_pn_outx_input_value";
        break;
    case PORT0_IOCR0_PC3::input_inverted_no_internal_pull_device_active:
        result = "input_inverted_no_internal_pull_device_active";
        break;
    case PORT0_IOCR0_PC3::input_inverted_internal_pull_down_device_active:
        result = "input_inverted_internal_pull_down_device_active";
        break;
    case PORT0_IOCR0_PC3::input_inverted_internal_pull_up_device_active:
        result = "input_inverted_internal_pull_up_device_active";
        break;
    case PORT0_IOCR0_PC3::input_inverted_no_internal_pull_device_pn_out_cont:
        result = "input_inverted_no_internal_pull_device_pn_out_cont";
        break;
    case PORT0_IOCR0_PC3::output_push_pull_general_purpose_output:
        result = "output_push_pull_general_purpose_output";
        break;
    case PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_1:
        result = "output_push_pull_alternate_output_function_1";
        break;
    case PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_2:
        result = "output_push_pull_alternate_output_function_2";
        break;
    case PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_3:
        result = "output_push_pull_alternate_output_function_3";
        break;
    case PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_4:
        result = "output_push_pull_alternate_output_function_4";
        break;
    case PORT0_IOCR0_PC3::output_open_drain_general_purpose_output:
        result = "output_open_drain_general_purpose_output";
        break;
    case PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_1:
        result = "output_open_drain_alternate_output_function_1";
        break;
    case PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_2:
        result = "output_open_drain_alternate_output_function_2";
        break;
    case PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_3:
        result = "output_open_drain_alternate_output_function_3";
        break;
    case PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_4:
        result = "output_open_drain_alternate_output_function_4";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_IOCR0_PC3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_IOCR0_PC3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "input_no_internal_pull_device_active", 36)))
    {
        output = PORT0_IOCR0_PC3::input_no_internal_pull_device_active;
    }
    else if ((result = !strncmp(data, "input_internal_pull_down_device_active",
                                38)))
    {
        output = PORT0_IOCR0_PC3::input_internal_pull_down_device_active;
    }
    else if ((result =
                  !strncmp(data, "input_internal_pull_up_device_active", 36)))
    {
        output = PORT0_IOCR0_PC3::input_internal_pull_up_device_active;
    }
    else if ((result = !strncmp(
                  data, "input_no_internal_pull_device_pn_outx_input_value",
                  49)))
    {
        output =
            PORT0_IOCR0_PC3::input_no_internal_pull_device_pn_outx_input_value;
    }
    else if ((result = !strncmp(
                  data, "input_inverted_no_internal_pull_device_active", 45)))
    {
        output =
            PORT0_IOCR0_PC3::input_inverted_no_internal_pull_device_active;
    }
    else if ((result = !strncmp(
                  data, "input_inverted_internal_pull_down_device_active",
                  47)))
    {
        output =
            PORT0_IOCR0_PC3::input_inverted_internal_pull_down_device_active;
    }
    else if ((result = !strncmp(
                  data, "input_inverted_internal_pull_up_device_active", 45)))
    {
        output =
            PORT0_IOCR0_PC3::input_inverted_internal_pull_up_device_active;
    }
    else if ((result = !strncmp(
                  data, "input_inverted_no_internal_pull_device_pn_out_cont",
                  50)))
    {
        output = PORT0_IOCR0_PC3::
            input_inverted_no_internal_pull_device_pn_out_cont;
    }
    else if ((result = !strncmp(
                  data, "output_push_pull_general_purpose_output", 39)))
    {
        output = PORT0_IOCR0_PC3::output_push_pull_general_purpose_output;
    }
    else if ((result = !strncmp(
                  data, "output_push_pull_alternate_output_function_1", 44)))
    {
        output = PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_1;
    }
    else if ((result = !strncmp(
                  data, "output_push_pull_alternate_output_function_2", 44)))
    {
        output = PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_2;
    }
    else if ((result = !strncmp(
                  data, "output_push_pull_alternate_output_function_3", 44)))
    {
        output = PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_3;
    }
    else if ((result = !strncmp(
                  data, "output_push_pull_alternate_output_function_4", 44)))
    {
        output = PORT0_IOCR0_PC3::output_push_pull_alternate_output_function_4;
    }
    else if ((result = !strncmp(
                  data, "output_open_drain_general_purpose_output", 40)))
    {
        output = PORT0_IOCR0_PC3::output_open_drain_general_purpose_output;
    }
    else if ((result = !strncmp(
                  data, "output_open_drain_alternate_output_function_1", 45)))
    {
        output =
            PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_1;
    }
    else if ((result = !strncmp(
                  data, "output_open_drain_alternate_output_function_2", 45)))
    {
        output =
            PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_2;
    }
    else if ((result = !strncmp(
                  data, "output_open_drain_alternate_output_function_3", 45)))
    {
        output =
            PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_3;
    }
    else if ((result = !strncmp(
                  data, "output_open_drain_alternate_output_function_4", 45)))
    {
        output =
            PORT0_IOCR0_PC3::output_open_drain_alternate_output_function_4;
    }

    return result;
}

}; // namespace XMC4700
