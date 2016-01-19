/// \file    DataCollector.h
/// \brief   Definition of the DataCollector interface.
///
/// \author  Vasco Barroso, CERN

#ifndef ALICEO2_MONITORING_CORE_DATA_COLLECTOR_INTERFACE_H
#define ALICEO2_MONITORING_CORE_DATA_COLLECTOR_INTERFACE_H

#include <string>

namespace AliceO2 {
/// ALICE O2 Monitoring system
namespace Monitoring {
/// Core features of ALICE O2 Monitoring system
namespace Core {
/// Interface to Monitoring system
///
/// Interface to Monitoring system, allowing any process
/// to send application-specific values
class DataCollectorInterface
{
  public:
    /// Destructor
    virtual ~DataCollectorInterface(){};

    /// Send integer value
    /// \param  cluster  Cluster name
    /// \param  node     Node name
    /// \param  metric   Metric name
    /// \param  value    Metric value
    virtual void sendValue(std::string cluster, std::string node, std::string metric, int value) = 0;

    /// Send double value
    /// \param  cluster  Cluster name
    /// \param  node     Node name
    /// \param  metric   Metric name
    /// \param  value    Metric value
    virtual void sendValue(std::string cluster, std::string node, std::string metric, double value) = 0;

    /// Send string value
    /// \param  cluster  Cluster name
    /// \param  node     Node name
    /// \param  metric   Metric name
    /// \param  value    Metric value
    virtual void sendValue(std::string cluster, std::string node, std::string metric, std::string value) = 0;

    /// Send timed integer value
    ///
    /// This function can be used to send values measured in the past
    /// \param  cluster    Cluster name
    /// \param  node       Node name
    /// \param  metric     Metric name
    /// \param  value      Metric value
    /// \param  timestamp  Timestamp of measurement in seconds
    virtual void sendTimedValue(std::string cluster, std::string node, std::string metric, int value, int timestamp) = 0;

    /// Send timed double value
    ///
    /// This function can be used to send values measured in the past
    /// \param  cluster    Cluster name
    /// \param  node       Node name
    /// \param  metric     Metric name
    /// \param  value      Metric value
    /// \param  timestamp  Timestamp of measurement in seconds
    virtual void sendTimedValue(std::string cluster, std::string node, std::string metric, double value, int timestamp) = 0;

    /// Send timed string value
    ///
    /// This function can be used to send values measured in the past
    /// \param  cluster    Cluster name
    /// \param  node       Node name
    /// \param  metric     Metric name
    /// \param  value      Metric value
    /// \param  timestamp  Timestamp of measurement in seconds
    virtual void sendTimedValue(std::string cluster, std::string node, std::string metric, std::string value, int timestamp) = 0;
};

} // namespace Core
} // namespace Monitoring
} // namespace AliceO2

#endif // ALICEO2_MONITORING_CORE_DATA_COLLECTOR_INTERFACE_H
