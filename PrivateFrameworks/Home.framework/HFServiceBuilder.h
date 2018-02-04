/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder> {
    NSString * _associatedServiceType;
    <HFIconDescriptor> * _iconDescriptor;
    bool  isFavorite;
    NSString * name;
    HFRoomBuilder * room;
}

@property (nonatomic, copy) NSString *associatedServiceType;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, retain) HFRoomBuilder *room;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFavoriting;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_lazilyUpdateAssociatedServiceType;
- (id)_lazilyUpdateDateAdded;
- (id)_lazilyUpdateFavorite;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_performValidation;
- (id)accessories;
- (id)associatedServiceType;
- (id)availableIconDescriptors;
- (id)commitItem;
- (id)description;
- (id)iconDescriptor;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isFavorite;
- (id)name;
- (id)originalName;
- (id)removeItemFromHome;
- (id)room;
- (id)service;
- (void)setAssociatedServiceType:(id)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRoom:(id)arg1;
- (bool)supportsFavoriting;

@end
