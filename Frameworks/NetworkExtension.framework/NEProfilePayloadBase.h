/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate> {
    NSDictionary * _payloadAtom;
    NSMutableDictionary * _pendingCertificates;
    NSDictionary * _pluginUpgradeInfo;
}

@property (nonatomic, retain) NSDictionary *payloadAtom;
@property (retain) NSMutableDictionary *pendingCertificates;
@property (retain) NSDictionary *pluginUpgradeInfo;

- (void).cxx_destruct;
- (bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2;
- (bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getPreprocessedPayloadContents;
- (id)initWithPayload:(id)arg1;
- (id)payloadAtom;
- (id)pendingCertificates;
- (id)pluginUpgradeInfo;
- (void)setPayloadAtom:(id)arg1;
- (void)setPendingCertificates:(id)arg1;
- (void)setPluginUpgradeInfo:(id)arg1;
- (bool)setPostprocessedPayloadContents:(id)arg1;
- (id)validatePayload;

@end
