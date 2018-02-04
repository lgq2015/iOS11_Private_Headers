/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSInterDeviceSearchResult : NSObject {
    NSString * _deviceType;
    MCPeerID * _peerID;
}

@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) MCPeerID *peerID;

+ (id)searchResultWithPeerID:(id)arg1 deviceType:(id)arg2;

- (void).cxx_destruct;
- (id)deviceType;
- (unsigned long long)hash;
- (id)initWithPeerID:(id)arg1 deviceType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)peerID;
- (void)setDeviceType:(id)arg1;
- (void)setPeerID:(id)arg1;

@end
