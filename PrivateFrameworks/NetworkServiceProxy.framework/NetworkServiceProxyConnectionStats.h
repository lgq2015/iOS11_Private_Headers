/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NetworkServiceProxyConnectionStats : NSObject <NSSecureCoding> {
    unsigned int  _alternate_path_count;
    unsigned int  _captive_present_count;
    unsigned int  _captive_present_failed_count;
    unsigned int  _connection_count;
    NetworkServiceProxyDurationBuckets * _duration_buckets;
    unsigned int  _exceeded_mss_count;
    long long  _interface_type;
    unsigned int  _mptcp_success_count;
    long long  _protocol_type;
    unsigned int  _restricted_network_count;
    unsigned int  _restricted_network_failed_count;
    unsigned int  _result_connection_reset_count;
    unsigned int  _result_network_unavailable_count;
    unsigned int  _result_response_timeout_count;
    unsigned int  _result_send_failure_count;
    unsigned int  _result_server_busy_count;
    unsigned int  _result_server_detached_count;
    unsigned int  _result_server_interrupt_count;
    unsigned int  _result_server_offline_count;
    unsigned int  _result_server_session_expired_count;
    unsigned int  _result_server_unreachable_count;
    unsigned int  _result_success_count;
    unsigned int  _result_unknown_error_count;
    unsigned int  _tfo_success_count;
}

@property unsigned int alternate_path_count;
@property unsigned int captive_present_count;
@property unsigned int captive_present_failed_count;
@property unsigned int connection_count;
@property (retain) NetworkServiceProxyDurationBuckets *duration_buckets;
@property unsigned int exceeded_mss_count;
@property long long interface_type;
@property unsigned int mptcp_success_count;
@property long long protocol_type;
@property unsigned int restricted_network_count;
@property unsigned int restricted_network_failed_count;
@property unsigned int result_connection_reset_count;
@property unsigned int result_network_unavailable_count;
@property unsigned int result_response_timeout_count;
@property unsigned int result_send_failure_count;
@property unsigned int result_server_busy_count;
@property unsigned int result_server_detached_count;
@property unsigned int result_server_interrupt_count;
@property unsigned int result_server_offline_count;
@property unsigned int result_server_session_expired_count;
@property unsigned int result_server_unreachable_count;
@property unsigned int result_success_count;
@property unsigned int result_unknown_error_count;
@property unsigned int tfo_success_count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (unsigned int)alternate_path_count;
- (unsigned int)captive_present_count;
- (unsigned int)captive_present_failed_count;
- (void)clear;
- (unsigned int)connection_count;
- (id)duration_buckets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)exceeded_mss_count;
- (id)getAWDMetric;
- (id)initWithCoder:(id)arg1;
- (long long)interface_type;
- (unsigned int)mptcp_success_count;
- (long long)protocol_type;
- (unsigned int)restricted_network_count;
- (unsigned int)restricted_network_failed_count;
- (unsigned int)result_connection_reset_count;
- (unsigned int)result_network_unavailable_count;
- (unsigned int)result_response_timeout_count;
- (unsigned int)result_send_failure_count;
- (unsigned int)result_server_busy_count;
- (unsigned int)result_server_detached_count;
- (unsigned int)result_server_interrupt_count;
- (unsigned int)result_server_offline_count;
- (unsigned int)result_server_session_expired_count;
- (unsigned int)result_server_unreachable_count;
- (unsigned int)result_success_count;
- (unsigned int)result_unknown_error_count;
- (void)setAlternate_path_count:(unsigned int)arg1;
- (void)setCaptive_present_count:(unsigned int)arg1;
- (void)setCaptive_present_failed_count:(unsigned int)arg1;
- (void)setConnection_count:(unsigned int)arg1;
- (void)setDuration_buckets:(id)arg1;
- (void)setExceeded_mss_count:(unsigned int)arg1;
- (void)setInterface_type:(long long)arg1;
- (void)setMptcp_success_count:(unsigned int)arg1;
- (void)setProtocol_type:(long long)arg1;
- (void)setRestricted_network_count:(unsigned int)arg1;
- (void)setRestricted_network_failed_count:(unsigned int)arg1;
- (void)setResult_connection_reset_count:(unsigned int)arg1;
- (void)setResult_network_unavailable_count:(unsigned int)arg1;
- (void)setResult_response_timeout_count:(unsigned int)arg1;
- (void)setResult_send_failure_count:(unsigned int)arg1;
- (void)setResult_server_busy_count:(unsigned int)arg1;
- (void)setResult_server_detached_count:(unsigned int)arg1;
- (void)setResult_server_interrupt_count:(unsigned int)arg1;
- (void)setResult_server_offline_count:(unsigned int)arg1;
- (void)setResult_server_session_expired_count:(unsigned int)arg1;
- (void)setResult_server_unreachable_count:(unsigned int)arg1;
- (void)setResult_success_count:(unsigned int)arg1;
- (void)setResult_unknown_error_count:(unsigned int)arg1;
- (void)setTfo_success_count:(unsigned int)arg1;
- (unsigned int)tfo_success_count;

@end
