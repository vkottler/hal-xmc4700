/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG1_TRIGMOD : uint8_t
{
    value1 /*!< internal Trigger (integer divided clock - see FREQ parameter)
            */
        ,
    value2 =
        1 /*!< external Trigger (preselected trigger by TRIGSEL parameter) */,
    value3 = 2 /*!< software Trigger (see SWTRIG parameter) */
};
static_assert(sizeof(DAC_DAC0CFG1_TRIGMOD) == 1);

static constexpr uint16_t DAC_DAC0CFG1_TRIGMOD_id = 2144;

/**
 * Converts DAC_DAC0CFG1_TRIGMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG1_TRIGMOD instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG1_TRIGMOD";

    switch (instance)
    {
    case DAC_DAC0CFG1_TRIGMOD::value1:
        result = "value1";
        break;
    case DAC_DAC0CFG1_TRIGMOD::value2:
        result = "value2";
        break;
    case DAC_DAC0CFG1_TRIGMOD::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG1_TRIGMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG1_TRIGMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DAC_DAC0CFG1_TRIGMOD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DAC_DAC0CFG1_TRIGMOD::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DAC_DAC0CFG1_TRIGMOD::value3;
    }

    return result;
}

}; // namespace XMC4700
