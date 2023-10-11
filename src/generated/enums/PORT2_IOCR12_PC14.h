/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT2_IOCR12_PC14 : uint8_t
{
    value1 /*!< Input - No internal pull device active */,
    value2 = 1 /*!< Input - Internal pull-down device active */,
    value3 = 2 /*!< Input - Internal pull-up device active */,
    value4 = 3 /*!< Input - No internal pull device, Pn_OUTx = input value */,
    value5 = 4 /*!< Input inverted - No internal pull device active */,
    value6 = 5 /*!< Input inverted - Internal pull-down device active */,
    value7 = 6 /*!< Input inverted - Internal pull-up device active */,
    value8 = 7 /*!< Input inverted - No internal pull device, Pn_OUTx = input value */,
    value9 = 16 /*!< Output Push-Pull - General-purpose output */,
    value10 = 17 /*!< Output Push-Pull - Alternate output function 1 */,
    value11 = 18 /*!< Output Push-Pull - Alternate output function 2 */,
    value12 = 19 /*!< Output Push-Pull - Alternate output function 3 */,
    value13 = 20 /*!< Output Push-Pull - Alternate output function 4 */,
    value14 = 24 /*!< Output Open Drain - General-purpose output */,
    value15 = 25 /*!< Output Open Drain - Alternate output function 1 */,
    value16 = 26 /*!< Output Open Drain - Alternate output function 2 */,
    value17 = 27 /*!< Output Open Drain - Alternate output function 3 */,
    value18 = 28 /*!< Output Open Drain - Alternate output function 4 */
};
static_assert(sizeof(PORT2_IOCR12_PC14) == 1);

static constexpr uint16_t PORT2_IOCR12_PC14_id = 1471;

/**
 * Converts PORT2_IOCR12_PC14 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT2_IOCR12_PC14 instance)
{
    const char *result = "UNKNOWN PORT2_IOCR12_PC14";

    switch (instance)
    {
    case PORT2_IOCR12_PC14::value1:
        result = "value1";
        break;
    case PORT2_IOCR12_PC14::value2:
        result = "value2";
        break;
    case PORT2_IOCR12_PC14::value3:
        result = "value3";
        break;
    case PORT2_IOCR12_PC14::value4:
        result = "value4";
        break;
    case PORT2_IOCR12_PC14::value5:
        result = "value5";
        break;
    case PORT2_IOCR12_PC14::value6:
        result = "value6";
        break;
    case PORT2_IOCR12_PC14::value7:
        result = "value7";
        break;
    case PORT2_IOCR12_PC14::value8:
        result = "value8";
        break;
    case PORT2_IOCR12_PC14::value9:
        result = "value9";
        break;
    case PORT2_IOCR12_PC14::value10:
        result = "value10";
        break;
    case PORT2_IOCR12_PC14::value11:
        result = "value11";
        break;
    case PORT2_IOCR12_PC14::value12:
        result = "value12";
        break;
    case PORT2_IOCR12_PC14::value13:
        result = "value13";
        break;
    case PORT2_IOCR12_PC14::value14:
        result = "value14";
        break;
    case PORT2_IOCR12_PC14::value15:
        result = "value15";
        break;
    case PORT2_IOCR12_PC14::value16:
        result = "value16";
        break;
    case PORT2_IOCR12_PC14::value17:
        result = "value17";
        break;
    case PORT2_IOCR12_PC14::value18:
        result = "value18";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT2_IOCR12_PC14.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT2_IOCR12_PC14 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT2_IOCR12_PC14::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT2_IOCR12_PC14::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORT2_IOCR12_PC14::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = PORT2_IOCR12_PC14::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = PORT2_IOCR12_PC14::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = PORT2_IOCR12_PC14::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = PORT2_IOCR12_PC14::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = PORT2_IOCR12_PC14::value8;
    }
    else if ((result = !strncmp(data, "value9", 6)))
    {
        output = PORT2_IOCR12_PC14::value9;
    }
    else if ((result = !strncmp(data, "value10", 7)))
    {
        output = PORT2_IOCR12_PC14::value10;
    }
    else if ((result = !strncmp(data, "value11", 7)))
    {
        output = PORT2_IOCR12_PC14::value11;
    }
    else if ((result = !strncmp(data, "value12", 7)))
    {
        output = PORT2_IOCR12_PC14::value12;
    }
    else if ((result = !strncmp(data, "value13", 7)))
    {
        output = PORT2_IOCR12_PC14::value13;
    }
    else if ((result = !strncmp(data, "value14", 7)))
    {
        output = PORT2_IOCR12_PC14::value14;
    }
    else if ((result = !strncmp(data, "value15", 7)))
    {
        output = PORT2_IOCR12_PC14::value15;
    }
    else if ((result = !strncmp(data, "value16", 7)))
    {
        output = PORT2_IOCR12_PC14::value16;
    }
    else if ((result = !strncmp(data, "value17", 7)))
    {
        output = PORT2_IOCR12_PC14::value17;
    }
    else if ((result = !strncmp(data, "value18", 7)))
    {
        output = PORT2_IOCR12_PC14::value18;
    }

    return result;
}

}; // namespace XMC4700
