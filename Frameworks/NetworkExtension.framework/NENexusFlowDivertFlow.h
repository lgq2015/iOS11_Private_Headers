/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID * _clientID;
    struct _NEFlow { } * _flowDivertFlow;
    NWEndpoint * _internalEndpoint;
    NWParameters * _internalParameters;
}

@property (retain) NSUUID *clientID;
@property struct _NEFlow { }*flowDivertFlow;
@property (retain) NWEndpoint *internalEndpoint;
@property (retain) NWParameters *internalParameters;

- (void).cxx_destruct;
- (id)clientID;
- (id)clientIdentifier;
- (void)dealloc;
- (id)endpoint;
- (struct _NEFlow { }*)flowDivertFlow;
- (id)initWithFlowDivertFlow:(struct _NEFlow { }*)arg1;
- (id)internalEndpoint;
- (id)internalParameters;
- (id)parameters;
- (void)setClientID:(id)arg1;
- (void)setFlowDivertFlow:(struct _NEFlow { }*)arg1;
- (void)setInternalEndpoint:(id)arg1;
- (void)setInternalParameters:(id)arg1;

@end
