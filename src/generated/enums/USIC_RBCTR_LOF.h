/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_RBCTR_LOF : uint8_t
{
    value1 /*!< A standard receive buffer event occurs when the filling level
              equals the limit value and gets lower due to a read access from
              OUTR. */
        ,
    value2 = 1 /*!< A standard receive buffer event occurs when the filling
                  level equals the limit value and gets bigger due to the
                  reception of a new data word. */
};
static_assert(sizeof(USIC_RBCTR_LOF) == 1);

static constexpr uint16_t USIC_RBCTR_LOF_id = 1353;

/**
 * Converts USIC_RBCTR_LOF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_RBCTR_LOF instance)
{
    const char *result = "UNKNOWN USIC_RBCTR_LOF";

    switch (instance)
    {
    case USIC_RBCTR_LOF::value1:
        result = "value1";
        break;
    case USIC_RBCTR_LOF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_RBCTR_LOF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_RBCTR_LOF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_RBCTR_LOF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_RBCTR_LOF::value2;
    }

    return result;
}

}; // namespace XMC4700
