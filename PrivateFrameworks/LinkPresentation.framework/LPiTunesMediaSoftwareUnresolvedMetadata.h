/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    NSString * _genre;
    NSNumber * _hasMessagesExtension;
    LPiTunesMediaAsset * _icon;
    NSNumber * _isHiddenFromSpringboard;
    LPiTunesMediaAsset * _messagesAppIcon;
    NSString * _name;
    NSString * _platform;
    NSArray * _screenshots;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSNumber *hasMessagesExtension;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPiTunesMediaAsset *icon;
@property (nonatomic, copy) NSNumber *isHiddenFromSpringboard;
@property (nonatomic, retain) LPiTunesMediaAsset *messagesAppIcon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, retain) NSArray *screenshots;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetsToResolve;
- (id)genre;
- (id)hasMessagesExtension;
- (id)icon;
- (id)isHiddenFromSpringboard;
- (id)messagesAppIcon;
- (id)name;
- (id)platform;
- (id)resolve;
- (id)screenshots;
- (void)setGenre:(id)arg1;
- (void)setHasMessagesExtension:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsHiddenFromSpringboard:(id)arg1;
- (void)setMessagesAppIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setScreenshots:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
