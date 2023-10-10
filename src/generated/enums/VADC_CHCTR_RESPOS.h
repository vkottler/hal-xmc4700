/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_CHCTR_RESPOS : uint8_t
{
    value1 /*!< Store results left-aligned */,
    value2 = 1 /*!< Store results right-aligned */
};
static_assert(sizeof(VADC_CHCTR_RESPOS) == 1);

static constexpr uint16_t VADC_CHCTR_RESPOS_id = 1604;

/**
 * Converts VADC_CHCTR_RESPOS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_CHCTR_RESPOS instance)
{
    const char *result = "UNKNOWN VADC_CHCTR_RESPOS";

    switch (instance)
    {
    case VADC_CHCTR_RESPOS::value1:
        result = "value1";
        break;
    case VADC_CHCTR_RESPOS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_CHCTR_RESPOS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_CHCTR_RESPOS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_CHCTR_RESPOS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_CHCTR_RESPOS::value2;
    }

    return result;
}

}; // namespace XMC4700
