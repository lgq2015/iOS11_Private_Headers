/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreAceConnectionAnalysisInfo : NSObject {
    SiriCoreConnectionType * _connectionType;
    NSURL * _connectionURL;
    int  _interfaceIndex;
    NSNumber * _sendBufferSize;
    bool  _wwanPreferred;
}

@property (nonatomic, readonly) SiriCoreConnectionType *connectionType;
@property (nonatomic, readonly) NSURL *connectionURL;
@property (nonatomic, readonly) int interfaceIndex;
@property (nonatomic, readonly, copy) NSNumber *sendBufferSize;
@property (nonatomic, readonly) bool wwanPreferred;

- (void).cxx_destruct;
- (id)connectionType;
- (id)connectionURL;
- (id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(bool)arg4 connectionType:(id)arg5;
- (int)interfaceIndex;
- (id)sendBufferSize;
- (bool)wwanPreferred;

@end
