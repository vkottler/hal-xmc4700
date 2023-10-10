/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_TBCTR_LOF : uint8_t
{
    value1 /*!< A standard transmit buffer event occurs when the filling level
              equals the limit value and gets lower due to transmission of a
              data word. */
        ,
    value2 = 1 /*!< A standard transmit buffer interrupt event occurs when the
                  filling level equals the limit value and gets bigger due to a
                  write access to a data input location INx. */
};
static_assert(sizeof(USIC_TBCTR_LOF) == 1);

static constexpr uint16_t USIC_TBCTR_LOF_id = 1344;

/**
 * Converts USIC_TBCTR_LOF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_TBCTR_LOF instance)
{
    const char *result = "UNKNOWN USIC_TBCTR_LOF";

    switch (instance)
    {
    case USIC_TBCTR_LOF::value1:
        result = "value1";
        break;
    case USIC_TBCTR_LOF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_TBCTR_LOF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_TBCTR_LOF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_TBCTR_LOF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_TBCTR_LOF::value2;
    }

    return result;
}

}; // namespace XMC4700