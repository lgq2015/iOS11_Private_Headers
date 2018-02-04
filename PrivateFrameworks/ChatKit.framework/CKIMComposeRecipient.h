/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKIMComposeRecipient : MFComposeRecipient <CKIMComposeRecipient> {
    IMHandle * _handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)commentedAddress;
- (id)compositeName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayString;
- (id)handle;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithHandle:(id)arg1;
- (id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isRemovableFromSearchResults;
- (id)label;
- (id)objectForDragType:(id)arg1;
- (int)property;
- (void*)record;
- (int)recordID;
- (void)releaseIMReferences;
- (void)setIdentifier:(int)arg1;
- (void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)supportedDragTypes;
- (id)uncommentedAddress;
- (id)unlocalizedLabel;

@end
