/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeKitTransformItem : HFTransformItem <HFHomeKitItemProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HFItem<HFHomeKitItemProtocol> *sourceHomeKitItem;
@property (readonly) Class superclass;

- (id)homeKitObject;
- (id)sourceHomeKitItem;

@end
