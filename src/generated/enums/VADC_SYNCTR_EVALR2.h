/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_SYNCTR_EVALR2 : uint8_t
{
    value1 /*!< No ready input control */,
    value2 = 1 /*!< Ready input Rx is considered for the start of a parallel
                  conversion of this conversion group */
};
static_assert(sizeof(VADC_SYNCTR_EVALR2) == 1);

static constexpr uint16_t VADC_SYNCTR_EVALR2_id = 1408;

/**
 * Converts VADC_SYNCTR_EVALR2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_SYNCTR_EVALR2 instance)
{
    const char *result = "UNKNOWN VADC_SYNCTR_EVALR2";

    switch (instance)
    {
    case VADC_SYNCTR_EVALR2::value1:
        result = "value1";
        break;
    case VADC_SYNCTR_EVALR2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_SYNCTR_EVALR2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_SYNCTR_EVALR2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_SYNCTR_EVALR2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_SYNCTR_EVALR2::value2;
    }

    return result;
}

}; // namespace XMC4700
