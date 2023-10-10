/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_CHCTR_CHEVMODE : uint8_t
{
    value1 /*!< Never */,
    value2 = 1 /*!< NCM: If result is inside the boundary band FCM: If result
                  becomes high (above cmp. val.) */
        ,
    value3 = 2 /*!< NCM: If result is outside the boundary band FCM: If result
                  becomes low (below cmp. val.) */
        ,
    value4 = 3 /*!< NCM: Always (ignore band) FCM: If result switches to either
                  level */
};
static_assert(sizeof(VADC_CHCTR_CHEVMODE) == 1);

static constexpr uint16_t VADC_CHCTR_CHEVMODE_id = 1609;

/**
 * Converts VADC_CHCTR_CHEVMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_CHCTR_CHEVMODE instance)
{
    const char *result = "UNKNOWN VADC_CHCTR_CHEVMODE";

    switch (instance)
    {
    case VADC_CHCTR_CHEVMODE::value1:
        result = "value1";
        break;
    case VADC_CHCTR_CHEVMODE::value2:
        result = "value2";
        break;
    case VADC_CHCTR_CHEVMODE::value3:
        result = "value3";
        break;
    case VADC_CHCTR_CHEVMODE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_CHCTR_CHEVMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_CHCTR_CHEVMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_CHCTR_CHEVMODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_CHCTR_CHEVMODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_CHCTR_CHEVMODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_CHCTR_CHEVMODE::value4;
    }

    return result;
}

}; // namespace XMC4700
