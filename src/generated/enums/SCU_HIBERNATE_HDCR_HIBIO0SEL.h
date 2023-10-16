/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCR_HIBIO0SEL : uint8_t
{
    value1 /*!< Direct input, No input pull device connected */,
    value2 = 1 /*!< Direct input, Input pull-down device connected */,
    value3 = 2 /*!< Direct input, Input pull-up device connected */,
    value4 = 8 /*!< Push-pull HIB Control output */,
    value5 = 9 /*!< Push-pull WDT service output */,
    value6 = 10 /*!< Push-pull GPIO output */,
    value7 = 12 /*!< Open-drain HIB Control output */,
    value8 = 13 /*!< Open-drain WDT service output */,
    value9 = 14 /*!< Open-drain GPIO output */,
    value10 = 15 /*!< Analog input */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_HIBIO0SEL) == 1);

/**
 * Converts SCU_HIBERNATE_HDCR_HIBIO0SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_HIBIO0SEL instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_HIBIO0SEL";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value2:
        result = "value2";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value3:
        result = "value3";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value4:
        result = "value4";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value5:
        result = "value5";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value6:
        result = "value6";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value7:
        result = "value7";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value8:
        result = "value8";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value9:
        result = "value9";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0SEL::value10:
        result = "value10";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_HIBIO0SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_HIBIO0SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value8;
    }
    else if ((result = !strncmp(data, "value9", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value9;
    }
    else if ((result = !strncmp(data, "value10", 7)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0SEL::value10;
    }

    return result;
}

}; // namespace XMC4700
