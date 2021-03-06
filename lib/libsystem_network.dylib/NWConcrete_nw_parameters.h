/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters> {
    char * account_id;
    NSObject<OS_xpc_object> * application_protocols;
    char * e_bundle_id;
    NSObject<OS_xpc_object> * effective_proxy_settings;
    NSObject<OS_dispatch_data> * initial_data_payload;
    NSObject<OS_xpc_object> * internet_protocols;
    NSObject<OS_nw_endpoint> * local_address;
    NSObject<OS_xpc_object> * metadata;
    NSObject<OS_xpc_object> * preferred_netagent_domains;
    NSObject<OS_xpc_object> * preferred_netagent_types;
    NSObject<OS_xpc_object> * preferred_netagent_uuids;
    NSObject<OS_xpc_object> * prohibited_interface_subtypes;
    NSObject<OS_xpc_object> * prohibited_interface_types;
    NSObject<OS_xpc_object> * prohibited_interfaces;
    NSObject<OS_xpc_object> * prohibited_netagent_domains;
    NSObject<OS_xpc_object> * prohibited_netagent_types;
    NSObject<OS_xpc_object> * prohibited_netagent_uuids;
    NSObject<OS_xpc_object> * proxy_configuration;
    NSObject<OS_nw_interface> * required_interface;
    NSObject<OS_xpc_object> * required_netagent_domains;
    NSObject<OS_xpc_object> * required_netagent_types;
    NSObject<OS_xpc_object> * required_netagent_uuids;
    char * sanitized_url;
    NSObject<OS_xpc_object> * ssl_cipher_suites;
    NSObject<OS_xpc_object> * tls_session_id;
    NSObject<OS_nw_array> * transforms;
    NSObject<OS_xpc_object> * transport_protocols;
    char * url;
    struct { 
        unsigned char proc_uuid[16]; 
        unsigned char e_proc_uuid[16]; 
        unsigned char parent_id[16]; 
        unsigned long long read_buffer_size; 
        unsigned int keepalive_idle_time; 
        unsigned int keepalive_interval; 
        unsigned int traffic_class; 
        int pid; 
        unsigned int uid; 
        struct { 
            unsigned int val[8]; 
        } e_audit_token; 
        int mtu_override; 
        int data_mode; 
        int required_interface_type; 
        int required_interface_subtype; 
        int ecn_mode; 
        int multipath_service; 
        unsigned int sleep_keepalive_interval; 
        unsigned char address_family; 
        unsigned char ip_protocol; 
        unsigned short minimum_tls_protocol_version; 
        unsigned short maximum_tls_protocol_version; 
        unsigned int dry_run : 1; 
        unsigned int prohibit_expensive_paths : 1; 
        unsigned int prohibit_roaming : 1; 
        unsigned int no_proxy : 1; 
        unsigned int no_transform : 1; 
        unsigned int use_tfo : 1; 
        unsigned int use_tfo_has_been_set : 1; 
        unsigned int use_tfo_no_cookie : 1; 
        unsigned int use_tfo_heuristics : 1; 
        unsigned int reduce_buffering : 1; 
        unsigned int no_delay : 1; 
        unsigned int use_long_outstanding_queries : 1; 
        unsigned int use_awdl : 1; 
        unsigned int use_p2p : 1; 
        unsigned int resolve_ptr : 1; 
        unsigned int indefinite : 1; 
        unsigned int reuse_local_address : 1; 
        unsigned int no_fallback : 1; 
        unsigned int multipath_fallback : 1; 
        unsigned int tls : 1; 
        unsigned int extended_background_idle : 1; 
        unsigned int receive_any_interface : 1; 
        unsigned int background_traffic_management : 1; 
        unsigned int disable_boringssl : 1; 
        unsigned int enable_tls13 : 1; 
        unsigned int disable_blackhole_detection : 1; 
        unsigned int keepalive : 1; 
        unsigned int keepalive_offload : 1; 
        unsigned int custom_protocols_only : 1; 
        unsigned int discretionary : 1; 
        unsigned int tls_session_ticket : 1; 
        unsigned int bundle_id_to_uuid_mapping_failed : 1; 
        unsigned int pid_to_uuid_mapping_failed : 1; 
        unsigned int allow_socket_access : 1; 
        unsigned int local_only : 1; 
        unsigned int tls_enforce_ev : 1; 
        unsigned int server : 1; 
        unsigned int is_fallback : 1; 
        unsigned int desperate_ivan : 1; 
        unsigned int tls_should_trust_invalid_certificates : 1; 
        unsigned char __pad[5]; 
    }  value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /usr/lib/system/libsystem_network.dylib

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithParameters:(id)arg1 stripConnected:(bool)arg2;

// Image: /usr/lib/libnetwork.dylib

- (id)description;

@end
